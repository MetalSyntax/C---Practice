#include "Header.h"
/**20.	Lea un n�mero y calcule e imprima su ra�z cuadrada. Si el numero es negativo imprima el numero y un mensaje que diga 'tiene ra�z imaginaria'*/
void E20(void){
	system("cls");
	float n,rc;
	printf ("Numero \n");
	scanf ("%f", &n);
	if (n<0){
		printf("La raiz es Imaginaria");
	} else {
		rc = sqrt(n);
		printf("Raiz Cuadrada %0.5f \n",rc);
	}
	system("pause");
	system("cls");
}
