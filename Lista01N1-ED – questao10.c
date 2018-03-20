/*
Função : Lê dois numeros reais e exibe o primeiro com um acréscimo de 30%, e o segundo com desconto de 25%.
Autor : Gabryel Yarzon - Sistemas de Informação
Data : 19/03/2018
Observações:
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	
	float num1,num2;
	printf("Informe o primeiro valor: ");
	scanf("%f",&num1);
	printf("Informe o segundo valor: ");
	scanf("%f",&num2);
	num1=num1+((num1*30)/100);
	num2=num2-((num2*25)/100);
	printf("O primeiro valor com 30% de acrescimo para %.2f\n",num1);
	printf("O segundo valor com 25% de desconto para %.2f\n",num2);
	system("pause");
	return 0;
}
