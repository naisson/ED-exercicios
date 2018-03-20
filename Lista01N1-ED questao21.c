/*
Função : Programa que mostra o Mes.
Autor : Gabryel Yarzon - Sistemas de Informação 4°Periodo
Data : 14/03/2018
Observações:
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

int mes;
 
printf("Digite o numero do mes: ");
scanf ("%d",&mes);
    if(mes==1){
    	printf("\nJANEIRO\n");
    }
    if (mes==2){
        printf ("\nFEVEREIRO\n");
    }
    if(mes==3){
        printf("\nMARCO\n");
    }
    if (mes==4){
        printf ("\nABRIL\n\n");
    }
    if(mes==5){
        printf("\nMAIO\n");
    }
    if (mes==6){
        printf ("\nJUNHO\n");
    }
    if(mes==7){
        printf("\nJULHO\n");
    }
    if (mes==8){
        printf ("\nAGOSTO\n\n");
    }
    if(mes==9){
        printf("\nSETEMBRO\n");
    }
    if (mes==10){
        printf ("\nOUTUBRO\n");
    }
    if(mes==11){
        printf("\nNOVEMBRO\n");
    }
    if (mes==12){
        printf ("\nDEZEMBRO\n\n");          
    }else{
      	printf("\nNumero %d e Invalido!\n\n", mes);
    }
    getch();
}
