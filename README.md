# PentominoPuzzleSolver
GUI-based automatic solution finder for pentomino/"Daedalian Opus" puzzles.\
Written in Johnsonscript, available as translated/trans-compiled C code.

It runs on Linux and uses xlib for graphics.

On ubuntu/debian, the extra packages required to build this are `build-essential libx11-dev libxext-dev`\
Install those or the equivalents for your distro, and then use bash to execute compile.sh\
Then you can run the "pentominosolverbin" executable.

The trans-compiler used to generate the C code from the source is available here: https://github.com/dusthillresident/JohnsonScript

NOTICE FOR ARM / RASPBERRY PI USERS \ 
Please note that this transcompiled C version may not work properly on Raspberry pi due to the order of evaluation of function parameters. \ 
If you're using Raspberry Pi or another ARM based system, please get the johnsonscript transcompiler/interpreter from the link above and run "pentomino_puzzle_solver.johnson" through 'run.sh' or use the johnsonscript interpreter to run it.
