//Isabella Castilho Palma
#include <stdio.h>

float somatorio(int n){
    float soma;
    int i;
    for(i = 0; i<=n; i++){
    soma += 5 *( i * i) + (2 * i) + 8;}
    
    return soma;
}
int main()
{
    float resultado;
    int n;
    
    printf("Digite um numero para o somatorio: ");
    scanf("%d", &n);
    
    resultado= somatorio(n);
    printf("Resultado do somatorio: %.2f", resultado);

    return 0;
}
