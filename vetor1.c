#include <stdio.h>
#include <stdlib.h>

int main (){
    int v[20],  i, n, k;

    scanf("%i", &n);
    for(i = 0 ; i < n ; i++){
        scanf("%i", &v[i]);
    }

    for(i = 0 ; i < n ; i++){
        printf("%i : %i\n", i, &v[i]);
    }

    return 0;
}