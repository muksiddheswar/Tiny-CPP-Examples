# include <conio.h>
# include <stdio.h>

void PressAKeyToContinue(){
  int c;
  printf( "\nPress a key to continue..." );
  c = getch();
  if (c == 0 || c == 224) getch();
  }