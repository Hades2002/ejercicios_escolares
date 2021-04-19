#include<stdio.h>
#define M 100
#define N 4
//prototipo de func.
int tabla[M][N];int fila,col, nro;
int ver();
int listado();
int hembramacho();
int peso();
int serie();
int contador();
int proceso();
int tipo();
int constante();
void menu();
main(){
    int op;
    do{
        menu();
        scanf("%i",&op);
        switch(op){
        case 1:constante();break;
        case 2:listado();contador();serie();ver();break;
        case 3:hembramacho();break;
        case 4:peso();break;
        case 5:contador();proceso();break;
        }
    }while(op!=0);
return 0;
}
//definicion de funciones
int ver(){
    printf("\nN de Reses - Sexo - Peso - Codigo de Serie\n");
for(fila=0;fila<nro;fila++){
    for(col=0;col<N;col++){
            printf("%8i",tabla[fila][col]);
    }
    printf("\n");
}
}
int listado(){
int cont=0;
  for(fila=0;fila<nro;fila++){
  for(col=0;col<1;col++){
    cont=cont+1;
    tabla[fila][0]=cont;

  }
  }
}
int hembramacho(){
    int hm;
for(fila=0;fila<nro;fila++){
    for(col=1;col<2;col++){
        printf("\nNro de res : %i\n1.Macho\n2.Hembra\n",tabla[fila][0]);
        scanf("%i",&hm);
        if(hm==1){
            tabla[fila][1]=1;

            }
            else if (hm==2){
                tabla[fila][1]=2;
            }
            }
        }
    }
int peso(){
    int kg;
    for(fila=0;fila<nro;fila++){
    for(col=2;col<3;col++){
        printf("\nNro de res : %i\nIngrese el peso\n",tabla[fila][0]);
        scanf("%i",&kg);
        tabla[fila][2]=kg;
        }
}
}
int serie(){
    for(fila=0;fila<nro;fila++){
        for(col=3;col<4;col++){
            tabla[fila][3]=0+rand()%100;
        }
    }
}
int contador(){
    int cont1=0;
    int cont2=0;
for(fila=0;fila<nro;fila++){
    for(col=0;col<1;col++){
        if(tabla[fila][1]==1){
            cont1=cont1+1;
        }
        else if(tabla[fila][1]==2){
            cont2=cont2+1;
        }
    }
}
printf("\nMachos:%i\nHembras:%i\n",cont1,cont2);
}
int proceso(){
for(fila=0;fila<nro;fila++){
    for(col=1;col<2;col++){
        if(tabla[fila][1]==2 && tabla[fila][2]>40){
            printf("\nNumero de res %i\nSexo %i\nPeso %i\nCodigo de serie %i\n",tabla[fila][0],tabla[fila][1],tabla[fila][2],tabla[fila][3]);
        }
    }
}
}
int constante(){
printf("\nIngrese cant. de animales\n");
scanf("%i",&nro);
}
void menu(){
printf("\n1.Cuantos ingresaron?\n2.Ver planilla por completo\n3.Asignar M O H\n4.Asignar Peso\n5.Resultado\n");}
