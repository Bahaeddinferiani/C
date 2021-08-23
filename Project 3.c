#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{
	int n, i, * tab1, choix, ran, interv, indice, type_tab, tab[100], nb, choix_2, min, j, aide, tmp, sens, menu, k;
	{
		puts("TAPER 1 POUR SAISIE / 2 POUR TRIER ");                              /*MENU*/
		scanf("%d", &menu);

		switch (menu)
		{
		case 1:
		{

			printf("donner le type de tableau\n");
			printf("taper 1 pour tableau statique\n");
			printf("taper 2 pour tableau statique et elements a trier\n");
			printf("taper 3 pour tableau statique et elements aleatoire\n");
			printf("taper 4 pour tableau dynamique\n");
			scanf("%d", &type_tab);
			switch (type_tab)
			{
			case 1:
			{
				puts("TABLEAU STATIQUE");
				for (i = 0; i < 100; i++)   /*SAISIE DU TABLEAU STATIQUE*/
						{
							printf("donner l'entier du tableau numero [%d] : ", i + 1);
							scanf("%d", &tab[i]);
						}
					
			}
			break;
			case 2:
			{
				puts("TABLEAU STATIQUE ET ELEMENTS A TRIER");
				do {
					printf("donner le numero de cases a trier:\n");
					scanf("%d", &n);
				} while (n < 0 || n>100);
				for (i = 0; i < n; i++)                           /*SAISIE DU TABLEAU STATIQUE ET ELEMENTS A TRIER*/
				{
					printf("donner l'entier du tableau numero [%d] : ", i + 1);
					scanf("%d", &tab[i]);
				}
				for (i = 0; i < n; i++)
					printf(" %d |", tab[i]);
				system("pause");
			}
			break;
			case 3:
			{
				srand(time(NULL));
				puts("tableau statique remplit avec aleatoire");             /*tableau statique et elements aleatoire*/
				for (i = 0; i < 100; i++)
				{
					ran = rand() % 100;
					tab[i] = ran;
				}
				for (i = 0; i < 100; i++)
					printf(" %d |", tab[i]);
				system("pause");
			}
			break;
			case 4:
			{
				puts("TABLEAU DYNAMIQUE");
				do {
					printf("donner les elements a trier: \n");           /*  TABLEAU DYNAMIQUE*/
					scanf("%d", &n);
				} while (n < 0);

				tab1 = (int*)malloc(n * sizeof(int));



				for (i = 0; i < n; i++)
				{
					printf("donner l'entier du tableau numero [%d] : ", i + 1);
					scanf("%d", &tab1[i]);
				}

			}
			break;
			}
		}
		break;
		case 2:                                                           /*    tri     */
		{
			printf("\nquelle methode de tri vous voulez:\n\n");
			/*MENU CHOIX DE TRI*/
			printf("taper 1 pour tri par selection\n");
			printf("taper 2 pour tri par insertion\n");
			printf("taper 3 pour tri par bulles\n");
			scanf("%d", &choix_2);
			switch (choix_2)
			{
			case 1:
			{
				do {
					printf("donner le numero de cases a trier:\n");
					scanf("%d", &n);
				} while (n < 0 || n>100);
				for (i = 0; i < n; i++)             /*SAISIE DU TABLEAU */
				{
					printf("donner l'entier du tableau numero [%d] : ", i + 1);
					scanf("%d", &tab[i]);
				}
				printf("TRI PAR SELECTION\n\n");                                                           /////////* TRI PAR SELECTION *///////////
				do {
					printf("taper 1 pour tri ascendant / 2 pour tri descendant : \n");
					scanf("%d", &sens);
				} while (sens != 1 && sens != 2);
				if (sens == 1)                              /*SENS TRI ASCENDANT*/
				{
					for (i = 0; i < n; i++)
					{
						min = i;
						for (j = i + 1; j < n; j++)
							if (tab[j] < tab[min])
								min = j;
						aide = tab[i];
						tab[i] = tab[min];
						tab[min] = aide;
					}
					k = 0;
					while (tab[k] < tab[k + 1] && k < n)
					{
						k++;
					}
					if (k == n - 1)
						printf("le tableau est triee\n");                /*verification*/
					else
						printf("Non triee");

					for (i = 0; i < n; i++)
						printf(" %d |", tab[i]);
				}
				else                                        /*SENS TRI DESCENDANT*/
				{
					for (i = 0; i <= n - 1; i++)
					{
						min = i;
						for (j = i + 1; j <= n; j++)
							if (tab[j] > tab[min])
								min = j;
						aide = tab[i];
						tab[i] = tab[min];
						tab[min] = aide;
					}
					k = 0;
					while (tab[k] > tab[k + 1] && k < n)
					{
						k++;
					}
					if (k == n )
						printf("le tableau est triee\n");               /*verification*/
					else
						printf("Non triee");
					for (i = 0; i < n; i++)
						printf(" %d |", tab[i]);
				}

				system("pause");
				break;
			}
			case 2:
			{

				do {
					printf("donner le numero de cases a trier:\n");
					scanf("%d", &n);
				} while (n < 0 || n>100);
				for (i = 0; i < n; i++)
				{
					printf("donner l'entier du tableau numero [%d] : ", i + 1);
					scanf("%d", &tab[i]);
				}                                              /////////* TRI PAR INSERTION *///////////
				printf("TRI PAR INSERTION \n");
				do {
					printf("taper 1 pour tri ascendant / 2 pour tri descendant : \n");
					scanf("%d", &sens);
				} while (sens != 1 && sens != 2);
				if (sens == 1)                               /*SENS TRI ASCENDANT*/
				{
					for (i = 0; i <= n - 1; i++)
					{
						j = i;

						while (j > 0 && tab[j - 1] > tab[j]) {
							tmp = tab[j];
							tab[j] = tab[j - 1];
							tab[j - 1] = tmp;

							j--;

						}


					}
					k = 0;
					while (tab[k] < tab[k + 1] && k < n)
					{
						k++;
					}
					if (k == n - 1)
						printf("le tableau est triee\n");               /*verification*/
					else
						printf("Non triee");
					for (i = 0; i < n; i++)
						printf(" %d |", tab[i]);

				}
				else                                          /*SENS TRI DESCENDANT*/
				{
					for (i = 0; i < n; i++)
					{
						j = i;

						while (j > 0 && tab[j - 1] < tab[j]) {
							tmp = tab[j];
							tab[j] = tab[j - 1];
							tab[j - 1] = tmp;

							j--;

						}


					}
					k = 0;
					while (tab[k] > tab[k + 1] && k < n)
					{
						k++;
					}
					if (k == n )
						printf("le tableau est triee\n");               /*verification*/
					else
						printf("Non triee");
					for (i = 0; i < n; i++)
						printf(" %d |", tab[i]);
				}
			}

			system("pause");
			break;
			case 3:
			{
				{
					do {
						printf("donner le numero de cases a trier:\n");
						scanf("%d", &n);
					} while (n < 0 || n>100);
					for (i = 0; i < n; i++)
					{
						printf("donner l'entier du tableau numero [%d] : ", i + 1);
						scanf("%d", &tab[i]);
					}
					printf("TRI PAR BULLES\n");                    /////////* TRI PAR BULLES *///////////
					printf("taper 1 pour tri ascendant / 2 pour tri  descendant : \n");
					scanf("%d", &sens);
				} while (sens != 1 && sens != 2);
				if (sens == 1)                                         /*SENS TRI ASCENDANT*/
				{
					for (i = 0; i < n; i++)
					{
						for (j = 0; j < n - i - 1; j++)
						{
							if (tab[j] > tab[j + 1])
							{
								tmp = tab[j];
								tab[j] = tab[j + 1];
								tab[j + 1] = tmp;
							}
						}
					}
					k = 0;
					while (tab[k] < tab[k + 1] && k < n)
					{
						k++;
					}
					if (k == n )
						printf("le tableau est triee\n");               /*verification*/
					else
						printf("Non triee");

					for (i = 0; i < n; i++)
						printf(" %d |", tab[i]);
					system("pause");

				}
				else                                                 /*SENS TRI DESCENDANT*/
				{
					for (i = 0; i < n; i++)
					{
						for (j = 0; j < n - i - 1; j++)
						{
							if (tab[j] < tab[j + 1])
							{
								tmp = tab[j];
								tab[j] = tab[j + 1];
								tab[j + 1] = tmp;
							}
						}
					}
					k = 0;
					while (tab[k] > tab[k + 1] && k < n)
					{
						k++;
					}

					if (k == n )
						printf("le tableau est triee\n");               /*verification*/
					else
						printf("Non triee");
					for (i = 0; i < n; i++)
						printf(" %d |", tab[i]);


					system("pause");

				}

			}
			}
		}
		break;

		}
	}
}
