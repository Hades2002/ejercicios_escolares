#include<stdio.h>
#define N 30
#define M 4
int fichabus [N][M]; int fila, col;
int boleto=125;
int ver();int listado(); int aleatorio(); int viajexrecaudacion(); void menu(); int kilometros();

main(){
   int op;
	do{
	menu();
	scanf("%i",&op);
	switch(op){
		case 1:ver(); break ;
			case 2:listado();aleatorio();break ;
			case 3:viajexrecaudacion();break ;
			case 4:kilometros();break;
	}
	}while(op!=0);
return 0;
}

int ver(){
    printf("\nNumero de bus - Viajes - Recaudacion - Kilometros\n");
  for(fila=0;fila<N;fila++){
  for(col=0;col<M;col++){
    printf("%11i",fichabus[fila][col]);
  }
  printf("\n\n");
  }
  printf("\nEl boleto cuesta 125\n");
}

int listado(){int cont=0;
  for(fila=0;fila<N;fila++){
  for(col=0;col<1;col++){
    cont=cont+1;
    fichabus[fila][col]=cont;

  }
  }
}
int aleatorio(){
    srand(time(NULL));
for(fila=0;fila<N;fila++){
for(col=1;col<2;col++){
fichabus[fila][col]=1+rand()%100;
}
}
return fichabus[fila][col];
}
int viajexrecaudacion(){
for(fila=0;fila<N;fila++){
    for(col=1;col<2;col++){
        fichabus[fila][2]=fichabus[fila][col]*boleto;

            }
        }
    }
int kilometros(){
    for(fila=0;fila<N;fila++){
    for(col=1;col<2;col++){
        fichabus[fila][3]=fichabus[fila][col]*100;
}}}
void menu(){
printf("\n1.Para ver\n2.Generar autobus y viajes\n3.Generar recaudacion\n4.Generar kilometros\n");}
