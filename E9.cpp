#include "Header.h"
/*9.	Lea un n�mero y calcule e imprima el cuadrado del n�mero y su ra�z cuadrada. 
Si el numero es negativo imprima el numero, el cuadrado del numero y un mensaje que diga 'tiene ra�z imaginaria'*/
void E9 (void){
	system("cls");
	float n1,rc,cn;
	printf("Ingrese un Numero \n");
	scanf("%f",&n1);
	cn=pow(n1,2);
	printf("El cuadrado del numero es = %0.2f \n",cn);
	if (n1<0){
		printf("La raiz es Negativa \n");
	} else {
		rc=sqrt(n1);
		printf("Su raiz es = %0.2f \n",rc);
	}
	system("pause");
	system("cls");
}
