//Isabella Castilho Palma
#include <stdio.h>
int fib(int fibonacci[10]){
    fibonacci[0]=0;
    fibonacci[1]=1;
    int i;
    for(i=2; i<10; i++){
        fibonacci[i]= fibonacci[i - 1] + fibonacci[i - 2];
    }
}


int main(){
    int resultado,i;
    int fibonacci[10];
     fib(fibonacci);
    
    printf("10 termos da sequencia Fibonacci:\n");
    for(i=0; i<10; i++){
        printf(" %d", fibonacci[i]);
    }
    
    
    return 0;
}