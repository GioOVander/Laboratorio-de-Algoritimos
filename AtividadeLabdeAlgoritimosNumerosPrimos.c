#include <stdio.h>

//função pra verificar se um numero é primo
int checaprimo(int num) {
    if (num < 2) return 0;                                              //dois é o menor numero primo possivel, então se for menor que dois nao é primo, retorna nada.

    for (int i = 2; i <= num / 2; i++){                                 //essa função for é pra verificar se existe algum numero entre 2 e metade da variavel num (num/2) que divida o número sem que fique resto.
        if (num % i == 0) {                                             //significa que divisão é exata, resto = 0
            return 0;                                                   //se encontrar algum divisor, quer dizer que o numero não é primo, retorna 0
        }
    }
    return 1;                                                           //se encontrou algum divisor retorna 1 (quer dizer que é primo)
}

void listarprimos(int limite){                                          //função que recebe o limite de numeros, por exemplo 10 numeros
    printf("Numeros primos menores que: %d: \n", limite);
    for (int i = 2; i < limite; i++){                                   //vai verificar todos os numeros antes de 2 até um antes do limite
        if (checaprimo(i)) {                                            //vai checar cada numero de i dizendo se ele é primo ou nao
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(){
    int num;

    do{
        printf("Digite um numero inteiro maior que 1: ");
        scanf("%d", &num);

        if (num <= 1){              
            printf("Numero invalido, tente novamente!\n");
        }
    } while (num <= 1);                                                 //enquanto o número for menor que 1 ele vai puxar a função pra listar os primos

    listarprimos(num);

    return 0;
}

