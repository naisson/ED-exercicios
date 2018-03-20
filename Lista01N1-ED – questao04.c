/*
Função : Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por
		segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.
Autor : Gabryel Yarzon - Sistemas de Informação 4°Periodo
Data : 11/03/2018	
Observações: 
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	float vkm, vms;
	printf("\n Velocidade em km/h ");
	scanf("vkm");
	vms=vkm/3.6;
	printf("\n A velocidade %f km/h");
	printf("\n Equivale a %f em m/s");
}
