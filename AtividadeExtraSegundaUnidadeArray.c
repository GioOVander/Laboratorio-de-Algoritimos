#include <stdio.h>

int main() {
    // ENCONTRAR SE EXISTEM E QUANTOS NÚMEROS REPETIDOS NO ARRAY
    int array1[12] = {4, 5, 6, 7, 8, 9, 4, 3, 4, 8, 9, 4};
    int tamanhoArray = sizeof(array1) / sizeof(int);

    printf("O tamanho do array eh: %d\n", tamanhoArray);

    int i, j; //j é o contador da variavel jafoiContado
    int jafoiContado[12] = {0}; // marca os índices que já foram contados

    for (i = 0; i < tamanhoArray; i++) { //utiliza o for pra percorrer todos os elementos do array
        if (jafoiContado[i] == 1) { //aqui ele verifica se o elemento na posição i, ja foi contado antes, se jafoiContado for igual a 1, quer dizer que ele ja foi contado como repetido
            continue; //pula o resto da logica e vai pro proximo numero, sem esse comando o numero ia ficar repetindo 
        }

        int contador = 1; //contador começa em 1 porque assumimos que o propio numero ja apareceu uma vez.

        for (j = i + 1; j < tamanhoArray; j++) { //aqui comparamos array[i] com todos os elementos que vem depois dele, evitando de contar o mesmo par duas vezes, comparando a posição 3 com a 6 e depois a 6 com a 3 por exemplo
            if (array1[i] == array1[j]) { //se o numero na posição j é igual ao numero na posição i, então é uma repetição
                contador++;
                jafoiContado[j] = 1; // marca como contado
            }
        }

        if (contador > 1) {  //verifica se o numero ja apareceu mais de uma vez no array, se sim repete
            printf("Numero %d aparece %d vezes (repetido)\n", array1[i], contador); //exibe o numero do array1 na posição i e quantas vezes ele apareceu
        } else {
            printf("Numero %d aparece 1 vez (unico)\n", array1[i]); //mostra o numero do array1 na posição i e que ele é unico
        }
    }

    return 0;
}