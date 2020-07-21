#include <stdio.h>
#include <string.h>//Função memset

#define FIB_NAO_CALCULADO -1
#define FIB_MEM_MAX 47 //Fib(47) excede o máximo valor de int na linguagem C.


int fib(int n){
    int mem[FIB_MEM_MAX];//Array usado para memorizar as respostas
    memset(mem, FIB_NAO_CALCULADO, sizeof(int) * FIB_MEM_MAX);//Marca todos os valores do vetor como não calculados
    mem[0] = 0; //Guarda os valores dos casos base (já conhecidos) no vetor de memória
    mem[1] = 1;
    for(int i = 0; i <= n; i++){
        if(mem[i] == FIB_NAO_CALCULADO){
            mem[i] = mem[i-1] + mem[i-2];
        }
    }
    return mem[n];
}



int main(){
    int n;
    printf("Insira o valor para o qual se deseja calcular o numero de fibonacci (numero de 0 a 46):\n");
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}