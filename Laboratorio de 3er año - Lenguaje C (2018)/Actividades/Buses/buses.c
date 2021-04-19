#include<stdio.h>
#define M 30
#define N 4
int fichabus[M][N]; int fila, col;
int autobus;
int manipular();
int ver();
int listado();
int viajes();
int recaudacion();
int kilometros();
int verbus();
void menu();
main() {
	int op;
	do {
		menu();
		scanf("%i", &op);
		switch (op) {
		case 1:listado(); ver(); break;
		case 2:manipular(); break;
		case 3:viajes(); break;
		case 4:recaudacion(); break;
		case 5:kilometros(); break;
		case 6:verbus(); break;

		}
	} while (op != 0);
	return 0;
}
void menu() {
	printf("\n1.Ver planilla completa\n2.Manipular el bus\n3.Viajes\n4.Recaudacion\n5.Kilometros\n6.Ver el autobus manipulado en el momento\n");
}
int listado() {
	int cont = 0;
	for (fila = 0; fila < M; fila++) {
		for (col = 0; col < 1; col++) {
			cont = cont + 1;
			fichabus[fila][0] = cont;

		}
	}
}
int ver() {
	printf("\nNumero de bus - Viajes - Recaudacion - Kilometros\n");
	for (fila = 0; fila < M; fila++) {
		for (col = 0; col < N; col++) {
			printf("%11i", fichabus[fila][col]);
		}
		printf("\n");
	}
}
int manipular() {
	printf("\nQue autobus desea manipular\n");
	scanf("%i", &autobus);
	autobus = autobus - 1;
}
int viajes() {
	int hizo = 0;
	int aux;
	aux = autobus + 1;
	printf("\nCuanto viajes realizo? - Autobus %i: ", aux);
	scanf("%i", &hizo);
	hizo = hizo + fichabus[autobus][1];
	fichabus[autobus][1] = hizo;
}
int recaudacion() {
	int hizo = 0;
	int aux;
	aux = autobus + 1;
	printf("\nCuanto recaudodo realizo? - Autobus %i: ", aux);
	scanf("%i", &hizo);
	hizo = hizo + fichabus[autobus][2];
	fichabus[autobus][2] = hizo;
}
int kilometros() {
	int hizo = 0;
	int aux;
	aux = autobus + 1;
	printf("\nCuantos kilometros realizo? - Autobus %i: ", aux);
	scanf("%i", &hizo);
	hizo = hizo + fichabus[autobus][3];
	fichabus[autobus][3] = hizo;
}
int verbus() {
	printf("\nAutobus:%i\nViajes :%i\nRecaudacion :%i\nKilometros : %i\n", autobus + 1, fichabus[autobus][1], fichabus[autobus][2], fichabus[autobus][3]);
}
