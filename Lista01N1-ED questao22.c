/*
Função : Verifica o valor do carro com o tipo de compustivel e motra o valor do desconto e o valor final.
Autor : Gabryel Yarzon - Sistemas de Informação 
Data : 19/03/2018
Observações:
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  
	float valori,valorf,desc;
	printf("Informe o preco do veiculo: ");
	scanf("%f", &valori);
	while(valori!=0){
		printf("Informe o tipo do carro:\n1- Alcool\n2- Gasolina\n3- Diesel\n\nOpcao: ");
		scanf("%f", &desc);
		if(desc==1){
			valorf=(valori*28)/100;
			printf("O valor do desconto eh de R$ %.2f\n", valorf);
			valorf=valori-valorf;
			printf("O valor final: R$ %.2f\n", valorf);
		}else{
			if(desc==2){
				valorf=(valori*22)/100;
				printf("O valor do desconto eh de R$ %.2f\n", valorf);
				valorf=valori-valorf;
				printf("O valor final: R$ %.2f\n", valorf);
			}else{
				if(desc==3){
					valorf=(valori*12)/100;
					printf("O valor do desconto eh de R$ %.2f\n", valorf);
					valorf=valori-valorf;
					printf("O valor final: R$ %.2f\n", valorf);
				}else{
					printf("Opcao invalida!\n");
				}
			}
		}
		printf("Informe o preco do veiculo: ");
		scanf("%f", &valori);
	}
	system("pause");
	return(0);
}
