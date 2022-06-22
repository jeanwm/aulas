#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 4
#define COL 4


int main (int argc, char *argv[]){
  srand ( time(0) );
  int mat [LIN][COL];
  int i, j, mult = 1;
  for ( i = 0 ; i < LIN ; i++)
    for ( j = 0 ; j < COL ; j++){
      mat [i][j] = rand() % 100;
    }
  
  for ( i = 0 ; i < LIN ; i++){
    for ( j = 0 ; j < COL ; j++)
      printf ("%3d ", mat[i][j]);
    printf ("\n");
  }
  printf ("\n");
    
    printf ("DIAGONAL PRINCIPAL \n");
  for ( i = 0 ; i < LIN ; i++){
    for ( j = 0 ; j < COL ; j++){
        if(mat[i] == mat[j]){ // ou if( i == j)
            printf("%3d ", mat[i][j]);
            mult *= mat[i][j];
        }
    }
  }

  printf ("\n");
    
    printf ("DIAGONAL SECUNDARIA \n");

    for( i = 0 ; i < COL ; i++){
        for(j = 0; j < COL; j++){
            if (j == COL - 1 - i){
                printf ("%3d ", mat[i][j]);
            }
        }
    }
    printf ("\n");
  printf ("O produto é: %i", mult);


    return 0;
}