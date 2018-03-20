/*
Função : Você informa um número (igual ou maior que zero) e ele te mostra todos os divisores de um até esse valor.
Autor : Gabryel Yarzon - Sistemas de Informação
Data : 19/03/2018
Observações: 
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  
	int num,x=1;
	printf("Digite um numero: ");
	scanf("%d",&num);
	while(num>=0){
		for(x;x<=num;x++){
			if(num%x==0){
				printf("%d ",x);
			}
		}
		printf("\nDigite um numero: ");
		scanf("%d",&num);
		x=1;
	}
	system("pause");
	return(0);
}
