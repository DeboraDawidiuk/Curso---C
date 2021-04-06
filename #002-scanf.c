#include <stdio.h>
#include <stdlib.h>

//Esse é o projeto da aula 02 
// do curso delinguagem C

int main(int argc, char*argv[])
{
	int numero;//Isto é uma variável
	
	printf("Digite um número: ");//imprime a frase na tela
	scanf("%d",&numero);//Lê o número que o usuário digita
	getchar();//limpa o buffer do teclado do PC
	
	printf("O número é igual a:%d\n\n",numero);
	
	system("PAUSE");
	return 0;
}
