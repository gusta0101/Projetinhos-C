//programa chatbot bosta
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	char an[20];
	int op;
	char dis;
	int tes;
	int option = 1;
	int tries=0;
	int ign=0;
	int skp;
	char qui;
	do {
		system("cls");
		printf("_____________________________\n");
		printf("|REALLY REALLY BASIC CHATBOT|\n");
		printf("|============MENU===========|\n");
		printf("|1. Stranger  	            |\n");
		printf("|2. WIP	 	            |\n");
		printf("|                           |\n");
		printf("|4. Read me first!          |\n");
		printf("|5. Exit                    |\n");
		printf("|___________________________|\n");
		do {

			skp=0;
			ign = 0;
			tes = 0;
			option = 1;
			op = getch();
			op = op - 48;

			switch (op)
			{
				case 1:
					dis =0;
					if (dis = 1);
					system("cls");
					printf("Stranger: Hello there!\n");
					printf("You: ");
					scanf("%s", an);
					scanf("%[^\n]", &an);
					do { 	if (strcmp(an, "hello") == 0 || strcmp(an, "hi") == 0 || strcmp(an, "Hello") == 0 || strcmp(an, "Hi") == 0 || strcmp(an, "Hey") == 0 || strcmp(an, "hey") == 0)
						{
							printf("Stranger: Heya! :D How are you?\n");
						}

						if (strcmp(an, "who are you") == 0 || strcmp(an, "Who are you") == 0 || strcmp(an,"who are you?") == 0 || strcmp(an,"Who are you?") == 0)
						{
							printf("Stranger: I'm Stranger, nice to meet you.\n");
						}

						if (strcmp(an, "what") == 0 || strcmp(an,"What") == 0 || strcmp (an,"What?") == 0 || strcmp (an,"what?") == 0)
						{
							printf("Stranger: ?\n");
						}
						if (strcmp (an,"how are you?") == 0 || strcmp(an, "How are you?") == 0 || strcmp(an, "how are you") == 0 || strcmp(an, "How are you") == 0 || strcmp(an, "how r u") == 0)
						{
							printf("Stranger: I'm feeling really good right now :D\n");
						}
						if(strcmp (an, "Why")== 0 || strcmp (an, "why")== 0 || strcmp (an, "why?")== 0 || strcmp (an, "Why?")== 0)
						{
							printf("Stranger: What do you mean?\n");
						}
						if(strcmp (an, "Good")== 0 || strcmp (an, "good")== 0 || strcmp (an, "Good!")== 0 || strcmp (an, "good!")== 0 || strcmp (an, "great")== 0 || strcmp (an, "Great")== 0)
						{
							printf("Stranger: That's great to hear!\n");
						}
						if (strcmp(an, "disconnect") == 0 || strcmp(an, "Disconnect") == 0 || strcmp(an, "Exit") == 0 || strcmp(an, "exit") ==0){
							do{
								printf("\nDo you really want to disconnect from the chat? (y/n): ");
								dis = getch();
								if (dis =='n' || dis == 'N'){
									tes = 1;
									dis = 1;
									system("cls");
									break;
								}
								}while(dis != 'y' && dis != 'Y' && dis != 'n' && dis != 'N');
								do {
									if (dis == 'y' || dis == 'Y'){
									printf("\nReturn to menu? (y/n): ");
									dis = getch();
									tes = 1;
									op = 1;
									ign = 1;
									skp = 1;
									break;
								}
								else
									break;
								}while(dis != 'y' && dis != 'Y' && dis != 'n' && dis != 'N');
								if (dis == 'n' || dis == 'N'){
									dis = 0;
									printf("\n\nYou have disconnected from the chat.\nThanks for playing! :)\n\n");
									system("pause");
									exit(0);}
								if (dis == 'y' || dis == 'Y'){
									break;
								}
							}
						if (strcmp(an, "!menu") == 0)
						{
							tes = 1;
							option = 0;
							break;
						}
						if(skp == 1){
							break;
						}
						else{
						printf("You: ");
						scanf("%c", an);
						scanf("%[^\n]", &an);
						dis = 1;}
					} while (dis == 1);
				case 4:
					if (tes == 0)
					{
						system("cls");
						printf("\n|__________________________________________________________|\n");
						printf("| Welcome to the Really really REALLY REALLY REALLY simple |\n");
						printf("| Chatbot game! Currently, its being maintained by Gus and |\n");
						printf("| theres a few current messages available to type !!       |\n");
						printf("| Available keywords:                                      |\n");
						printf("|                                                          |\n");
						printf("|   hi | who are you | what | !menu | disconnect |  exit   |\n");
						printf("|              how are you? | why?                         |\n");
						printf("|                                                          |\n");
						printf("|Reminder: This software is still in development. So...    |\n");
						printf("|Expect more updates in the future and stay tuned :)       |\n");
						printf("|__________________________________________________________|\n");
						system("pause");
						system("cls");
						printf("_____________________________\n");
						printf("|REALLY REALLY BASIC CHATBOT|\n");
						printf("|============MENU===========|\n");
						printf("|1. Stranger  	            |\n");
						printf("|2. WIP	 	            |\n");
						printf("|                           |\n");
						printf("|4. Read me first!          |\n");
						printf("|5. Exit                    |\n");
						printf("|___________________________|\n");
						break;
					}
					
				case 5:
					if (op == 5){
					printf("\nDo you want to quit the game? (y/n): ");
					qui = getch();}
					if (qui == 'y' || qui == 'Y'){
						exit(0);
					}
					if (qui == 'n' || qui == 'N'){
						system("cls");
						op = 1;
						tes = 1;
						break;
					}

				default:
					if (option == 1 && ign == 0)
					{
						printf("\nOption Unavailable! ");
					}

					if (option == 0)
					break;
			}
		} while (op != 1);
	} while (tes == 1);
}
