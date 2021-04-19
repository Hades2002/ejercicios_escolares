#include<stdio.h>
#define N 25
#define M 4
int avion[N][M];int fila,col;
int ver(); int guardar();int contar();void libreocupado();void menu(); int cancelar();
main(){
	int op;
	do{
	menu();
	scanf("%i",&op);
	switch(op){
		case 1:ver();contar(); break ;
			case 2:guardar();break ;
				case 3:libreocupado(); break;
				case 4:cancelar(); break ;
	}
	}while(op!=0);
return 0;
}
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
int contar(){
	int ceros=0, uno=0;
	for(fila=0;fila<N;fila++){
for(col=0;col<M;col++){
	if(avion[fila][col]==0){
		ceros=ceros+1;
	}
	else if(avion[fila][col]==1){
		uno=uno+1;
	}
}
}
printf("\n0=%i Disponibles\n",ceros);
printf("\n1=%i Ocupados\n",uno);
}
void libreocupado(){
	int auxa, auxb;
	int ocupo;

	printf("\nQue fila desea ocupar\n");
	scanf("%i",&auxa);
	auxa=auxa-1;
	while(auxa>=N){
		printf("\nRe ingrese la fila a ocupar, por favor!\n");
	scanf("%i",&auxa);
	auxa=auxa-1;
	}
	printf("\nQue columna\n");
	scanf("%i",&auxb);
	auxb=auxb-1;
	while(auxb>=M){
		printf("\nRe ingrese la columna que desea estar, por favor!\n");
	scanf("%i",&auxb);
	auxb=auxb-1;
	}

	if(avion[auxa][auxb]==0){
		printf("\nEsta libre");
		printf("\nEscriba 0 = Si desea el lugar");
        printf("Cualquier otro numero si no lo desea\n");
		scanf("%i",&ocupo);
		if(ocupo==0){
			avion[auxa][auxb]=1;
		}
	}
	else{
		printf("\nEsta ocupado, Volveremos al menu!");
	}
}
int cancelar(){
    int auxa, auxb;
	int ocupo;

	printf("\nQue fila desea cancelar\n");
	scanf("%i",&auxa);
	auxa=auxa-1;
	while(auxa>=N){
		printf("\nRe ingrese la fila que desea cancelar!\n");
	scanf("%i",&auxa);
	auxa=auxa-1;
	}
	printf("\nDe que columna(Cancelar)\n");
	scanf("%i",&auxb);
	auxb=auxb-1;
	while(auxb>=M){
		printf("\nRe ingrese la columna (Cancelar), por favor!\n");
	scanf("%i",&auxb);
	auxb=auxb-1;
	}

	if(avion[auxa][auxb]==1){
		printf("\nSe ha cancelado su pedido");
		printf("\nEscriba 1 = Si desea cancelar el pedido\n");
		printf("\nCualquier otro numero si no desea cancelar el pedido\n");
		scanf("%i",&ocupo);
		if(ocupo==1){
			avion[auxa][auxb]=0;
		}
	}
	else{
		printf("\nEsta libre!");
	}

}
void menu(){
	printf("\n1.Ver planilla\n2.Generar (aleatorios)\n3.Disponibilidad/Compra\n4.Cancelar pedido\n0.Salir del menu\n");
}
