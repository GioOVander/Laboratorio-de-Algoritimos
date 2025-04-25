#include<stdio.h>

//Primeira questão
int main(){
	printf("Primeira questao \n");
	printf("Minha comida favorita e Batata frita! \n");



//Segunda questão

int n1,n2, r;

	printf("Segunda questao\n");
	printf("Digite seu primeiro numero: ");
	scanf("%d", &n1);
	printf("Agora, digite seu segundo numero: ");
	scanf("%d", &n2);
	r = (n1 * n2);
	
	printf("O resultado e: %d \n", r);
	


//Terceira questão

int num;
	
	printf("Terceira Questao\n");
	printf("Digite seu numero:");
	scanf("%d", &num);
	
if (num % 2 == 0) {

	printf("O numero e par. \n");
}else{
	printf("O numero e impar. \n");
}
	
	
//Quarta questão

	printf("Quarta Questao\n");
	printf("Digite seu primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite seu segundo numero: ");
	scanf("%d", &n2);
	
if (n1 > n2){
	printf("%d e maior do que %d", n1,n2);
} else if (n2 > n1){
	printf("%d e maior do que %d", n2,n1);
} else{
	printf("Os numeros sao iguais.\n");
}
	

//Quinta questão

int i;

	printf("Quinta questao\n");
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	printf("Tabuada do %d: \n", num);
	
for (i = 1; i <= 10; i++){
	
	printf("%d * %d = %d \n", num, i, num * i);
}
	
//Sexta questão

float fnum1, fnum2, fnum3, media;

	printf("Sexta questao\n");
	printf("Digite sua primeira nota, segunda e terceira nessa ordem.\n");
	scanf("%f%f%f", &fnum1,&fnum2,&fnum3);

media = (fnum1+fnum2+fnum3)/3;
	
if (media >= 7){
	printf("Sua media e: %f Voce foi aprovado.\n", media);
} else {
	printf("Sua media e: %f Voce foi reprovado.\n", media);
}
	
//Setima questão
	
char nome;

printf("Setima questao\n");
printf("Digite seu nome: \n");
scanf("%s", &nome);

printf("Bem-vindo, %s!\n", &nome);

//Oitava questão

char especial;

	printf("Oitava questao\n");
	printf("Digite um caractere especial: \n");
	scanf(" %c", &especial);
	printf("[%c]\n", especial);
	
//Nona Questão

char letra;

	printf("Nona questao\n");
	printf("Digite um simbolo especial, um numero e uma letra nessa ordem (Exemplo: !123A): ");
	scanf(" %c%d%c", &especial, &num, &letra);
	printf("Senha: %c%d %c", especial, num, letra);	
	
	
	return 0;
	}
