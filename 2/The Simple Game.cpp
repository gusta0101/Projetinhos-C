//Teste
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
  char y, l, e;
  int resp;
  setlocale(LC_ALL, "english");
  printf("Welcome to the simple game!\n");
  printf("\nWould you like to read the rules? (y/n): ");
  scanf("%s", &y);
  if (y == 'y')
  {
    printf("\nThe rules are: There are no rules!\n\n");
  }
  else
  if (y != 'y')
  {
    printf("\nSure, sure.\n");
  }

do{
do{
	do{
	
  do {
    do {
      do {
        do {
          do {
          l = 'd';
          printf("----------------------------------------------------------------------------");
          printf("\nQuestion 1! What kind of animal has 8 legs? (enter a digit from 1 to 3)\n\n");
          printf("1. Spiders\n");
          printf("2. Crabs\n");
          printf("3. Both of them\n");
          printf("\nAnswer: ");
          scanf("%i", &resp);
        } while (resp != 1 && resp != 2 && resp != 3);
        if (resp == 3)
        {
          printf("\nRight!! That's the correct answer!\n");
        }
        else
        if (resp != 3)
        {
          printf("\nWrong Answer:(");
          printf("\n\nWould you like to try again? (y/n): ");
          scanf("%s", &l);
        }
      } while (l == 'y');
      if (l != 'd' || l == 'y')
      {
        printf("\nThanks for playing!!\n\n");
        system("pause");
        exit(0);
      }

      printf("\n----------------------------------------------------------------------------");
      printf("\nQuestion 2! Are you enjoying this game?\n\n");
      printf("1. Yes\n");
      printf("2. No\n");
      printf("3. Maybe\n");
      printf("\nAnswer: ");
      scanf("%i", &resp);
      if (resp == 1 || resp == 3)
      {
        printf("\nThanks :)\n");
      }
      else
      if (resp == 2)
      {
        printf("\nWrong answer :(");
        l = 'd';
        printf("\n\nWould you like to try again? (y/n): ");
        scanf("%s", &l);
      }
    } while (l == 'y');
    if (l == 'n')
    {
      printf("\nThanks for playing!!\n\n");
      system("pause");
      exit(0);
    }

    printf("\n----------------------------------------------------------------------------");
    printf("\nQuestion 3! What's the meaning of ROBLOX?\n\n");
    printf("1. A video-game\n");
    printf("2. Social Media\n");
    printf("3. Really Old Bald Lady's Obsession X\n");
    printf("\nAnswer: ");
    scanf("%i", &resp);
    if (resp == 1)
    {
      printf("\nYes, I know you are.\n");
      l = ('d');
    }

    if (resp == 3 || resp == 2)
    {
      printf("\nWrong answer :(");
      printf("\n\nWould you like to try again? (y/n): ");
      scanf("%s", &l);
    }
  } while (l == 'y');
  if (l != 'd' || l == 'n')
  {
    printf("\nThanks for playing!!\n\n");
    system("pause");
    exit(0);
  }
  
	printf("\n----------------------------------------------------------------------------");
    printf("\nQuestion 4! What colour is the sausage (used in hot dogs)?\n\n");
    printf("1. Yellow\n");
    printf("2. Orange\n");
    printf("3. Red\n");
    printf("\nAnswer: ");
    scanf("%i", &resp);
    if (resp == 3)
    {
      printf("\nCorrect answer!! :)\n");
      l = ('d');
    }

    if (resp == 1 || resp == 2)
    {
      printf("\nWrong answer :(");
      printf("\n\nWould you like to try again? (y/n): ");
      scanf("%s", &l);
    }
  } while (l == 'y');
  if (l != 'd' || l == 'n')
  {
    printf("\nThanks for playing!!\n\n");
    system("pause");
    exit(0);
  }
    
	printf("\n----------------------------------------------------------------------------");
    printf("\nQuestion 5! What's 1-1+2?\n\n");
    printf("1. 2\n");
    printf("2. 0\n");
    printf("3. -1\n");
    printf("\nAnswer: ");
    scanf("%i", &resp);
    if (resp == 2)
    {
      printf("\nCorrect answer!! :)\n");
      l = ('d');
    }

    if (resp == 1 || resp == 3)
    {
      printf("\nWrong answer :(");
      printf("\n\nWould you like to try again? (y/n): ");
      scanf("%s", &l);
    }
  } while (l == 'y');
  if (l != 'd' || l == 'n')
  {
    printf("\nThanks for playing!!\n\n");
    system("pause");
    exit(0);
  }
    
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n------------------------------BEWARE!---------------------------------------");
    printf("\nThings now will get a little more challenging!");
    printf("\nYou'll Have 4 choices to make now");
    printf("\nWould you like to save your progress?\n");
    printf("\nAnswer: ");
    scanf("%s", &e);
    printf("\n\nToo bad, this feature is not implemented in the game yet!\n\n");
    system("pause");
    
	printf("\n----------------------------------------------------------------------------");
    printf("\nQuestion 6! What will happen tomorrow?\n\n");
    printf("1. Nothing\n");
    printf("2. Everything\n");
    printf("3. Why?\n");
    printf("4. I'll wake up");
    printf("\nAnswer: ");
    scanf("%i", &resp);
    if (resp == 1 || resp == 4)
    {
      printf("\nThat's right! Keep up the good results :D\n");
      l = ('d');
    }

    if (resp == 2 || resp == 3)
    {
      printf("\nWrong answer :(");
      printf("\n\nWould you like to try again? (y/n): ");
      scanf("%s", &l);
    }
  } while (l == 'y');
  if (l != 'd' || l == 'n')
  {
    printf("\nThanks for playing!!\n\n");
    system("pause");
    exit(0);
  }
    
	printf("\n----------------------------------------------------------------------------");
    printf("\nQuestion 7! Are you afraid of death?\n\n");
    printf("1. Yes\n");
    printf("2. No\n");
    printf("\nAnswer: ");
    scanf("%i", &resp);
    if (resp == 2)
    {
      printf("\nGood :)\n");
      l = ('d');
    }

    if (resp == 1)
    {
      printf("\nWrong answer :(");
      printf("\n\nWould you like to try again? (y/n): ");
      scanf("%s", &l);
    }
  } while (l == 'y');
  if (l != 'd' || l == 'n')
  {
    printf("\nThanks for playing!!\n\n");
    system("pause");
    exit(0);
  }
    
	printf("\n----------------------------------------------------------------------------");
    printf("\nQuestion 8! Are you alone?\n\n");
    printf("1. Yes\n");
    printf("2. No\n");
    printf("3. No\n");
    printf("4. No\n");
    printf("2. No\n");
    printf("3. No\n");
    printf("4. No\n");
    printf("2. No\n");
    printf("3. No\n");
    printf("4. No\n");
    printf("2. No\n");
    printf("3. No\n");
    printf("4. No\n");
    printf("2. No\n");
    printf("3. No\n");
    printf("4. No\n");
    printf("2. No\n");
    printf("3. No\n");

    printf("\nAnswer: ");
    scanf("%i", &resp);
    if (resp == 2)
    {
      printf("\nI know, you are not.\n");
      l = ('d');
    }

    if (resp == 1)
    {
		exit(0);
    }

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nLook Behind you ;)\n");
	system("pause");
}
