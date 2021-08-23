#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int choix;
	do {


		printf("taper 1 pour programme saisie et affichage\n\n");
		printf("taper 2 pour programme saisie et comparaison\n\n");
		printf("taper 3 pour programme saisie et comparaison avec nombre aleatoire\n\n");              //menu
		printf("taper 4 pour programme jeux devinette\n\n");
		printf("taper 7 bouton pour quitter \n\n\n");
		scanf_s("%d", &choix);
		switch (choix)
		{
		case 1:
		{
			int n1, n2;
			printf("     programme saisie et affichage \n\n");
			printf("Donner numero 1: ");
			scanf_s("%d", &n1);

			printf("Donner numero 2: ");                                                     //programme saisie 
			scanf_s("%d", &n2);
			printf("numero 1 : %d \n", n1);
			printf("numero 2 : %d \n", n2);
			getch();
			system("pause");
			return(0);

		}

		break;
		case 2:
		{
			int num1, num2;
			printf("     programme saisie et comparaison \n\n");
			printf("Donner numero 1: ");
			scanf_s("%d", &num1);

			printf("Donner numero 2: ");
			scanf_s("%d", &num2);
			if (num1 > num2)                                           // programme saisie et comparaison
			{
				printf("%d > %d ", num1, num2);
			}

			else if (num1 < num2)
			{
				printf("%d < %d ", num1, num2);
			}
			else
			{
				printf("%d = %d ", num1, num2);
			}
			getch();
			system("pause");
			return(0);
		}

		break;
		case 3:
		{
			int num1, num2;
			printf("     programme saisie et comparaison avec random \n\n");
			printf("Donner numero : ");
			scanf_s("%d", &num1);

			srand(time(NULL));                                           //programme saisie et comparaison avec random
			num2 = rand();

			if (num1 > num2)
			{
				printf("%d > %d ", num1, num2);
			}

			else if (num1 < num2)
			{
				printf("%d < %d ", num1, num2);
			}
			else
			{
				printf("%d = %d ", num1, num2);
			}
			getch();
			system("pause");
		}

		break;
		case 4:
		{
			unsigned int ran1;
			int num, tenta, interval_min, interval_max, ran;
			printf("           programme jeux devinement\n\n");
			printf("saisir le nombre de tentatives:\n");
			scanf_s("%d", &tenta);
			printf("saisir le nombre maximal de l'intervalle:\n");
			scanf_s("%d", &interval_max);
			printf("saisir le nombre minimal de l'intervalle:\n");
			scanf_s("%d", &interval_min);
			srand(time(NULL));
			ran = (rand() % interval_max)+interval_min;                                        //      programme jeux devinement
			for (int i = 1; i <= tenta; ++i)
			{

				printf("Tentative N %d : \n", i);
				scanf_s("%d", &num);

				if (num == ran)
				{
					printf("BRAVO !, Vous avez trouvez le nombre mystere");
					getch();
					system("pause");
					break;
				}
				else if (num < ran)
				{
					printf("%d est plus petit  \n\n", num);
				}
				else
				{
					printf("%d est plus grand \n\n", num);
				}
			}
			system("pause");

		}

		break;
		case 7:
			exit(0);
		}

		getch();


	} while (choix != 7);

}