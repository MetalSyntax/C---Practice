#include "Header.h"
/**36.	Dise�ar un algoritmo que determine el precio de un billete ida y vuelta en ferrocarril, 
dando la distancia a recorrer y el  n�mero de d�as en destino, sabiendo que si la estancia es superior a 7 d�as y la distancia es superior a 800 km. 
El billete tiene una reducci�n del 30%. El precio por kil�metro es de 85 Bs*/
void E36(void){
	system("cls");
	int dia,dis,p,d;
	printf("Ingrese dias \n");
	scanf("%d",&dia);
	printf("Ingrese distancia \n");
	scanf("%d",&dis);
	p = dis * 85;
	if (dia>7 && dis>800){
	d = p - (p * 0.30);
	}
	printf("El precio del billete es de %d \n",p);
	system("pause");
	system("cls");
}
