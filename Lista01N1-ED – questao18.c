/*
Função : Exibi todos os múltiplos de num2 de 1 até num1 (com num1 e num2 sendo digitados pelo usuário).
Autor : Gabryel Yarzon - Sistemas de Informação
Data : 19/03/2018
Observações:
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1,num2,x;
	scanf("%d %d",&num1,&num2);
	x=1;
	for(x;x<=num1;x++){
		if(x%num2==0){
			printf("%d\n",x);
		}
	}
	system("pause");
	return 0;
}
