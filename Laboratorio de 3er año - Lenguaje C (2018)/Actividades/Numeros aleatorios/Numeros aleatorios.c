#include<stdio.h>
#define N 25
#define M 4
int avion[N][M];int fila,col;
int ver(); int guardar();
main(){
guardar();
ver();
return 0;}
//definicion de funciones
int ver(){
for(fila=0;fila<N;fila++){
for(col=0;col<M;col++){
printf("%4i",avion[fila][col]);
}
printf("\n");
}
}
int guardar(){
for(fila=0;fila<N;fila++){
for(col=0;col<M;col++){
avion[fila][col]=0+rand()%2;
}
}
return avion[fila][col];
}
