#include<stdio.h>

int main()
{  
int n;
float h=0;

puts("Digite um numero natural qualquer: ");
scanf("%f",&n);
while (n>=1)
{h=h+1/n;
n--;
}

printf("%f\n",h);
return(0);
}
 
