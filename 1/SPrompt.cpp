//Programa Simple Prompt p/ chat
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	char character[100];
	char title[200];
	int op;
	int token;
	printf("Bem vindo ao SPrompt!\n\n");
	printf("1. Começar\n\n");
	printf("2. Sair\n\n");
	printf("Digite sua opção: ");
	do{
	op = getch();
	op = op - 48;
	switch(op){
		case 1:{
			do{
				char character[100];
				char title[200];
				int op;
			system("cls");
			if(token == 0){
			printf("Digite o nome de um(a) personagem: ");
    		scanf("%[^\n]s",character);
			printf("Digite o título da obra: ");
			scanf("%c", title);			
    		scanf("%[^\n]s",title);
    		system("cls");
			printf("Olá, com todo respeito e gentileza, faça uma atuação imersiva de um(a) personagem chamado(a) de \"%s\", do vídeo-jogo eletrônico e/ou desenho chamado de \"%s!\" (Pesquise a personalidade e modo de fala). Por favor. (Apenas texto e itálico - Inicie uma conversa comigo de imediato, grato!)\n\nGusta: Olá! *Eu aceno levemente* É um prazer te conhecer, quem é você? *Eu pergunto, um pouco confuso ainda*", character, title);
			printf("\n\n\nGostaria de rodar novamente (1/0)?: ");}
				if(token == 1){
					printf("Digite o nome de um(a) personagem: ");
					scanf("%c", character);
		    		scanf("%[^\n]s",character);
					printf("Digite o título da obra: ");
					scanf("%c", title);			
		    		scanf("%[^\n]s",title);
		    		system("cls");
					printf("Olá, com todo respeito e gentileza, faça uma atuação imersiva de um(a) personagem chamado(a) de \"%s\", do vídeo-jogo eletrônico e/ou desenho chamado de \"%s!\" (Pesquise a personalidade e modo de fala). Por favor. (Apenas texto e itálico - Inicie uma conversa comigo de imediato, grato!)\n\nGusta: Olá! *Eu aceno levemente* É um prazer te conhecer, quem é você? *Eu pergunto, um pouco confuso ainda*", character, title);
					printf("\n\n\nGostaria de rodar novamente (1/0)?: ");
					scanf("%i", &op);
					if(op == 0){
						exit(0);
					}}
			if(token ==0){
			scanf("%i", &op);
			if(op == 0){
				exit(0);
			}
			token = 1;}
			}while(op == 1);
		}	
		case 2:{
			exit(0);
		default:
			printf("\nValor Incorreto! Digite novamente: ");	
		}
	}
	}while(op != 1 || op != 2);
}
