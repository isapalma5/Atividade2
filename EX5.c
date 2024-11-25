//Isabella Castilho Palma
#include <stdio.h>

int soma(int a , int b){
    return a + b;
}
int main()
{
   int a, b, resultado;
   
   printf("Digite o 1° numero para somar:");
   scanf("%d", &a);
   printf("Digite o 2° numero para somar:");
   scanf("%d", &b); 

    resultado = soma(a, b);
    printf("A soma dos dois numeros é: %d", resultado);
    return 0;
}
