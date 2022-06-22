#include <stdio.h>
#include <time.h>
#define N 1000

int main(void) {
    srand(time(0));
    int v[N], i;

    for(i = 0; i < N; i++) {
        v[i] = rand();
    }
    FILE * f = fopen("dados.txt", "wt");
    fprintf(f, "%d\n", N);

    for(i = 0; i < N; i++) {
        fprintf(f, "%d\n", v[i]);
    }
    fclose(f);

    return 0;
}