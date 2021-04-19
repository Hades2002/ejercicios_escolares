#include<stdio.h>
#define N 10
int vector[N];
int i;
void menu();int aleatorio(); int ver(); int order(); void buscarxnum(); void buscarxindice();
main(){int op;
do{
        menu();
        scanf("%i",&op);
switch(op){
case 1 : aleatorio(); break ;
case 2 : ver(); break ;
case 3 : order (); break ;
case 4 : buscarxnum(); break ;
case 5 : buscarxindice(); break ;
}
}while(op!=0);
return 0 ;
}
int order(){
int i2;
int aux=0;
for (i=0;i<N;i++){
        for (i2=0;i2<N;i2++){
            if (vector[i]>vector[i2]){
                aux=vector[i];
                vector[i]=vector[i2];
                vector[i2]=aux;
            }//fin de if
        }
}
for (i=0;i<N;i++){
    printf ("%4i",vector[i]);
}
}
int aleatorio(){
srand(time(NULL));
for (i=0;i<N;i++){
vector[i]=rand()%10;
}
return vector[i];
}
void menu(){
printf("\n1.Aleatorios.\n2.Imprimir\n3.Ordenar\n4.Buscarxnum\n5.Buscarxindice\n");
}
int ver(){
for (i=0;i<N;i++){

    printf ("%4i",vector[i]);
}
return vector[i] ;
}
void buscarxnum(){
    int nro;
printf("\nQue nro desea buscar\n");
    scanf("%i",&nro);
    for (i=0;i<N;i++){
        if(nro==vector[i]){
           printf("\nLo encontre\n");
           printf("\nQue nro lo va a remplazar\n");
           scanf("%i",&vector[i]);

           }


    }

}

void buscarxindice(){
int ind;
printf ("\nQue indice desea buscar\n");
scanf("%i",&ind);
while(ind<0 || ind>N){
    printf ("\nRe-ingrese indice que desea buscar\n");
    scanf("%i",&ind);
}
printf ("\nQue nro lo va a remplazar\n");
scanf("%i",&vector[ind]);}
