#include "Header.h"
/**22.	Leer el nombre de un empleado, su salario b�sico por hora, el n�mero de horas trabajadas en el periodo y el porcentaje de retenci�n en la fuente. 
Calcular el salario bruto, el valor de retenci�n y su salario neto. Nota: salario bruto = salario b�sico por hora *n�mero de horas trabajadas en el periodo, 
valor de retenci�n = salario bruto* porcentaje de retenci�n, salario neto = salario bruto - valor de retenci�n*/
void E22(void){
	system("cls");
	char n[20];
	float sbh,nht,prf,sb,vr,sn;
	printf("Nombre de un empleado \n");
	scanf("%s", n);
	printf("Salario basico por hora \n");
	scanf ("%f", &sbh);
	printf("Numero de horas trabajadas en el periodo \n");
	scanf ("%f", &nht);
	printf("Porcentaje de retencion en la fuente \n");
	scanf ("%f", &prf);
	sb = sbh*nht;
	vr = sb*prf;
	sn = sb-vr;
	printf("Salario Bruto %0.2f \n",sb);
	printf("Valor de Retencion %0.2f \n",vr);
	printf("Salario Neto %0.2f \n",sn);
	system("pause");
	system("cls");
}
