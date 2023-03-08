//programa data
//Acho que o days é meio inútil, visto que ele é substituido por daye e os meses, bem dificil fazer esse
//caso o mês e dia não seja 1, será muito if acredito eu
#include <stdlib.h>
#include <stdio.h>

int main(){
	//meses em dias
	int jan=30;
	int feb=28; 
	int mar=31;
	//inserir dia que começa
	int days;
	int months;
	//inserir dia que deseja
	int daye;
	int monthe;
	
	printf("Day start: " );
	scanf("%i", &days);
	printf("Month start: " );
	scanf("%i", &months);
	printf("Day end: " );
	scanf("%i", &daye);
	printf("Month end: " );
	scanf("%i", &monthe);
	do{
		if (monthe == 1 && daye == 30){ //caso seja dia 30, é considerado 1 mês inteiro
			days = days+1; //Dias até chegar no dia desejado (inútil?)
			months = months; //Mês 1
			days = daye; // Dias totais
			break;			
		}
		if(monthe == 1 && daye < 30){
			days = days+1;
			months = months=0; //Menos de 30 dias
			days = daye;
			break;}
		if(monthe == 2){
			days = days+1; //aumenta os dias até chegar ao dia desejado
			months = months+1; //Passou por 2 meses
			days = jan+daye;
		}
		if(monthe == 3){
			days = days+1;
			months = months+2;
			days = jan+feb+daye; //Passou por 3 meses
		}
	}while(months != monthe); //Aumentar até o mês bater
	printf("Days: %i Months: %i", days, months); //Exibir o percurso
	printf("\n\n");
	system("pause");
}
