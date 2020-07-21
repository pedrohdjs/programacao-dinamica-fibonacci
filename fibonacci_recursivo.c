#include <stdio.h>

int fib(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
    
}

int main(){
    int n;
    printf("Insira o valor para o qual se deseja calcular o numero de fibonacci (numero de 0 a 46):\n");
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}