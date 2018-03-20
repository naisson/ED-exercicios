/*
Função : Calcular e imprimir a área de um triangulo (ha= base *altura/2)
Autor : Gabryel Yarzon - Sistemas de Informação 4°Periodo
Data : 11/03/2018	
Observações: 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
int base, altura, area;
	printf("insira a Base: ");
	scanf("%d", &base);
	printf("Insira a Altura: ");
	scanf("%d", &altura);
	area = ((base * altura) / 2);
	printf("A Area e: %d \n", area);
return 0;
}
