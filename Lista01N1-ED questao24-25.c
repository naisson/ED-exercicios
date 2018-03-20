/*
Função : Programa para calcular IMC.
Autor : Gabryel Yarzon - Sistemas de Informação 4°Periodo
Data : 14/03/2018
Observações:
*/
#include<stdio.h>
#include<stdlib.h>
 
int main() {
float P, H, IMC;
printf("Digite o seu peso:\n");
scanf("%f", &P);

printf("Digite a sua altura com . :\n");
scanf("%f", &H);

IMC = P / (H*H);
if (IMC < 26){
    printf("O seu Idice de Massa Corporal e' %.2f e esta Normal\n", IMC );
}
if (IMC >=26<30){
    printf ("O seu Indice de Massa Corporal e' %.2f e voce esta Obeso\n", IMC);
}
if (IMC >=30){
    printf("O seu Indice de Massa Corporal e' %.2f e voce esta com Obesidade Morbida\n", IMC);
}
        
system("pause");      
}
