/*
Função : Fazer um programa para receber 5 valores inteiros do usuário e mostrar a sua média (que pode não ser
		inteira).
Autor : Gabryel Yarzon - Sistemas de Informação 4°Periodo
Data : 11/03/2018	
Observações: 
*/

#include <stdio.h> 
#include <stdlib.h>

int main() { 
int n1, n2, n3, n4, n5;
float media; 
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5); 
	media = (n1 + n2 + n3 + n4 + n5) / 3.0;  
	printf("\nMédia: %f", media); 
return 0; 
} 
