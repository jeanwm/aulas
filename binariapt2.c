#include <stdio.h>
#include <time.h>
#define N 1000

int main(void) {
    srand(time(0));
    int v[N], i;

    FILE * f = fopen("dados.txt", "rt");
    if (f == NULL){
        printf ("Arquivo não encontrado!\n");
        return -1;
    }

    int n;
    fscanf (f, "%d", &n);
    for (i = 0; i < n; i++){
        fscanf (f, "%d", &v[i]);
    } fclose (f);

    for (i=0; i < n; i++)
        printf ("%d : %d\n", i, v[i]);

    return 0;
}