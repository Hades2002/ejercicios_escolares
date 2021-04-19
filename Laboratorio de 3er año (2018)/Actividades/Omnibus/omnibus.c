#include<stdio.h>
#define F 30
#define C 5
int tabla[F][C]; int omnibus,columna;
int guardar();
int ver();
int recaudacion();
int totalkm();
main(){
guardar();recaudacion();totalkm();ver();



return 0;
}
int guardar(){
for(omnibus=0;omnibus<F;omnibus++){

    for(columna=0;columna<2;columna++){
            while(tabla[omnibus][0]<=30 ){
        tabla[omnibus][0]+1;
        }
        tabla[omnibus][1]=1+rand()%3;
        tabla[omnibus][2]=1+rand()%20;


    }//fin recorrido de columnas
}//fin recorrido de filas


}//fin guardar

int ver(){
    printf("\n  LA PAGA ES DE 10$ POR KM.\n");
    printf("\nNRO.DEOMNIBUS|CANT.DE VIAJES|KM.RECORRIDOSXVIAJE|RECAUDACION|TOTAL KM.REC. \n");
for(omnibus=0;omnibus<F;omnibus++){

    for(columna=0;columna<C;columna++){
        printf("%13i",tabla[omnibus][columna]);



    }//fin recorrido de columnas
    printf("\n");
}//fin recorrido de filas


}//fin guardar


int recaudacion(){
for(omnibus=0;omnibus<F;omnibus++){

    for(columna=0;columna<3;columna++){

tabla[omnibus][3]=tabla[omnibus][2]*10;



    }//fin recorrido de columnas
}//fin recorrido de filas

}//fin recaudacion


int totalkm(){
for(omnibus=0;omnibus<F;omnibus++){

    for(columna=0;columna<5;columna++){


tabla[omnibus][4]=tabla[omnibus][2]*tabla[omnibus][1];




    }//fin recorrido de columnas
}//fin recorrido de filas
return tabla[omnibus][4];
}//totalkm









