#include <stdio.h>
#include <stdlib.h>

//Esse � o projeto da aula 02 
// do curso delinguagem C

int main(int argc, char*argv[])
{
	int numero;//Isto � uma vari�vel
	
	printf("Digite um n�mero: ");//imprime a frase na tela
	scanf("%d",&numero);//L� o n�mero que o usu�rio digita
	getchar();//limpa o buffer do teclado do PC
	
	printf("O n�mero � igual a:%d\n\n",numero);
	
	system("PAUSE");
	return 0;
}
