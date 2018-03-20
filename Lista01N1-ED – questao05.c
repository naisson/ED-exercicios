/*
Função : Escreva um programa para determinar a área e o perímetro de um retângulo.
Autor : Gabryel Yarzon - Sistemas de Informação 4°Periodo
Data : 11/03/2018	
Observações: 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float lado_a, lado_b, lado_c, semi, area;
    
    printf("Digite o lado a: ");  
    scanf(" %f", &lado_a);  
    printf("Digite o lado b: ");  
    scanf(" %f", &lado_b);  
    printf("Digite o lado c: ");  
    scanf(" %f", &lado_c);  
   
    semi = (lado_a+lado_b+lado_c)/2.0;
    area = sqrt((semi*(semi-lado_a)*(semi-lado_b)*(semi-lado_c)));
    
    printf("A area do triangulo de lados a = %f, b = %f e c = %f eh = %f\n\n", lado_a, lado_b, lado_c, area);
    system("pause");
}
