#include <stdio.h>
#include <string.h>//Função memset

#define FIB_NAO_CALCULADO -1
#define FIB_MEM_MAX 47 //Fib(47) excede o máximo valor de int na linguagem C.

int fib_pd(int n, int mem[]){
    if (mem[n] == FIB_NAO_CALCULADO){//Só realiza os cálculos se eles ainda não tiverem sido feitos.
        mem[n] = fib_pd(n-1,mem) + fib_pd(n-2,mem);
    }
    return mem[n];
}

int fib(int n){//"Empacota" fib_pd, eliminando a necessidade da declaração/inicialização do array na main().
    int mem[FIB_MEM_MAX];//Array usado para memorizar as respostas
    memset(mem, FIB_NAO_CALCULADO, sizeof(int) * FIB_MEM_MAX);//Marca todos os valores do vetor como não calculados
    mem[0] = 0; //Guarda os valores dos casos base (já conhecidos) no vetor de memória
    mem[1] = 1;
    return fib_pd(n,mem);
}



int main(){
    int n;
    printf("Insira o valor para o qual se deseja calcular o numero de fibonacci (numero de 0 a 46):\n");
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}