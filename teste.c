#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 4
#define COL 4


int main (int argc, char *argv[]){
  srand ( time(0) );
  int mat [LIN][COL];
  int i, j;
  for ( i = 0 ; i < LIN ; i++)
    for ( j = 0 ; j < COL ; j++){
      //printf ("Mat[%d,%d]: ", i, j);
      //scanf ("%d", &mat [i][j]);
      mat [i][j] = rand() % 10000;
    }
  
  for ( i = 0 ; i < LIN ; i++){
    for ( j = 0 ; j < COL ; j++)
      printf ("%4d ", mat[i][j]);
    printf ("\n");
  }
    return 0;
}