#include "Header.h"
//15.	Lea dos n�meros, calcule la suma de los n�meros e imprima los n�meros le�dos y solo si la suma es negativa impr�mala tambi�n
void E15(void){
	system("cls");
	float n1,n2,s;
	printf("Ingrese un Numero \n");
	scanf("%f",&n1);
	printf("Otro Numero \n");
	scanf("%f",&n2);
	s = n1 + n2;
	printf("La Suma es = %0.2f \n",s);
	system("pause");
	system("cls");
}
