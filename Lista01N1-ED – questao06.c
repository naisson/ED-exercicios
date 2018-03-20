/*
Função : Criar um programa para calcular e imprimir o salário líquido de um (pobre) professor. Os dados
		fornecidos serão: o valor da hora-aula, número de aulas dadas no mês e percentual de desconto do
		INSS.
Autor : Gabryel Yarzon - Sistemas de Informação 4°Periodo
Data : 11/03/2018	
Observações: 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
 float vha,nad,inss, salario, desconto;
 printf("Informe o valor da hora aula: ");
 scanf("%f",&vha);
 printf("Informe o numero de aulas dadas: ");
 scanf("%f",&nad);
 printf("Informe o valor do percentual de desconto do INSS: ");
 scanf("%f",&inss);
 salario = vha * nad;
 desconto = salario * inss /100;
 printf("\n\nSalario liquido e: %3.2f\n\n",salario - desconto);
 system("PAUSE");
 return 0;
}
