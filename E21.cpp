#include "Header.h"
/**21.	Leer un n�mero y calcular el 5% del n�mero le�do. Obtener tanto el n�mero como el porcentaje calculado.*/
void E21(void){
	system("cls");
	float n,p;
	printf ("Numero \n");
	scanf ("%f", &n);
	p = n*0.05;
	printf("Numero es %0.2f \n",n);
	printf("El Porcentaje es %0.2f \n",p);
	system("pause");
	system("cls");
}
