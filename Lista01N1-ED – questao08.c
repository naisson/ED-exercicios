/*
Função : Ler o salário de um funcionário e imprimi-lo com um aumento de 12%.
Autor : Gabryel Yarzon - Sistemas de Informação 4°Periodo
Data : 11/03/2018	
Observações: 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
   
    char cargo;
    float atual, novo, aumento;
    printf("Seu salario atual:\n");
    scanf("%f",&atual);
        printf("Funcionario\n");
        printf("Aumento de 12%\n");
		novo =	atual * 12;
        printf("Novo salario:%f\n",novo);
    system("PAUSE");
    
}
