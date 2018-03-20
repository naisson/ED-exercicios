/*
Função : Ler um valor em reais e exibir o equivalente em dólares. Considere US$ 1 = R$ 3,12.
Autor : Gabryel Yarzon - Sistemas de Informação 4°Periodo
Data : 14/03/2018
Observações:
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

  float cotacao, dolar, real;
    
    printf("\n\t\tConvertendo Dolar para Real\n\n");
    
    printf(" Cotacao do dolar: ");
    scanf("%f", &cotacao);
    
    printf(" Valor [US$]: ");
    scanf("%f", &dolar);
    
    real = dolar * cotacao;
    
    printf(" Quantia em real: R$ %4.2f\n\n", real);
    
    system("pause");
    return 0;
}
