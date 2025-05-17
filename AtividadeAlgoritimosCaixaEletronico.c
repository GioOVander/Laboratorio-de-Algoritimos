#include<stdio.h>
//Caixa eletronico com saque deposito e saldo pqp

int logincaixa();
void menu();
void consultarsaldo(float saldo);
float depositar(float saldo);
float sacar(float saldo);

#define SENHA 1234 //Obrigado chat gpt nao sabia dessa função
int logincaixa() {
   int tentativa = 3;
   int senha; //senha só pode numero inteiro

while (tentativa > 0) {
   printf("Digite a sua senha: ");
   scanf("%d", &senha);

if (senha == SENHA){
   printf("Login realizado com sucesso.\n");
   return 1; //quando o login funcionar
   } else {
      tentativa--;
      printf("Senha incorreta. Restam %d tentativas.\n", tentativa);
   }
}

return 0; //quando o login falhar
}

void menu(){
   int opcao;
   float saldo = 0.0; //assumindo que voce é um pobre lascado

do{
   printf("\n========== MENU PRINCIPAL ==========\n");
   printf("1- Consultar Saldo\n");
   printf("2- Deposito\n");
   printf("3- Sacar\n");
   printf("4- Sair\n");
   printf("Escolha uma opção: ");
   scanf("%d", &opcao);
   

switch(opcao) {
   case 1:
      consultarsaldo(saldo);
      break;
   case 2:
      saldo = depositar(saldo);
      break;
   case 3:
      saldo = sacar(saldo);
      break;
   case 4:
      printf("Saindo...\n");
      break;
   default:
      printf("Operação invalida.\n");
}

} while (opcao != 4); //repete até o usuario apertar a opção de sair(opção 4)
}
void consultarsaldo(float saldo) {
   printf("Saldo atual: %.2f\n", saldo);
}

float depositar(float saldo) {
   float valor;
   printf("Digite o valor que vai depositar: ");
   scanf("%f", &valor);

   if (valor <= 0) {
      printf("Valor invalido. Digite um valor positivo.");
   } else {
      saldo += valor; //vai somar o saldo que tinha com o valor depositado
      printf("Valor depositado com sucesso.");
   }
   return saldo; //o valor do saldo vai ser salvo e atualizado.
}

float sacar(float saldo){
   int valor;
   printf("Digite o valor para sacar: (Apenas valores inteiros.)");
   scanf("%d", &valor);

   if (valor <= 0) {
      printf("Valor invalido.\n");
   } else if (valor > saldo) {
      printf ("Saldo insuficiente.\n");
   } else {
      saldo -= valor; //tira o valor do saldo
      printf("Saque realizado. Notas entregues: ");

      int notas[] = {200, 100, 50, 20, 10, 5, 2}; //notas existentes (eu acho)
      int qtd, i;

      for(i = 0; i < 7; i++) {
         qtd = valor /notas[i]; //quantas notas desse tipo
         valor = valor % notas[i]; //o restante que sobra
         if (qtd > 0) {
            printf("%d nota(s) de %d R$\n", qtd, notas[i]);
         }
      }
   }

return saldo; //atualiza o saldo novamente
}

int main(){
   if(!logincaixa()) { //se o login falhar
      printf("Numero maximo de tentativas execedido. Acesso bloqueado.\n");
      return 1; //fecha o programa
   }

menu(); //se o login funcionou vai abrir o menu

return 0;
}

