#include "Header.h"
//10.	Obtenga el n�mero mayor de tres n�meros cualesquiera
void E10(void){
	system("cls");
	float n1,n2,n3;
	printf("Ingrese un Numero \n");
	scanf("%f",&n1);
	printf("Otro Numero \n");
	scanf("%f",&n2);
	printf("Otro Numero \n");
	scanf("%f",&n3);
	if (n1>n2&&n1>n3){
		printf("El Numero Mayor es 1.= %0.2f \n",n1);
	}else if  (n2>n1&&n2>n3){
		printf("El Numero Mayor es 2.= %0.2f \n",n2);
	}else {
		printf("El Numero Mayor es 3.= %0.2f \n",n3);
	}
	system("pause");
	system("cls");
}
