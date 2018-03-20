/*
Função : Imprima o quadrado de todos os inteiros até um número N informado pelo usuário.
Autor : Gabryel Yarzon - Sistemas de Informação
Data : 19/03/2018
Observações:
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	
	int num,x;
	scanf("%d",&num);
	x=0;
	for(x;x<=num;x++){
		printf("%d (2) = %g\n",x,pow(x,2));
	}
	system("pause");
	return 0;
}
