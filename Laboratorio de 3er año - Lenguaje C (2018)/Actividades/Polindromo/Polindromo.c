#include<stdio.h>
#define M 10
#define N 1
int tabla[M][N];int fila, col;
int letra;
main(){
for(fila=0;fila<M;fila++){
        for(col=0;col<N;col++){
            scanf("%i",&letra);
    tabla[fila][col]=letra;
        }
}
for(fila=9;fila>=0;fila--)
    for(col=0;col<1;col++){
        printf("%6i",tabla[fila][col]);

}
return 0;
}
