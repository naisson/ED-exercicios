/*
Função : calculo triângulo retângulo.
Autor : Gabryel Yarzon - Sistemas de Informação 4°Periodo
Data : 11/03/2018	
Observações: 
*/

#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(){
	
	float a, b, h;
	printf("\nDigite o valor de A: ");
	scanf("%f",&a);
	printf("\nDigite o valor de B: ");
	scanf("%f",&b);
	
	h=sqrt((a*a+b*b));
	
	printf("\nA hipotenusa vale: %f", h);
	
}
