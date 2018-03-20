/*
Função : Um determinado material radioativo perde metade de sua massa a cada 50 segundos...
Autor : Gabryel Yarzon - Sistemas de Informação 
Data : 14/03/2018
Observações:
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  
	float massa;
	int hora,minuto,segundo=0;
	printf("Digite a massa em gramas: ");
	scanf("%f",&massa);
	while(massa>=0.05){
		massa=(massa-(massa/2));
		segundo=segundo+50;
	}
	if(segundo>=3600){
		hora=(segundo/3600);
		minuto=(segundo-(3600*hora))/60;
		segundo=(segundo-(3600*hora)-(minuto*60));
		printf("%d horas, %d minutos e %d segundos\n", hora,minuto,segundo);
	}else{
		if(segundo<3600 && segundo>=60){
			hora=(segundo/3600);
			minuto=(segundo-(3600*hora))/60;
			segundo=(segundo-(3600*hora)-(minuto*60));
			printf("%d minutos e %d segundos\n",minuto,segundo);
		}else{
			if(segundo<60){
				hora=(segundo/3600);
				minuto=(segundo-(3600*hora))/60;
				segundo=(segundo-(3600*hora)-(minuto*60));
				printf("%d segundos\n",segundo);
			}
		}
	}
	system("pause");
	return(0);
}
