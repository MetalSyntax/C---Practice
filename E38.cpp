#include "Header.h"
/**38.	Suponga que un individuo desea invertir su capital en un banco y desea saber cu�nto dinero ganara despu�s de un mes si el banco paga a raz�n de 2% mensual.*/
void E38(void){
	system("cls");
	float c,g;
	printf("Ingrese capital \n");
	scanf("%f",&c);
	g = c + c*0.2;
	printf("Ganancia luego de un mes %0.2f \n",g);
	system("pause");
	system("cls");
}
