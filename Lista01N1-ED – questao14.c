/*
Função : calcular a media aritimetica, harmonica, geometrica e quadratica
Autor : Gabryel Yarzon - Sistemas de Informação 4°Periodo
Data : 12/03/2018	
Observações: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,d, media, media_h, media_g, media_q;
    printf("Digite a:");
    scanf("%f", &a);
    printf("Digite b:");
    scanf("%f", &b);
    printf("Digite c:");
    scanf("%f", &c);
	printf("Digite d:");
    scanf("%f", &d);

    media = (a + b + c + d)/4;
    media_h = 4/((1/a)+(1/b)+(1/c)+(1/d));
    media_g = pow(a*b*c*d, 0.25);
    media_q = sqrt((a*a+b*b+c*c+d*d)/4);
	
	
	
	printf("\nMedia Aritmetica: %f\n", media);
    printf("Media Geometrica: %f\n", media_g);
    printf("Media Harmonica: %f\n", media_h);
	printf("Media Quadratica: %f\n", media_q);
	
    getchar();
}
