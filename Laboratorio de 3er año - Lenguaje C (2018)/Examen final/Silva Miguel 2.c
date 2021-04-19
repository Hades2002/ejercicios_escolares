#include<stdio.h> //directiva de entrada y salida
#define M 3 //constante de Fila
#define N 6 //constante de Columna
int tabla[M][N];//arrays
//Variables globales de tipo entero
int pro;
int fila, col;
int x=3; //Variable de tipo, es la variable que va a remplazar M cuando se desea mas de 3 alumnos
//prototipo de funciones
int ver();
int alumnotas();//Ingresar el alumno e ingresar las notas
int aprobados();//Mostrar la lista de aprobados
int cuantos(); //X de alumnos
void menu(); //Mostrar el menu
main(){
    int op;
    dni();//se genera los dni aleatoriamente
    //inicio del menu
    do{
        menu();
        scanf("%i",&op); //Guardar dato y comprobarlo con switch para despues selecionar el menu
        switch(op){
    case 1: ver(); break ; //quiebre
    case 2: alumnotas(); break ;
    case 3: aprobados(); break ;
    case 4: cuantos(); dni();break;
    //cuantos(), dni(), se genera otra vez los dni porque ya es una nueva lista
        }
    }while(op!=0);//Se ingresa 0 y se cancela el menu
    //estructura repetitiva
ver();
return 0;
}
int  ver(){
    printf("\n\n   A  DNI  N1  N2  N3  P \n");
    //for recorrido de los arrays
for(fila=0;fila<x;fila++){
    for(col=0;col<N;col++){
           tabla[fila][0]=fila+1;
        printf("%4i",tabla[fila][col]);
        }
printf("\n");
    }
}//salto de linea

void menu(){
printf("\n1.Ver listado\n2.Ingresar el alumno y sus notas\n3.Ver la lista de aprobados\n4.X de alumnos\n");
}
int alumnotas(){
    int alum;
printf("\nIngrese el alumno que desea colocar sus notas\n");
scanf("%i",&alum);//guardar dato de tipo entero
//restricciones de X alumnos ; si el alumno que desea manipular sus datos es mayor a x ; x:El limite de la lista que se genera
while(alum>x){
        printf("\nRE-Ingrese el alumno\n");
scanf("%i",&alum);
}
alum=alum-1; //le restamos porque los arrays empiezan desde 0

    printf("\nIngrese la nota 1 del alumno %i\n",alum+1); //pedirle al usuario la nota
    scanf("%i",&tabla[alum][2]); //guardar el dato
//Restricciones de las notas
//estrucutra repetitiva
    while(tabla[alum][2]>10){
            printf("\nRE-Ingrese la nota 1 del alumno %i\n",alum+1);
    scanf("%i",&tabla[alum][2]);
    }
    printf("\nIngrese la nota 2 del alumno %i\n",alum+1);
    scanf("%i",&tabla[alum][3]);
    //estructura repetitiva - restriccion
    while(tabla[alum][3]>10){
            printf("\nRE-Ingrese la nota 2 del alumno %i\n",alum+1);
    scanf("%i",&tabla[alum][3]);//guardar nota dos en alum y columna 3
    }

    printf("\nIngrese la nota 3 del alumno %i\n",alum+1);
    scanf("%i",&tabla[alum][4]);
//estructura repetitiva - restriccion
    while(tabla[alum][4]>10){
            printf("\nRE-Ingrese la nota 3 del alumno %i\n",alum+1);
    scanf("%i",&tabla[alum][4]);
    }
//sumar todas las notas y sacar el promedio
    pro=(tabla[alum][2]+tabla[alum][3]+tabla[alum][4])/3;
//del resultado dado se llevara a este sector de la tabla
    tabla[alum][5]=pro;
}
//Funcion aprobado : Listar los alumnos aprobados
int aprobados(){
    //Recorrido de la matriz
for(fila=0;fila<M;fila++){
    for(col=4;col<5;col++){
            //funcion if comprobar si en la columna  5 y haciendo el recorrido si alguien aprobo, si ; se mostrara en pantalla
            if(tabla[fila][5]>5){
                printf("\nEl alumno %i (DNI: %i), aprobo con %i la materia\n",tabla[fila][0],tabla[fila][1],tabla[fila][5]);
    }
}

}

}
//Funcion dni : Generador de dni
int dni(){
    //Recorrido de la matriz
    for(fila=0;fila<x;fila++){
            for(col=0;col<N;col++){
                    //Generar numeros aleatorios 10 a 10000
                tabla[fila][1]=10+rand()%1000;
            }

    }
}
//Funcion cuantos : Pedrile al usuario x de alumnos para formar la nueva lista
int cuantos(){
printf("\De cuanto es la lista de alumnos\n");
scanf("%i",&x);
}
