//teste

#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main(){
setlocale(LC_ALL, "portuguese"); //Bugado, entao troquei os acentos
char lab='t', tes='true';
int op;
float al, peso, imc, vel, temp, esp, compri, area;
printf("//////////////////\MENU\//////////////////\n\n");
printf("1. Calculo de IMC\n");
printf("2. Calculo de Tempo\n");
printf("3. Calculo da area ao quadrado\n\n");
do{
	printf("\nDigite o numero de acordo com a opcao desejada (ex. 1): ");
	scanf("%i", &op);
	switch(op){
		case 1:
			printf("\n----------------CALCULO DE IMC----------------\n\n");
			printf("Por favor digite a altura (ex. 1,80): ");
			scanf("%f", &al);
			printf("Digite o valor do peso (em kg): ");
			scanf("%f", &peso);
			imc = peso / (al*al);
			printf("Indice: %.2f\n\n", imc);
			printf("Gostaria de voltar ao menu? (s/n): ");
			scanf("%s", &lab);
			if (lab == 'n')
				exit(0);
			else
				tes ='false';
			break;
		case 2:
			printf("\n----------------CALCULO DE TEMPO--------------\n\n");
			printf("Digite a distancia (km): ");
			scanf("%f", &esp);
			printf("Digite a velocidade (km/h): ");
			scanf("%f", &vel);
			temp = esp / vel;
			printf("\nO tempo levara cerca de: %.2f hora(s).\n\n", temp);
					printf("Gostaria de voltar ao menu? (s/n): ");
			scanf("%s", &lab);
			if (lab == 'n')
				exit(0);
			else
				tes = 'false';
			break;
		case 3:
			printf("\n----------------CALCULO DE AREA---------------\n\n");
			printf("Por favor digite o comprimento da reta (metros): ");
			scanf("%f", &area);
			compri = area * area;
			printf("Valor da area ao quadrado: %.2fm^2.\n\n", compri);
			printf("Gostaria de voltar ao menu? (s/n): ");
			scanf("%s", &lab);
			if (lab == 'n'){
				exit(0);}
			else{
				tes='false';
			}
			break;
		default:
			printf("Por favor, digite um valor valido!\n\n");
	}
}while((op != 1 && op != 2 && op != 3) || (tes == 'true'));
//
	printf("//////////////////\MENU\//////////////////\n\n");
	printf("1. Calculo de IMC\n");
	printf("2. Calculo de Tempo\n");
	printf("3. Calculo de area ao quadrado\n\n");
	printf("4. Opcao secreta!!!\n");
	scanf("%i", op);
}
