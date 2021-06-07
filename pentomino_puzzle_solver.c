
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define using_johnsonlib
#define using_johnsonlib_graphics
#include "johnsonlib.c"

double FN_configure_board(double, double);
double FN_getw(double);
double FN_geth(double);
double FN_countspaces(double);
double FN_ffill(double, double, double);
double FN__isstupid_clr();
double FN__ispossible_ffill(double, double, double);
double FN_ispossible();
double FN_firstempty_yl_xl(double, double, double);
double FN_min(double, double);
double FN_max(double, double);
double FN_newsolve(double);
double FN_freespaces();
double FN_canput(double, double, double, double);
double FN_pindex(double, double, double);
double FN_put(double, double, double, double);
double FN_addpiece(double);
double FN__addpiece(double);
double FN_swap(double, double);
double FN_createrotated(double);
double FN_createflipped(double);
double FN_createpiece( double[] );
double FN_blankpiece(double, double);
double FN__printpiece(double);
double FN___addpiece(double);
double FN__dp_col(double, double);
double FN__dp_surrounds(double, double, double, double, double);
double FN__12cols(double);
double FN__mulcol(double, double);
double FN_mulcol(double, double);
double FN__dp_square(double, double, double, double, double);
double FN_drawpiece(double, double, double, double, double, double);
double FN_drawavailable(double, double, double);
double FN_symmetry_check();
double FN_pieceisthesame(double, double);
double FN_guiinit();
double FN_boxchk(double, double, double, double, double, double);
double FN_button(double, double, double);
double FN_gui_btnw(double);
double FN_gui_proc(double);
double FN_gui_intbox(double, double, double);
double FN_gui_ibw(double);
double FN_leaktest();
double FN__wh_limit(double);
double FN__squarer(double, double, double);
double FN_gui_tickbox(double, double, double, double);
double FN___piece_switch(double, double, double);
double FN__options_screen();
double FN__controlbox();
double FN_graphics_display();

double *VAR_gui_fg = NULL;
double *VAR_gui_bg = NULL;
double *VAR_gui_mb = NULL;
double *VAR_gui_omb = NULL;
double *VAR_gui_redraw = NULL;
double *VAR_gui_reqrd = NULL;
double *VAR_gui_csx = NULL;
double *VAR_gui_csy = NULL;
double *VAR_pieces = NULL;
double *VAR_isinuse = NULL;
double *VAR_num_pieces = NULL;
double *VAR_board = NULL;
double *VAR_ww = NULL;
double *VAR_hh = NULL;
double *VAR_wwm1 = NULL;
double *VAR_hhm1 = NULL;
double *VAR_bspaces = NULL;
double *VAR_board_end = NULL;
double *VAR_alreadytried = NULL;
double *VAR__ip_minx = NULL;
double *VAR__ip_miny = NULL;
double CON_b2; double *VAR_www = NULL;
double *VAR_hhh = NULL;
double *VAR_opx = NULL;
double *VAR_opy = NULL;
double *VAR_animate = NULL;
double *VAR_paused = NULL;
double *VAR_cancel = NULL;
double *VAR_solutions = NULL;
double *VAR_maxspaces = NULL;
double *VAR_pauseforsol = NULL;
int Unnamed_string_variable_0;
int Unnamed_string_variable_1;
int Unnamed_string_variable_2;
int Unnamed_string_variable_3;
int Unnamed_string_variable_4;
int Unnamed_string_variable_5;
int Unnamed_string_variable_6;
int Unnamed_string_variable_7;
int Unnamed_string_variable_8;
int Unnamed_string_variable_9;
int Unnamed_string_variable_10;
int Unnamed_string_variable_11;
int Unnamed_string_variable_12;
SVR *J_caseof_0_val_svr=NULL;
int Unnamed_string_variable_13;
int Unnamed_string_variable_14;
int Unnamed_string_variable_15;
int Unnamed_string_variable_16;
int Unnamed_string_variable_17;
int Unnamed_string_variable_18;
int Unnamed_string_variable_19;
int Unnamed_string_variable_20;
int Unnamed_string_variable_21;
int Unnamed_string_variable_22;


int main(int argc, char **argv){
 Johnsonlib_init(argc,argv);
 double VarsArray[2148]; Johnson_vsize=2148; FirstVarP = VarsArray;
 Johnson_num_funcs = 49;
 VAR_gui_fg = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_gui_bg = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_gui_mb = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_gui_omb = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_gui_redraw = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_gui_reqrd = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_gui_csx = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_gui_csy = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_pieces = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_isinuse = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_num_pieces = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_board = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_ww = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_hh = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_wwm1 = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_hhm1 = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_bspaces = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_board_end = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_alreadytried = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR__ip_minx = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR__ip_miny = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_www = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_hhh = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_opx = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_opy = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_animate = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_paused = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_cancel = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_solutions = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_maxspaces = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 VAR_pauseforsol = &FirstVarP[ (int)Johnson_alloc(1) ] ;
 Unnamed_string_variable_0 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){"+"}} )->string_variable_number);
 Unnamed_string_variable_1 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){"z"}} )->string_variable_number);
 Unnamed_string_variable_2 = (SetSVR( NewStringvar_svrp(), (SVL){ 3, (char[]){"gun"}} )->string_variable_number);
 Unnamed_string_variable_3 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){"L"}} )->string_variable_number);
 Unnamed_string_variable_4 = (SetSVR( NewStringvar_svrp(), (SVL){ 2, (char[]){"_s"}} )->string_variable_number);
 Unnamed_string_variable_5 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){"T"}} )->string_variable_number);
 Unnamed_string_variable_6 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){"t"}} )->string_variable_number);
 Unnamed_string_variable_7 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){"1"}} )->string_variable_number);
 Unnamed_string_variable_8 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){"C"}} )->string_variable_number);
 Unnamed_string_variable_9 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){"Q"}} )->string_variable_number);
 Unnamed_string_variable_10 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){"S"}} )->string_variable_number);
 Unnamed_string_variable_11 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){"|"}} )->string_variable_number);
 Unnamed_string_variable_12 = (SetSVR( NewStringvar_svrp(), (SVL){ 6, (char[]){"thanks"}} )->string_variable_number);
 J_caseof_0_val_svr = calloc(1,sizeof(SVR));
 Unnamed_string_variable_13 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){"<"}} )->string_variable_number);
 Unnamed_string_variable_14 = (SetSVR( NewStringvar_svrp(), (SVL){ 1, (char[]){">"}} )->string_variable_number);
 Unnamed_string_variable_15 = (SetSVR( NewStringvar_svrp(), (SVL){ 5, (char[]){"Solve"}} )->string_variable_number);
 Unnamed_string_variable_16 = (SetSVR( NewStringvar_svrp(), (SVL){ 7, (char[]){"animate"}} )->string_variable_number);
 Unnamed_string_variable_17 = (SetSVR( NewStringvar_svrp(), (SVL){ 9, (char[]){"autopause"}} )->string_variable_number);
 Unnamed_string_variable_18 = (SetSVR( NewStringvar_svrp(), (SVL){ 8, (char[]){"Continue"}} )->string_variable_number);
 Unnamed_string_variable_19 = (SetSVR( NewStringvar_svrp(), (SVL){ 8, (char[]){"Pause "}} )->string_variable_number);
 Unnamed_string_variable_20 = (SetSVR( NewStringvar_svrp(), (SVL){ 6, (char[]){"Cancel"}} )->string_variable_number);
 Unnamed_string_variable_21 = (SetSVR( NewStringvar_svrp(), (SVL){ 7, (char[]){"animate"}} )->string_variable_number);
 Unnamed_string_variable_22 = (SetSVR( NewStringvar_svrp(), (SVL){ 9, (char[]){"autopause"}} )->string_variable_number);
 
 /*
 there was an 'option ssize' here: 
 0x1p+11 
 */
 FN_guiinit() ;
 *VAR_pieces = Johnson_alloc( 0x1p+8 ) ;
 *VAR_isinuse = Johnson_alloc( (double)(int)( ( 0x1p+8 / 0x1p+3 ) ) ) ;
 *VAR_alreadytried = Johnson_alloc( 0x1p+8 ) ;
 *VAR_board = FN_blankpiece( 0x1.4p+4 , 0x1.4p+4 ) ;
 CON_b2 = ( *VAR_board + 0x1p+1 ) ;
 FN_configure_board( 0x1.8p+3 , 0x1.4p+2 ) ;
 FN___addpiece( (double)Unnamed_string_variable_0 ) ;
 FN___addpiece( (double)Unnamed_string_variable_1 ) ;
 FN___addpiece( (double)Unnamed_string_variable_2 ) ;
 FN___addpiece( (double)Unnamed_string_variable_3 ) ;
 FN___addpiece( (double)Unnamed_string_variable_4 ) ;
 FN___addpiece( (double)Unnamed_string_variable_5 ) ;
 FN___addpiece( (double)Unnamed_string_variable_6 ) ;
 FN___addpiece( (double)Unnamed_string_variable_7 ) ;
 FN___addpiece( (double)Unnamed_string_variable_8 ) ;
 FN___addpiece( (double)Unnamed_string_variable_9 ) ;
 FN___addpiece( (double)Unnamed_string_variable_10 ) ;
 FN___addpiece( (double)Unnamed_string_variable_11 ) ;
 FN_symmetry_check() ;
 Johnson_StartGraphics( 0x1.64p+8 , 0x1.6ap+8 );
 {
  SVL J_wintitle_svl = (SVL){ 23, (char[]){"Pentomino puzzle solver"}} ;
  char J_wintitle_svl_hold = J_wintitle_svl.buf[J_wintitle_svl.len]; J_wintitle_svl.buf[J_wintitle_svl.len]=0;
  SetWindowTitle(J_wintitle_svl.buf);
  J_wintitle_svl.buf[J_wintitle_svl.len] = J_wintitle_svl_hold;
 }
 Johnson_RefreshMode( 0x1p+0 );
 *VAR_pauseforsol = 0x1p+0 ;
 *VAR_opx = -0x1p+0 ;
 *VAR_opy = -0x1p+0 ;
 *VAR_maxspaces = ( 0x1.4p+2 * 0x1.8p+3 ) ;
 *VAR_www = FN_getw( *VAR_board ) ;
 *VAR_hhh = FN_geth( *VAR_board ) ;
 while( 0x1p+0 ){
  FN__options_screen() ;
  Cls();
  GcolDirect( MyColour2( -0x1p+0 ) );
  Johnson_DrawText( (SVL){ 11, (char[]){"Please wait"}} , 0x1p+0 , 0x1.9p+4 , 0x1.9p+4 ,++SAL);
  Refresh();
  Cls();
  FN__controlbox() ;
  FN_newsolve( 0x1p+0 ) ;
  *VAR_gui_reqrd = 0x1p+0 ;
  if( (double)!( *VAR_cancel ) ){
   Label_solmessage:
   FN_gui_proc( 0x1p+0 ) ;
   if( *VAR_gui_redraw ){
    GcolDirect( MyColour2( -0x1p+0 ) );
    Johnson_DrawText( CatS( StrS( *VAR_solutions ,++SAL) ,CatS( (SVL){ 16, (char[]){" solutions found"}} ,(SVL){0,"PENIS"} ,++SAL) ,++SAL) , 0x0p+0 , 0x1p+3 , 0x1p+3 ,++SAL);
   }
   if( (double)!( FN_button( (double)Unnamed_string_variable_12 , ( 0x1p+3 + 0x1p+4 + 0x1p+3 ) , 0x1p+3 ) ) ){
    goto Label_solmessage;
   }
  }
  *VAR_cancel = 0x0p+0 ;
  *VAR_solutions = 0x0p+0 ;
  *VAR_paused = 0x0p+0 ;
  *VAR_gui_reqrd = 0x1p+0 ;
 }
}

double FN_configure_board(double PR_h, double PR_w){
 double LC_i; 
 FirstVarP[(int)( *VAR_board )] = PR_w ;
 FirstVarP[(int)( *VAR_board )+(int)( 0x1p+0 )] = PR_h ;
 *VAR_ww = FN_getw( *VAR_board ) ;
 *VAR_wwm1 = ( *VAR_ww - 0x1p+0 ) ;
 *VAR_hh = FN_geth( *VAR_board ) ;
 *VAR_hhm1 = ( *VAR_hh - 0x1p+0 ) ;
 *VAR_board_end = ( CON_b2 + ( *VAR_ww * *VAR_hh ) ) ;
 LC_i = CON_b2 ;
 while( (double)( LC_i < *VAR_board_end ) ){
  FirstVarP[(int)( LC_i )] = 0x0p+0 ;
  LC_i = ( LC_i + 0x1p+0 ) ;
 }
 *VAR_bspaces = FN_countspaces( *VAR_board ) ;
 return 0.0;
 printf("\nJOHNSONSCRIPT WARNING: Reached end of main(). This should not normally happen\n");
}

double FN_getw(double PR_piece){
 return FirstVarP[(int)( PR_piece )+(int)( 0x0p+0 )] ;
}

double FN_geth(double PR_piece){
 return FirstVarP[(int)( PR_piece )+(int)( 0x1p+0 )] ;
}

double FN_countspaces(double PR_piece){
 double LC_i; double LC_l; double LC_c; 
 LC_l = ( FirstVarP[(int)( PR_piece )+(int)( 0x0p+0 )] * FirstVarP[(int)( PR_piece )+(int)( 0x1p+0 )] ) ;
 PR_piece = ( PR_piece + 0x1p+1 ) ;
 LC_c = 0x0p+0 ;
 LC_i = 0x0p+0 ;
 while( (double)( LC_i < LC_l ) ){
  LC_c = ( LC_c + (double)!( FirstVarP[(int)( PR_piece )+(int)( LC_i )] ) ) ;
  LC_i = ( LC_i + 0x1p+0 ) ;
 }
 return LC_c ;
}

double FN_ffill(double PR_p, double PR_y, double PR_x){
 double LC_r; 
 if( FirstVarP[(int)( PR_p )] ){
  return 0.0;
 }
 LC_r = 0x1p+0 ;
 FirstVarP[(int)( PR_p )] = -0x1p+1 ;
 if( (double)( PR_x > 0x0p+0 ) ){
  LC_r = ( LC_r + FN_ffill( ( PR_p - 0x1p+0 ) , PR_y , ( PR_x - 0x1p+0 ) ) ) ;
 }
 if( (double)( PR_x < *VAR_wwm1 ) ){
  LC_r = ( LC_r + FN_ffill( ( PR_p + 0x1p+0 ) , PR_y , ( PR_x + 0x1p+0 ) ) ) ;
 }
 if( (double)( PR_y > 0x0p+0 ) ){
  LC_r = ( LC_r + FN_ffill( ( PR_p - *VAR_ww ) , ( PR_y - 0x1p+0 ) , PR_x ) ) ;
 }
 if( (double)( PR_y < *VAR_hhm1 ) ){
  return ( LC_r + FN_ffill( ( PR_p + *VAR_ww ) , ( PR_y + 0x1p+0 ) , PR_x ) ) ;
 }
 return LC_r ;
}

double FN__isstupid_clr(){
 double LC_p; 
 LC_p = CON_b2 ;
 while( (double)( LC_p < *VAR_board_end ) ){
  if( (double)( FirstVarP[(int)( LC_p )] == -0x1p+1 ) ){
   FirstVarP[(int)( LC_p )] = 0x0p+0 ;
  }
  LC_p = ( LC_p + 0x1p+0 ) ;
 }
 return 0.0;
}

double FN__ispossible_ffill(double PR_p, double PR_y, double PR_x){
 if( (double)!( (double)( -0x1p+1 == FirstVarP[(int)( PR_p )] ) ) ){
  return 0.0;
 }
 FirstVarP[(int)( PR_p )] = 0x0p+0 ;
 if( (double)( PR_x < *VAR__ip_minx ) ){
  *VAR__ip_minx = PR_x ;
 }
 if( (double)( PR_y < *VAR__ip_miny ) ){
  *VAR__ip_miny = PR_y ;
 }
 if( (double)( PR_x > 0x0p+0 ) ){
  FN__ispossible_ffill( ( PR_p - 0x1p+0 ) , PR_y , ( PR_x - 0x1p+0 ) ) ;
 }
 if( (double)( PR_x < *VAR_wwm1 ) ){
  FN__ispossible_ffill( ( PR_p + 0x1p+0 ) , PR_y , ( PR_x + 0x1p+0 ) ) ;
 }
 if( (double)( PR_y > 0x0p+0 ) ){
  FN__ispossible_ffill( ( PR_p - *VAR_ww ) , ( PR_y - 0x1p+0 ) , PR_x ) ;
 }
 if( (double)( PR_y < *VAR_hhm1 ) ){
  FN__ispossible_ffill( ( PR_p + *VAR_ww ) , ( PR_y + 0x1p+0 ) , PR_x ) ;
 }
 return 0.0;
}

double FN_ispossible(){
 double LC_x; double LC_y; double LC_p; double LC_i; double LC_chk; double LC_v; 
 LC_chk = 0x0p+0 ;
 LC_y = 0x0p+0 ;
 LC_p = CON_b2 ;
 while( (double)( LC_y < *VAR_hh ) ){
  LC_x = 0x0p+0 ;
  while( (double)( LC_x < *VAR_ww ) ){
   if( (double)!( FirstVarP[(int)( LC_p )] ) ){
    LC_v = FN_ffill( LC_p , LC_y , LC_x ) ;
    if( (double)((int) LC_v % (int) 0x1.4p+2 ) ){
     FN__isstupid_clr() ;
     return 0.0;
    }
    if( (double)( LC_v == 0x1.4p+2 ) ){
     *VAR__ip_minx = LC_x ;
     *VAR__ip_miny = LC_y ;
     FN__ispossible_ffill( LC_p , LC_y , LC_x ) ;
     LC_i = 0x0p+0 ;
     while( (double)( LC_i < *VAR_num_pieces ) ){
      if( FN_canput( LC_i , *VAR__ip_miny , *VAR__ip_minx , FirstVarP[(int)( *VAR_pieces )+(int)( LC_i )] ) ){
       LC_v = (double)((int) 0x1p+0 << (int) (double)((int) LC_i >> (int) 0x1.8p+1 ) ) ;
       if( (double)((int) LC_v & (int) LC_chk ) ){
        FN__isstupid_clr() ;
        return 0.0;
       }
       LC_chk = (double)((int) LC_chk | (int) LC_v ) ;
       FN_put( -0x1p+1 , *VAR__ip_miny , *VAR__ip_minx , FirstVarP[(int)( *VAR_pieces )+(int)( LC_i )] ) ;
       goto Label_ispossible_next;
      }
      LC_i = ( LC_i + 0x1p+0 ) ;
     }
     FN__isstupid_clr() ;
     return 0.0;
    }
   }
   Label_ispossible_next:
   LC_p = ( LC_p + 0x1p+0 ) ;
   LC_x = ( LC_x + 0x1p+0 ) ;
  }
  LC_y = ( LC_y + 0x1p+0 ) ;
 }
 FN__isstupid_clr() ;
 return 0x1p+0 ;
}

double FN_firstempty_yl_xl(double PR_xl, double PR_yl, double PR_fe){
 double LC_x; double LC_y; double LC_pp; 
 LC_y = 0x0p+0 ;
 while( (double)( LC_y < *VAR_hh ) ){
  LC_x = 0x0p+0 ;
  while( (double)( LC_x < *VAR_ww ) ){
   LC_pp = ( CON_b2 + LC_x + ( LC_y * *VAR_ww ) ) ;
   if( (double)!( FirstVarP[(int)( LC_pp )] ) ){
    FirstVarP[(int)( PR_fe )] = LC_pp ;
    FirstVarP[(int)( PR_yl )] = ( LC_y + 0x1p+0 ) ;
    FirstVarP[(int)( PR_xl )] = ( LC_x + 0x1p+0 ) ;
    return 0.0;
   }
   LC_x = ( LC_x + 0x1p+0 ) ;
  }
  LC_y = ( LC_y + 0x1p+0 ) ;
 }
 return 0.0;
}

double FN_min(double PR_b, double PR_a){
 if( (double)( PR_a > PR_b ) ){
  return PR_b ;
 }
 return PR_a ;
}

double FN_newsolve(double PR_piecenum){
 double LC_i; double LC_x; double LC_y; double LC_fe; double LC_yl; double LC_xl; double LC_yL; double LC_xL; 
 if( *VAR_cancel ){
  return 0.0;
 }
 FN_firstempty_yl_xl( Johnson_getref(&LC_xl) , Johnson_getref(&LC_yl) , Johnson_getref(&LC_fe) ) ;
 LC_yL = ( LC_yl - 0x1.8p+2 ) ;
 if( (double)( LC_yL < 0x0p+0 ) ){
  LC_yL = 0x0p+0 ;
 }
 LC_xL = ( LC_xl - 0x1.8p+2 ) ;
 if( (double)( LC_xL < 0x0p+0 ) ){
  LC_xL = 0x0p+0 ;
 }
 LC_i = 0x0p+0 ;
 while( (double)( LC_i < *VAR_num_pieces ) ){
  if( (double)!( FirstVarP[(int)( *VAR_isinuse )+(int)( (double)((int) LC_i >> (int) 0x1.8p+1 ) )] ) ){
   if( (double)!( FirstVarP[(int)( *VAR_alreadytried )+(int)( LC_i )] ) ){
    LC_y = LC_yL ;
    while( (double)( LC_y < LC_yl ) ){
     LC_x = LC_xL ;
     while( (double)( LC_x < LC_xl ) ){
      if( FN_canput( LC_i , LC_y , LC_x , FirstVarP[(int)( *VAR_pieces )+(int)( LC_i )] ) ){
       FN_put( PR_piecenum , LC_y , LC_x , FirstVarP[(int)( *VAR_pieces )+(int)( LC_i )] ) ;
       FirstVarP[(int)( *VAR_isinuse )+(int)( (double)((int) LC_i >> (int) 0x1.8p+1 ) )] = 0x1p+0 ;
       if( (double)!( FirstVarP[(int)( LC_fe )] ) ){
        goto Label_skip;
       }
       if( FN_ispossible() ){
        *VAR_bspaces = ( *VAR_bspaces - 0x1.4p+2 ) ;
        if( (double)!( *VAR_bspaces ) ){
         if( *VAR_pauseforsol ){
          *VAR_paused = 0x1p+0 ;
         }
         *VAR_solutions = ( *VAR_solutions + 0x1p+0 ) ;
         *VAR_gui_reqrd = 0x1p+0 ;
        }
        FN__controlbox() ;
        if( (double)!( *VAR_cancel ) ){
         FN_newsolve( ( PR_piecenum + 0x1p+0 ) ) ;
        }
        FN_put( 0x0p+0 , LC_y , LC_x , FirstVarP[(int)( *VAR_pieces )+(int)( LC_i )] ) ;
        FirstVarP[(int)( *VAR_isinuse )+(int)( (double)((int) LC_i >> (int) 0x1.8p+1 ) )] = 0x0p+0 ;
        *VAR_bspaces = ( *VAR_bspaces + 0x1.4p+2 ) ;
        if( *VAR_cancel ){
         return 0.0;
        }
        goto Label_newsolve_next;
       }
       Label_skip:
       FN_put( 0x0p+0 , LC_y , LC_x , FirstVarP[(int)( *VAR_pieces )+(int)( LC_i )] ) ;
       FirstVarP[(int)( *VAR_isinuse )+(int)( (double)((int) LC_i >> (int) 0x1.8p+1 ) )] = 0x0p+0 ;
      }
      LC_x = ( LC_x + 0x1p+0 ) ;
     }
     LC_y = ( LC_y + 0x1p+0 ) ;
    }
   }
  }
  Label_newsolve_next:
  LC_i = ( LC_i + 0x1p+0 ) ;
 }
 return 0.0;
}

double FN_canput(double PR_n, double PR_py, double PR_px, double PR_src){
 double LC_x; double LC_y; double LC_w; double LC_h; double LC_p; 
 if( FirstVarP[(int)( *VAR_isinuse )+(int)( (double)((int) PR_n >> (int) 0x1.8p+1 ) )] ){
  return 0.0;
 }
 LC_w = FirstVarP[(int)( PR_src )] ;
 if( (double)( ( PR_px + LC_w ) > *VAR_ww ) ){
  return 0.0;
 }
 LC_h = FirstVarP[(int)( PR_src )+(int)( 0x1p+0 )] ;
 if( (double)( ( PR_py + LC_h ) > *VAR_hh ) ){
  return 0.0;
 }
 LC_p = ( PR_src + 0x1p+1 ) ;
 LC_y = 0x0p+0 ;
 while( (double)( LC_y < LC_h ) ){
  LC_x = 0x0p+0 ;
  while( (double)( LC_x < LC_w ) ){
   if( FirstVarP[(int)( LC_p )] ){
    if( FirstVarP[(int)( ( CON_b2 + ( PR_px + LC_x ) + ( *VAR_ww * ( PR_py + LC_y ) ) ) )] ){
     return 0.0;
    }
   }
   LC_p = ( LC_p + 0x1p+0 ) ;
   LC_x = ( LC_x + 0x1p+0 ) ;
  }
  LC_y = ( LC_y + 0x1p+0 ) ;
 }
 return 0x1p+0 ;
}

double FN_pindex(double PR_y, double PR_x, double PR_piece){
 return ( PR_piece + 0x1p+1 + PR_x + ( PR_y * FirstVarP[(int)( PR_piece )] ) ) ;
}

double FN_put(double PR__setto, double PR_py, double PR_px, double PR_src){
 double LC_x; double LC_y; double LC_w; double LC_h; double LC_p; 
 LC_w = FirstVarP[(int)( PR_src )] ;
 LC_h = FirstVarP[(int)( PR_src )+(int)( 0x1p+0 )] ;
 LC_y = 0x0p+0 ;
 LC_p = ( PR_src + 0x1p+1 ) ;
 while( (double)( LC_y < LC_h ) ){
  LC_x = 0x0p+0 ;
  while( (double)( LC_x < LC_w ) ){
   if( FirstVarP[(int)( LC_p )] ){
    FirstVarP[(int)( ( CON_b2 + PR_px + LC_x + ( *VAR_ww * ( PR_py + LC_y ) ) ) )] = PR__setto ;
   }
   LC_p = ( LC_p + 0x1p+0 ) ;
   LC_x = ( LC_x + 0x1p+0 ) ;
  }
  LC_y = ( LC_y + 0x1p+0 ) ;
 }
 return 0.0;
}

double FN_addpiece(double PR_piece){
 FirstVarP[(int)( *VAR_pieces )+(int)( *VAR_num_pieces )] = PR_piece ;
 *VAR_num_pieces = ( *VAR_num_pieces + 0x1p+0 ) ;
 return 0.0;
}

double FN__addpiece(double PR_piece){
 double LC_i; 
 FN_addpiece( PR_piece ) ;
 LC_i = 0x0p+0 ;
 while( (double)( LC_i < 0x1.8p+1 ) ){
  FN_addpiece( FN_createrotated( FirstVarP[(int)( *VAR_pieces )+(int)( ( *VAR_num_pieces - 0x1p+0 ) )] ) ) ;
  LC_i = ( LC_i + 0x1p+0 ) ;
 }
 FN_addpiece( FN_createflipped( PR_piece ) ) ;
 LC_i = 0x0p+0 ;
 while( (double)( LC_i < 0x1.8p+1 ) ){
  FN_addpiece( FN_createrotated( FirstVarP[(int)( *VAR_pieces )+(int)( ( *VAR_num_pieces - 0x1p+0 ) )] ) ) ;
  LC_i = ( LC_i + 0x1p+0 ) ;
 }
 return 0.0;
}

double FN_swap(double PR_b, double PR_a){
 double LC_c; 
 LC_c = FirstVarP[(int)( PR_a )] ;
 FirstVarP[(int)( PR_a )] = FirstVarP[(int)( PR_b )] ;
 FirstVarP[(int)( PR_b )] = LC_c ;
 return 0.0;
}

double FN_createrotated(double PR_piece){
 double LC_out; double LC_x; double LC_y; double LC_w; double LC_h; 
 LC_w = FirstVarP[(int)( PR_piece )+(int)( 0x0p+0 )] ;
 LC_h = FirstVarP[(int)( PR_piece )+(int)( 0x1p+0 )] ;
 FN_swap( Johnson_getref(&LC_h) , Johnson_getref(&LC_w) ) ;
 LC_out = Johnson_alloc( ( 0x1p+1 + ( LC_w * LC_h ) ) ) ;
 FirstVarP[(int)( LC_out )+(int)( 0x0p+0 )] = LC_w ;
 FirstVarP[(int)( LC_out )+(int)( 0x1p+0 )] = LC_h ;
 LC_y = 0x0p+0 ;
 while( (double)( LC_y < LC_h ) ){
  LC_x = 0x0p+0 ;
  while( (double)( LC_x < LC_w ) ){
   FirstVarP[(int)( FN_pindex( LC_y , LC_x , LC_out ) )] = FirstVarP[(int)( FN_pindex( ( FN_getw( LC_out ) - LC_x - 0x1p+0 ) , LC_y , PR_piece ) )] ;
   LC_x = ( LC_x + 0x1p+0 ) ;
  }
  LC_y = ( LC_y + 0x1p+0 ) ;
 }
 return LC_out ;
}

double FN_createflipped(double PR_piece){
 double LC_out; double LC_x; double LC_y; double LC_w; double LC_h; 
 LC_w = FirstVarP[(int)( PR_piece )+(int)( 0x0p+0 )] ;
 LC_h = FirstVarP[(int)( PR_piece )+(int)( 0x1p+0 )] ;
 LC_out = Johnson_alloc( ( 0x1p+1 + ( LC_w * LC_h ) ) ) ;
 FirstVarP[(int)( LC_out )+(int)( 0x0p+0 )] = LC_w ;
 FirstVarP[(int)( LC_out )+(int)( 0x1p+0 )] = LC_h ;
 LC_y = 0x0p+0 ;
 while( (double)( LC_y < LC_h ) ){
  LC_x = 0x0p+0 ;
  while( (double)( LC_x < LC_w ) ){
   FirstVarP[(int)( FN_pindex( LC_y , LC_x , LC_out ) )] = FirstVarP[(int)( FN_pindex( LC_y , ( LC_w - LC_x - 0x1p+0 ) , PR_piece ) )] ;
   LC_x = ( LC_x + 0x1p+0 ) ;
  }
  LC_y = ( LC_y + 0x1p+0 ) ;
 }
 return LC_out ;
}

double FN_createpiece( double Params[] ){
 double LC_out; double LC_x; double LC_y; double LC_p; 
 LC_out = Johnson_alloc( ( 0x1p+1 + ( Params[1] * Params[2] ) ) ) ;
 FirstVarP[(int)( LC_out )+(int)( 0x0p+0 )] = Params[1] ;
 FirstVarP[(int)( LC_out )+(int)( 0x1p+0 )] = Params[2] ;
 LC_p = 0x1p+1 ;
 LC_y = 0x0p+0 ;
 if( (double)!( (double)( ( Params[0] - 0x1p+1 ) == ( Params[1] * Params[2] ) ) ) ){
  PrintSVL( (SVL){ 4, (char[]){"FUCK"}} );printf("\n");
  exit(0);
 }
 while( (double)( LC_y < Params[2] ) ){
  LC_x = 0x0p+0 ;
  while( (double)( LC_x < Params[1] ) ){
   FirstVarP[(int)( LC_out )+(int)( ( 0x1p+1 + LC_x + ( LC_y * Params[1] ) ) )] = Params[(int)(1+( LC_p ))] ;
   LC_p = ( LC_p + 0x1p+0 ) ;
   LC_x = ( LC_x + 0x1p+0 ) ;
  }
  LC_y = ( LC_y + 0x1p+0 ) ;
 }
 return LC_out ;
}

double FN_blankpiece(double PR_h, double PR_w){
 double LC_out; 
 LC_out = Johnson_alloc( ( 0x1p+1 + ( PR_w * PR_h ) ) ) ;
 FirstVarP[(int)( LC_out )+(int)( 0x0p+0 )] = PR_w ;
 FirstVarP[(int)( LC_out )+(int)( 0x1p+0 )] = PR_h ;
 return LC_out ;
}

double FN___addpiece(double PR_s){
 { // caseof block (stringvalue type, non-constant)
  SetSVR(J_caseof_0_val_svr, SVRtoSVL( Johnson_stringvar_deref( PR_s ) ) );
  SVL J_caseof_0_val_svl = SVRtoSVL(J_caseof_0_val_svr);
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 1, (char[]){"+"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 11, 0x1.8p+1 , 0x1.8p+1 , 0x0p+0 , 0x1p+0 , 0x0p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x0p+0 , 0x1p+0 , 0x0p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 2, (char[]){"_s"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 10, 0x1p+2 , 0x1p+1 , 0x0p+0 , 0x0p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x0p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 1, (char[]){"t"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 10, 0x1p+1 , 0x1p+2 , 0x1p+0 , 0x0p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x0p+0 , 0x1p+0 , 0x0p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 1, (char[]){"l"}} ,++SAL)|| !CmpS( J_caseof_0_val_svl, (SVL){ 1, (char[]){"1"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 10, 0x1p+1 , 0x1p+2 , 0x1p+0 , 0x1p+0 , 0x0p+0 , 0x1p+0 , 0x0p+0 , 0x1p+0 , 0x0p+0 , 0x1p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 1, (char[]){"T"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 11, 0x1.8p+1 , 0x1.8p+1 , 0x1p+0 , 0x0p+0 , 0x0p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x0p+0 , 0x0p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 2, (char[]){"s,"}} ,++SAL)|| !CmpS( J_caseof_0_val_svl, (SVL){ 1, (char[]){"z"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 11, 0x1.8p+1 , 0x1.8p+1 , 0x1p+0 , 0x1p+0 , 0x0p+0 , 0x0p+0 , 0x1p+0 , 0x1p+0 , 0x0p+0 , 0x0p+0 , 0x1p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 1, (char[]){"Q"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 8, 0x1p+1 , 0x1.8p+1 , 0x0p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 1, (char[]){"C"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 8, 0x1p+1 , 0x1.8p+1 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x0p+0 , 0x1p+0 , 0x1p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 1, (char[]){"S"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 11, 0x1.8p+1 , 0x1.8p+1 , 0x1p+0 , 0x1p+0 , 0x0p+0 , 0x0p+0 , 0x1p+0 , 0x0p+0 , 0x0p+0 , 0x1p+0 , 0x1p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 1, (char[]){"L"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 11, 0x1.8p+1 , 0x1.8p+1 , 0x1p+0 , 0x0p+0 , 0x0p+0 , 0x1p+0 , 0x0p+0 , 0x0p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 1, (char[]){"|"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 7, 0x1p+0 , 0x1.4p+2 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 , 0x1p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  if( !CmpS( J_caseof_0_val_svl, (SVL){ 3, (char[]){"gun"}} ,++SAL)){
   FN__addpiece( FN_createpiece( (double[]){ 11, 0x1.8p+1 , 0x1.8p+1 , 0x0p+0 , 0x1p+0 , 0x0p+0 , 0x1p+0 , 0x1p+0 , 0x0p+0 , 0x0p+0 , 0x1p+0 , 0x1p+0 } ) ) ;
   goto J_caseof_0_endcase;
  }
  PrintSVL( (SVL){ 27, (char[]){"__addpiece: unknown piece '"}} );PrintSVL( SVRtoSVL( Johnson_stringvar_deref( PR_s ) ) );PrintSVL( (SVL){ 1, (char[]){"'"}} );printf("\n");
  exit(0);
  J_caseof_0_endcase:;
 } // end caseof block
 return 0.0;
}

double FN__dp_col(double PR_v, double PR_c){
 if( (double)( PR_c < 0x0p+0 ) ){
  Johnson_GCol( 0x1p+6 , 0x1p+6 , 0x1p+6 );
  return 0.0;
 }
 PR_c = 0x1.cp+2 ;
 Johnson_GCol( ( PR_v * (double)!( (double)!( (double)((int) PR_c & (int) 0x1p+2 ) ) ) ) , ( PR_v * (double)!( (double)!( (double)((int) PR_c & (int) 0x1p+1 ) ) ) ) , ( PR_v * (double)((int) PR_c & (int) 0x1p+0 ) ) );
 return 0.0;
}

double FN__dp_surrounds(double PR_yo, double PR_xo, double PR_py, double PR_px, double PR_piece){
 if( (double)( ( PR_px + PR_xo ) < 0x0p+0 ) ){
  return 0.0;
 }
 if( (double)( ( PR_px + PR_xo ) >= FirstVarP[(int)( PR_piece )] ) ){
  return 0.0;
 }
 if( (double)( ( PR_py + PR_yo ) < 0x0p+0 ) ){
  return 0.0;
 }
 if( (double)( ( PR_py + PR_yo ) >= FirstVarP[(int)( PR_piece )+(int)( 0x1p+0 )] ) ){
  return 0.0;
 }
 return (double)( FirstVarP[(int)( FN_pindex( ( PR_py + PR_yo ) , ( PR_px + PR_xo ) , PR_piece ) )] == FirstVarP[(int)( FN_pindex( PR_py , PR_px , PR_piece ) )] ) ;
}

double FN__12cols(double PR_c){
 { // caseof block (value type)
  double J_caseof_1_val = PR_c ;
  if( J_caseof_1_val == 0x1p+0 ){
   return (double)16719920 ;
   goto J_caseof_1_endcase;
  }
  if( J_caseof_1_val == 0x1p+1 ){
   return (double)16744496 ;
   goto J_caseof_1_endcase;
  }
  if( J_caseof_1_val == 0x1.8p+1 ){
   return (double)16776960 ;
   goto J_caseof_1_endcase;
  }
  if( J_caseof_1_val == 0x1p+2 ){
   return (double)65280 ;
   goto J_caseof_1_endcase;
  }
  if( J_caseof_1_val == 0x1.4p+2 ){
   return (double)65535 ;
   goto J_caseof_1_endcase;
  }
  if( J_caseof_1_val == 0x1.8p+2 ){
   return (double)2121967 ;
   goto J_caseof_1_endcase;
  }
  if( J_caseof_1_val == 0x1.cp+2 ){
   return (double)16711935 ;
   goto J_caseof_1_endcase;
  }
  if( J_caseof_1_val == 0x1p+3 ){
   return (double)8421631 ;
   goto J_caseof_1_endcase;
  }
  if( J_caseof_1_val == 0x1.2p+3 ){
   return (double)8454016 ;
   goto J_caseof_1_endcase;
  }
  if( J_caseof_1_val == 0x1.4p+3 ){
   return (double)14610320 ;
   goto J_caseof_1_endcase;
  }
  if( J_caseof_1_val == 0x1.6p+3 ){
   return (double)16744576 ;
   goto J_caseof_1_endcase;
  }
  if( J_caseof_1_val == 0x1.8p+3 ){
   return (double)16777215 ;
   goto J_caseof_1_endcase;
  }
  J_caseof_1_endcase:;
 } // end caseof block
 return -0x1p+0 ;
}

double FN__mulcol(double PR_m, double PR_c){
 PR_c = ( (double)((int) PR_c & (int) 0x1.fep+7 ) * PR_m ) ;
 if( (double)( PR_c > 0x1.fep+7 ) ){
  return 0x1.fep+7 ;
 }
 if( (double)( PR_c < 0x0p+0 ) ){
  return 0.0;
 }
 return PR_c ;
}

double FN_mulcol(double PR_m, double PR_c){
 return (double)((int) FN__mulcol( PR_m , PR_c ) | (int) (double)((int) FN__mulcol( PR_m , (double)((int) PR_c >> (int) 0x1p+3 ) ) << (int) 0x1p+3 ) |(int) (double)((int) FN__mulcol( PR_m , (double)((int) PR_c >> (int) 0x1p+4 ) ) << (int) 0x1p+4 ) ) ;
}

double FN__dp_square(double PR_borders, double PR_col, double PR_sc, double PR_y, double PR_x){
 double LC_t_left; double LC_t_right; double LC_t_top; double LC_t_bottom; double LC_x1; double LC_x2; double LC_y1; double LC_y2; double LC_c1; double LC_c2; double LC_c3; double LC_c4; 
 if( (double)( PR_col < 0x0p+0 ) ){
  Johnson_GCol( 0x1p+6 , 0x1p+6 , 0x1p+6 );
  Johnson_RectangleWH(1, PR_sc , PR_y , PR_x );
  return 0.0;
 }
 FN__dp_col( 0x1.fep+7 , PR_col ) ;
 PR_col = FN__12cols( PR_col ) ;
 LC_c1 = FN_mulcol( 0x1p+0 , PR_col ) ;
 LC_c2 = FN_mulcol( 0x1.8f5c28f5c28f6p-1 , PR_col ) ;
 LC_c3 = FN_mulcol( 0x1.0cccccccccccdp-1 , PR_col ) ;
 LC_c4 = FN_mulcol( 0x1.999999999999ap-2 , PR_col ) ;
 LC_t_left = (double)((int) PR_borders & (int) 0x1p+0 ) ;
 LC_t_right = (double)((int) PR_borders & (int) 0x1p+2 ) ;
 LC_t_top = (double)((int) PR_borders & (int) 0x1p+1 ) ;
 LC_t_bottom = (double)((int) PR_borders & (int) 0x1p+3 ) ;
 LC_x1 = ( PR_x + (double)(int)( ( PR_sc * 0x1p-1 ) ) ) ;
 LC_x2 = ( PR_x + PR_sc ) ;
 LC_y1 = ( PR_y + (double)(int)( ( PR_sc * 0x1p-1 ) ) ) ;
 LC_y2 = ( PR_y + PR_sc ) ;
 if( LC_t_left ){
  GcolDirect( MyColour2( LC_c2 ) );
 }else{
  GcolDirect( MyColour2( LC_c1 ) );
 }
 Johnson_Triangle( (int[]){ LC_x1 , LC_y1 , PR_x , PR_y , PR_x , LC_y1 } );
 if( LC_t_top ){
  GcolDirect( MyColour2( LC_c1 ) );
 }else{
  GcolDirect( MyColour2( LC_c2 ) );
 }
 Johnson_Triangle( (int[]){ LC_x1 , LC_y1 , PR_x , PR_y , LC_x1 , PR_y } );
 if( LC_t_right ){
  GcolDirect( MyColour2( LC_c3 ) );
 }else{
  GcolDirect( MyColour2( LC_c1 ) );
 }
 Johnson_Triangle( (int[]){ LC_x1 , LC_y1 , LC_x2 , LC_y1 , LC_x2 , PR_y } );
 if( LC_t_top ){
  GcolDirect( MyColour2( LC_c1 ) );
 }else{
  GcolDirect( MyColour2( LC_c3 ) );
 }
 Johnson_Triangle( (int[]){ LC_x1 , LC_y1 , LC_x1 , PR_y , LC_x2 , PR_y } );
 if( LC_t_left ){
  GcolDirect( MyColour2( LC_c2 ) );
 }else{
  GcolDirect( MyColour2( LC_c4 ) );
 }
 Johnson_Triangle( (int[]){ PR_x , LC_y1 , LC_x1 , LC_y1 , PR_x , LC_y2 } );
 if( LC_t_bottom ){
  GcolDirect( MyColour2( LC_c4 ) );
 }else{
  GcolDirect( MyColour2( LC_c2 ) );
 }
 Johnson_Triangle( (int[]){ LC_x1 , LC_y1 , PR_x , LC_y2 , LC_x1 , LC_y2 } );
 if( LC_t_right ){
  GcolDirect( MyColour2( LC_c3 ) );
 }else{
  GcolDirect( MyColour2( LC_c4 ) );
 }
 Johnson_Triangle( (int[]){ LC_x1 , LC_y1 , LC_x2 , LC_y1 , LC_x2 , LC_y2 } );
 if( LC_t_bottom ){
  GcolDirect( MyColour2( LC_c4 ) );
 }else{
  GcolDirect( MyColour2( LC_c3 ) );
 }
 Johnson_Triangle( (int[]){ LC_x1 , LC_y1 , LC_x1 , LC_y2 , LC_x2 , LC_y2 } );
 return 0.0;
}

double FN_drawpiece(double PR_border, double PR_label, double PR_sc, double PR_sy, double PR_sx, double PR_piece){
 double LC_x; double LC_y; double LC_w; double LC_h; double LC_c; double LC_chr; 
 PR_label = 0x0p+0 ;
 LC_w = FirstVarP[(int)( PR_piece )] ;
 LC_h = FirstVarP[(int)( PR_piece )+(int)( 0x1p+0 )] ;
 LC_x = 0x0p+0 ;
 while( (double)( LC_x < LC_w ) ){
  LC_y = 0x0p+0 ;
  while( (double)( LC_y < LC_h ) ){
   LC_chr = FirstVarP[(int)( FN_pindex( LC_y , LC_x , PR_piece ) )] ;
   if( LC_chr ){
    FN__dp_square( (double)((int) (double)((int) (double)!( FN__dp_surrounds( 0x1p+0 , 0x0p+0 , LC_y , LC_x , PR_piece ) ) << (int) 0x1.8p+1 ) | (int) (double)((int) (double)!( FN__dp_surrounds( 0x0p+0 , 0x1p+0 , LC_y , LC_x , PR_piece ) ) << (int) 0x1p+1 ) |(int) (double)((int) (double)!( FN__dp_surrounds( -0x1p+0 , 0x0p+0 , LC_y , LC_x , PR_piece ) ) << (int) 0x1p+0 ) |(int) (double)!( FN__dp_surrounds( 0x0p+0 , -0x1p+0 , LC_y , LC_x , PR_piece ) ) ) , FirstVarP[(int)( FN_pindex( LC_y , LC_x , PR_piece ) )] , PR_sc , ( PR_sy + ( PR_sc * LC_y ) ) , ( PR_sx + ( PR_sc * LC_x ) ) ) ;
    if( PR_label ){
     GcolDirect( MyColour2( -0x1p+0 ) );
     Johnson_DrawText( ChrS( ( 0x1p+6 + FirstVarP[(int)( FN_pindex( LC_y , LC_x , PR_piece ) )] ) ,++SAL) , 0x1.8p+1 , ( PR_sy + (double)((int) PR_sc >> (int) 0x1p+0 ) + ( PR_sc * LC_y ) ) , ( PR_sx + (double)((int) PR_sc >> (int) 0x1p+0 ) + ( PR_sc * LC_x ) ) ,++SAL);
    }
   }else{
    GcolDirect( MyColour2( 0x0p+0 ) );
    Johnson_RectangleWH(1, PR_sc , ( PR_sy + ( PR_sc * LC_y ) ) , ( PR_sx + ( PR_sc * LC_x ) ) );
   }
   LC_y = ( LC_y + 0x1p+0 ) ;
  }
  LC_x = ( LC_x + 0x1p+0 ) ;
 }
 if( PR_border ){
  GcolDirect( MyColour2( -0x1p+0 ) );
  Johnson_Rectangle(0, ( PR_sc * LC_h ) , ( PR_sc * LC_w ) , PR_sy , PR_sx );
 }
 return 0.0;
}

double FN_symmetry_check(){
 double LC_i; double LC_j; double LC_k; 
 LC_i = 0x0p+0 ;
 while( (double)( LC_i < *VAR_num_pieces ) ){
  LC_j = 0x1.cp+2 ;
  while( (double)( LC_j > 0x0p+0 ) ){
   LC_k = ( LC_j - 0x1p+0 ) ;
   while( (double)( LC_k >= 0x0p+0 ) ){
    if( FN_pieceisthesame( FirstVarP[(int)( *VAR_pieces )+(int)( ( LC_i + LC_k ) )] , FirstVarP[(int)( *VAR_pieces )+(int)( ( LC_i + LC_j ) )] ) ){
     FirstVarP[(int)( *VAR_alreadytried )+(int)( ( LC_i + LC_j ) )] = 0x1p+0 ;
    }
    LC_k = ( LC_k - 0x1p+0 ) ;
   }
   LC_j = ( LC_j - 0x1p+0 ) ;
  }
  LC_i = ( LC_i + 0x1p+3 ) ;
 }
 return 0.0;
}

double FN_pieceisthesame(double PR_b, double PR_a){
 double LC_l; 
 if( (double)!( (double)( FirstVarP[(int)( PR_a )] == FirstVarP[(int)( PR_b )] ) ) ){
  return 0.0;
 }
 if( (double)!( (double)( FirstVarP[(int)( PR_a )+(int)( 0x1p+0 )] == FirstVarP[(int)( PR_b )+(int)( 0x1p+0 )] ) ) ){
  return 0.0;
 }
 LC_l = ( PR_a + 0x1p+1 + ( FirstVarP[(int)( PR_a )] * FirstVarP[(int)( PR_a )+(int)( 0x1p+0 )] ) ) ;
 while( (double)( PR_a < LC_l ) ){
  if( (double)!( (double)( FirstVarP[(int)( PR_a )] == FirstVarP[(int)( PR_b )] ) ) ){
   return 0.0;
  }
  PR_a = ( PR_a + 0x1p+0 ) ;
  PR_b = ( PR_b + 0x1p+0 ) ;
 }
 return 0x1p+0 ;
}

double FN_guiinit(){
 *VAR_gui_bg = (double)2113632 ;
 *VAR_gui_fg = (double)9478399 ;
 *VAR_gui_redraw = 0x1p+0 ;
 return 0.0;
}

double FN_boxchk(double PR_py, double PR_px, double PR_h, double PR_w, double PR_y, double PR_x){
 return (double)( (double)( PR_px > PR_x ) && (double)( PR_px < ( PR_x + PR_w ) ) && (double)( PR_py > PR_y ) && (double)( PR_py < ( PR_y + PR_h ) ) ) ;
}

double FN_button(double PR_st, double PR_y, double PR_x){
 double LC_w; double LC_h; 
 if( *VAR_gui_reqrd ){
  return 0.0;
 }
 LC_w = ( 0x1p+3 + ( 0x1p+3 * (double)(( SVRtoSVL( Johnson_stringvar_deref( PR_st ) ) ).len) ) ) ;
 LC_h = ( 0x1p+3 + 0x1p+4 ) ;
 if( *VAR_gui_redraw ){
  GcolDirect( MyColour2( *VAR_gui_bg ) );
  Johnson_Rectangle(1, LC_h , LC_w , PR_y , PR_x );
  GcolDirect( MyColour2( *VAR_gui_fg ) );
  Johnson_Rectangle(0, LC_h , LC_w , PR_y , PR_x );
  Johnson_DrawText( SVRtoSVL( Johnson_stringvar_deref( PR_st ) ) , 0x1p+0 , ( PR_y + 0x1p+2 ) , ( PR_x + 0x1p+2 ) ,++SAL);
 }
 if( (double)!( (double)( (double)((int) *VAR_gui_omb & (int) 0x1p+0 ) && (double)!( (double)((int) *VAR_gui_mb & (int) 0x1p+0 ) ) ) ) ){
  return 0.0;
 }
 return (double)( FN_boxchk( (double)mouse_y , (double)mouse_x , LC_h , LC_w , PR_y , PR_x ) && FN_boxchk( *VAR_gui_csy , *VAR_gui_csx , LC_h , LC_w , PR_y , PR_x ) ) ;
}

double FN_gui_btnw(double PR_strlen){
 return ( 0x1p+3 + ( 0x1p+3 * PR_strlen ) ) ;
}

double FN_gui_proc(double PR_allow_wait){
 if( *VAR_gui_redraw ){
  Refresh();
  *VAR_gui_redraw = 0x0p+0 ;
 }
 if( (double)((int) *VAR_gui_reqrd | (int) Johnson_Expose() ) ){
  Cls();
  *VAR_gui_redraw = 0x1p+0 ;
  *VAR_gui_reqrd = 0x0p+0 ;
 }
 *VAR_gui_omb = *VAR_gui_mb ;
 *VAR_gui_mb = (double)mouse_b ;
 if( (double)( *VAR_gui_mb && (double)!( *VAR_gui_omb ) ) ){
  *VAR_gui_csx = (double)mouse_x ;
  *VAR_gui_csy = (double)mouse_y ;
 }
 if( PR_allow_wait ){
  if( (double)( (double)!( *VAR_gui_redraw ) && (double)!( *VAR_gui_reqrd ) ) ){
   usleep( 1000 * ( 0x1.099999999999ap+4 ) );
  }
 }
 return 0.0;
}

double FN_gui_intbox(double PR_v, double PR_y, double PR_x){
 double LC_s; double LC_l; 
 if( *VAR_gui_reqrd ){
  return 0.0;
 }
 LC_s = (double)(SetSVR( NewStringvar_svrp(), StrS( FirstVarP[(int)( PR_v )] ,++SAL) )->string_variable_number) ;
 LC_l = (double)(( SVRtoSVL( Johnson_stringvar_deref( LC_s ) ) ).len) ;
 if( (double)( LC_l == 0x1p+0 ) ){
  LC_l = 0x1p+1 ;
  SetSVR( Johnson_stringvar_deref( LC_s ), CatS( (SVL){ 1, (char[]){"0"}} ,CatS( SVRtoSVL( Johnson_stringvar_deref( LC_s ) ) ,(SVL){0,"PENIS"} ,++SAL) ,++SAL) ) ;
 }
 if( FN_button( (double)Unnamed_string_variable_13 , PR_y , PR_x ) ){
  FirstVarP[(int)( PR_v )] = ( FirstVarP[(int)( PR_v )] - 0x1p+0 ) ;
  *VAR_gui_reqrd = 0x1p+0 ;
  goto Label_gui_intbox_exit;
 }
 if( FN_button( (double)Unnamed_string_variable_14 , PR_y , ( PR_x + 0x1p+3 + 0x1p+3 + 0x1p+3 + ( LC_l * 0x1p+3 ) ) ) ){
  FirstVarP[(int)( PR_v )] = ( FirstVarP[(int)( PR_v )] + 0x1p+0 ) ;
  *VAR_gui_reqrd = 0x1p+0 ;
  goto Label_gui_intbox_exit;
 }
 if( (double)!( (double)( LC_l == (double)(( SVRtoSVL( Johnson_stringvar_deref( LC_s ) ) ).len) ) ) ){
  *VAR_gui_reqrd = 0x1p+0 ;
  goto Label_gui_intbox_exit;
 }
 FN_button( LC_s , PR_y , ( PR_x + 0x1p+3 + 0x1p+3 ) ) ;
 Label_gui_intbox_exit:
 StringVars[(int) LC_s ]->claimed = 0;
 return *VAR_gui_reqrd ;
}

double FN_gui_ibw(double PR_v){
 double LC_l; 
 LC_l = (double)(( StrS( PR_v ,++SAL) ).len) ;
 return ( FN_gui_btnw( ( LC_l + (double)( LC_l == 0x1p+0 ) ) ) + ( 0x1p+1 * FN_gui_btnw( 0x1p+0 ) ) ) ;
}

double FN__wh_limit(double PR_v){
 if( (double)( PR_v > 0x1.4p+4 ) ){
  return 0x1.4p+4 ;
 }
 if( (double)( PR_v < 0x1p+1 ) ){
  return 0x1p+1 ;
 }
 return PR_v ;
}

double FN__squarer(double PR_sc, double PR_y, double PR_x){
 double LC_px; double LC_py; double LC_p; 
 if( (double)!( *VAR_gui_mb ) ){
  return 0.0;
 }
 if( (double)!( *VAR_gui_omb ) ){
  *VAR_opx = -0x1p+0 ;
  *VAR_opy = -0x1p+0 ;
 }
 if( FN_boxchk( (double)mouse_y , (double)mouse_x , ( PR_sc * *VAR_hh ) , ( PR_sc * *VAR_ww ) , PR_y , PR_x ) ){
  LC_px = (double)(int)( ( ( (double)mouse_x - PR_x ) / PR_sc ) ) ;
  LC_py = (double)(int)( ( ( (double)mouse_y - PR_y ) / PR_sc ) ) ;
  if( (double)( (double)( *VAR_opx == LC_px ) && (double)( *VAR_opy == LC_py ) ) ){
   return 0.0;
  }
  *VAR_opx = LC_px ;
  *VAR_opy = LC_py ;
  LC_p = FN_pindex( LC_py , LC_px , *VAR_board ) ;
  FirstVarP[(int)( LC_p )] = -( (double)!( (double)!( (double)!( FirstVarP[(int)( LC_p )] ) ) ) ) ;
  *VAR_gui_reqrd = 0x1p+0 ;
  return 0x1p+0 ;
 }
 return 0.0;
}

double FN_gui_tickbox(double PR_st, double PR_v, double PR_y, double PR_x){
 if( *VAR_gui_reqrd ){
  return 0.0;
 }
 if( *VAR_gui_redraw ){
  GcolDirect( MyColour2( *VAR_gui_bg ) );
  Johnson_RectangleWH(1, 0x1p+3 , PR_y , PR_x );
  GcolDirect( MyColour2( *VAR_gui_fg ) );
  Johnson_RectangleWH(0, 0x1p+3 , PR_y , PR_x );
  if( FirstVarP[(int)( PR_v )] ){
   Johnson_RectangleWH(1, 0x1.4p+2 , ( PR_y + 0x1p+1 ) , ( PR_x + 0x1p+1 ) );
  }
  Johnson_DrawText( SVRtoSVL( Johnson_stringvar_deref( PR_st ) ) , 0x0p+0 , ( PR_y + 0x1p+0 ) , ( PR_x + 0x1p+3 + 0x1p+2 ) ,++SAL);
 }
 if( (double)( (double)!( *VAR_gui_omb ) && *VAR_gui_mb ) ){
  if( FN_boxchk( (double)mouse_y , (double)mouse_x , 0x1p+3 , ( 0x1p+3 + ( 0x1p+3 * (double)(( SVRtoSVL( Johnson_stringvar_deref( PR_st ) ) ).len) ) ) , PR_y , PR_x ) ){
   FirstVarP[(int)( PR_v )] = (double)!( FirstVarP[(int)( PR_v )] ) ;
   *VAR_gui_reqrd = 0x1p+0 ;
   return 0x1p+0 ;
  }
 }
 return 0.0;
}

double FN___piece_switch(double PR_n, double PR_y, double PR_x){
 double LC_w; double LC_h; 
 LC_w = 0x1.9p+4 ;
 LC_h = 0x1.4p+5 ;
 if( *VAR_gui_reqrd ){
  return 0.0;
 }
 if( *VAR_gui_redraw ){
  if( (double)!( FirstVarP[(int)( *VAR_isinuse )+(int)( PR_n )] ) ){
   GcolDirect( MyColour2( *VAR_gui_bg ) );
  }else{
   GcolDirect( MyColour2( 0x0p+0 ) );
  }
  Johnson_Rectangle(1, LC_h , LC_w , PR_y , PR_x );
  if( (double)!( FirstVarP[(int)( *VAR_isinuse )+(int)( PR_n )] ) ){
   GcolDirect( MyColour2( *VAR_gui_fg ) );
  }else{
   Johnson_GCol( 0x1.fcp+6 , 0x1.fcp+6 , 0x1.fcp+6 );
  }
  Johnson_Rectangle(0, LC_h , LC_w , PR_y , PR_x );
  FN_drawpiece( 0x0p+0 , 0x0p+0 , 0x1p+2 , ( PR_y + 0x1p+3 ) , ( PR_x + 0x1p+3 ) , FirstVarP[(int)( *VAR_pieces )+(int)( ( PR_n * 0x1p+3 ) )] ) ;
 }
 if( (double)( (double)!( *VAR_gui_omb ) && *VAR_gui_mb ) ){
  if( FN_boxchk( (double)mouse_y , (double)mouse_x , LC_h , LC_w , PR_y , PR_x ) ){
   FirstVarP[(int)( *VAR_isinuse )+(int)( PR_n )] = (double)!( FirstVarP[(int)( *VAR_isinuse )+(int)( PR_n )] ) ;
   if( FirstVarP[(int)( *VAR_isinuse )+(int)( PR_n )] ){
    *VAR_maxspaces = ( *VAR_maxspaces - 0x1.4p+2 ) ;
   }else{
    *VAR_maxspaces = ( *VAR_maxspaces + 0x1.4p+2 ) ;
   }
   *VAR_gui_reqrd = 0x1p+0 ;
   return 0x1p+0 ;
  }
 }
 return 0.0;
}

double FN__options_screen(){
 double LC_i; 
 while( 0x1p+0 ){
  FN_gui_proc( 0x1p+0 ) ;
  if( FN_button( (double)Unnamed_string_variable_15 , 0x1p+3 , 0x1p+3 ) ){
   *VAR_gui_reqrd = 0x1p+0 ;
   return 0.0;
  }
  FN_gui_intbox( Johnson_getref(VAR_www) , 0x1p+3 , ( 0x1p+3 + FN_gui_btnw( 0x1.4p+2 ) + 0x1p+3 ) ) ;
  FN_gui_intbox( Johnson_getref(VAR_hhh) , 0x1p+3 , ( 0x1p+3 + FN_gui_btnw( 0x1.4p+2 ) + 0x1p+3 + FN_gui_ibw( *VAR_www ) + 0x1p+3 ) ) ;
  if( *VAR_gui_redraw ){
   Johnson_DrawText( CatS( (SVL){ 14, (char[]){"Extra spaces: "}} ,CatS( StrS( ( *VAR_bspaces - *VAR_maxspaces ) ,++SAL) ,(SVL){0,"PENIS"} ,++SAL) ,++SAL) , 0x1p+0 , ( 0x1p+3 + 0x1p+2 ) , ( 0x1p+3 + FN_gui_btnw( 0x1.4p+2 ) + 0x1p+3 + FN_gui_ibw( *VAR_www ) + 0x1p+3 + FN_gui_ibw( *VAR_hhh ) + 0x1p+3 ) ,++SAL);
  }
  *VAR_www = FN__wh_limit( *VAR_www ) ;
  *VAR_hhh = FN__wh_limit( *VAR_hhh ) ;
  if( *VAR_gui_reqrd ){
   FN_configure_board( *VAR_hhh , *VAR_www ) ;
  }else{
   if( FN__squarer( 0x1.4p+4 , ( 0x1p+3 + 0x1.8p+4 + 0x1p+3 + 0x1.4p+5 + 0x1p+3 + 0x1p+3 + 0x1p+3 ) , 0x1p+3 ) ){
    *VAR_bspaces = FN_countspaces( *VAR_board ) ;
   }
  }
  FN_gui_tickbox( (double)Unnamed_string_variable_16 , Johnson_getref(VAR_animate) , ( 0x1p+3 + 0x1.8p+4 + 0x1p+3 + 0x1.4p+5 + 0x1p+3 ) , 0x1p+3 ) ;
  FN_gui_tickbox( (double)Unnamed_string_variable_17 , Johnson_getref(VAR_pauseforsol) , ( 0x1p+3 + 0x1.8p+4 + 0x1p+3 + 0x1.4p+5 + 0x1p+3 ) , 0x1.9p+6 ) ;
  if( (double)( *VAR_gui_redraw && (double)!( *VAR_gui_reqrd ) ) ){
   FN_drawpiece( 0x1p+0 , 0x1p+0 , 0x1.4p+4 , ( 0x1p+3 + 0x1.8p+4 + 0x1p+3 + 0x1.4p+5 + 0x1p+3 + 0x1p+3 + 0x1p+3 ) , 0x1p+3 , *VAR_board ) ;
  }
  LC_i = 0x0p+0 ;
  while( (double)( LC_i < (double)((int) *VAR_num_pieces >> (int) 0x1.8p+1 ) ) ){
   FN___piece_switch( LC_i , ( 0x1p+3 + 0x1.8p+4 + 0x1p+3 ) , ( 0x1p+3 + ( LC_i * ( 0x1.9p+4 + 0x1p+2 ) ) ) ) ;
   LC_i = ( LC_i + 0x1p+0 ) ;
  }
 }
 return 0.0;
}

double FN__controlbox(){
 double LC_s; 
 Label_controlbox_start:
 FN_gui_proc( *VAR_paused ) ;
 if( *VAR_paused ){
  LC_s = (double)Unnamed_string_variable_18 ;
 }else{
  LC_s = (double)Unnamed_string_variable_19 ;
 }
 if( FN_button( LC_s , 0x1p+3 , 0x1p+3 ) ){
  *VAR_paused = (double)!( *VAR_paused ) ;
  *VAR_gui_reqrd = 0x1p+0 ;
 }
 if( FN_button( (double)Unnamed_string_variable_20 , 0x1p+3 , 0x1.9p+6 ) ){
  *VAR_cancel = 0x1p+0 ;
 }
 FN_gui_tickbox( (double)Unnamed_string_variable_21 , Johnson_getref(VAR_animate) , ( 0x1p+3 + 0x1p+3 ) , 0x1.5ep+7 ) ;
 FN_gui_tickbox( (double)Unnamed_string_variable_22 , Johnson_getref(VAR_pauseforsol) , ( 0x1p+3 + 0x1p+3 ) , 0x1.04p+8 ) ;
 if( (double)( *VAR_gui_redraw || *VAR_animate ) ){
  FN_graphics_display() ;
 }
 if( (double)( (double)!( *VAR_cancel ) && (double)( *VAR_paused || *VAR_gui_reqrd ) ) ){
  goto Label_controlbox_start;
 }
 return 0.0;
}

double FN_graphics_display(){
 FN_drawpiece( 0x1p+0 , 0x1p+0 , (double)(int)( FN_min( ( ( (double)WinH - 0x1p+3 - 0x1.8p+4 - 0x1p+3 - 0x1p+3 ) / *VAR_hh ) , ( ( (double)WinW - 0x1p+3 - 0x1p+3 ) / *VAR_ww ) ) ) , ( 0x1p+3 + 0x1.8p+4 + 0x1p+3 ) , 0x1p+3 , *VAR_board ) ;
 Refresh();
 return 0.0;
}

