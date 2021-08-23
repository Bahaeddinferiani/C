#include <stdio.h>
#include <Windows.h>

void main()
{
	int choix;

	do {

		printf("taper 1 pour saisie dun nombre de n chiffres\n");
		printf("taper 2 pour calcul de somme d'un nombre de n chiffres\n");                //menu
		printf("taper 3 pour verifier si nombre saisi est un palindrome ou non\n");
		printf("taper 4 pour verifier si un nombre est uniforme ou non \n");
		printf("taper 5 pour voir les diviseur d'un nombre \n");
		printf("taper 6 pour verfier si un nombre est de dudney ou non \n");



		printf("taper 7 pour quitter \n ");
		scanf_s("%d", &choix);
		switch (choix)
		{
		case 1:                                                      //saisie dun nombre de n chiffres
		{
			int numero, nb, i, x1, x2;
			do {


				printf("donner le nombre de chiffres");
				scanf_s("%d", &nb);
			} while (nb < 0);
			do {
				do {
					printf("donner numero \n");
					scanf_s("%d", &numero);
				} while (numero < 0);
				x2 = numero;
				i = 0;
				do {

					x1 = x2 % 10;
					x2 = x2 / 10;

					i++;

				} while (x2 != 0);

			} while (i != nb);


		}
		break;
		case 2:                                   //calcul de somme d'un nombre de n chiffres
			printf("aucun numero a ete saisi !!\n");
			{
				int  nb, i, x1, x2, x3, somme = 0, numero;
				{do {


					printf("donner le nombre de chiffres\n");
					scanf_s("%d", &nb);
				} while (nb < 0);
				do {
					do {
						printf("donner numero \n");
						scanf_s("%d", &numero);
					} while (numero < 0);
					x2 = numero;
					i = 0;
					do {

						x1 = x2 % 10;
						x2 = x2 / 10;

						i++;

					} while (x2 != 0);

				} while (i != nb);

				}
				while (numero > 0)
				{
					x3 = numero % 10;
					somme = somme + x3;
					numero = numero / 10;
				}
				printf("la somme de ses chiffres est: %d\n\n", somme);
				

			}
			break;
		case 3:                                                //verifier si nombre saisi est un palindrome ou non
			printf("aucun numero a ete saisi !!\n");
			{
				int x, somme = 0, y, numero, nb, x2, x1, i;
				{do {


					printf("donner le nombre de chiffres\n");
					scanf_s("%d", &nb);
				} while (nb < 0);
				do {
					do {
						printf("donner numero \n");
						scanf_s("%d", &numero);
					} while (numero < 0);
					x2 = numero;
					i = 0;
					do {

						x1 = x2 % 10;
						x2 = x2 / 10;

						i++;

					} while (x2 != 0);

				} while (i != nb);

				}
				y = numero;
				while (numero > 0)
				{
					x = numero % 10;
					somme = (somme * 10) + x;
					numero = numero / 10;
				}
				if (y == somme)
					printf("le nombre est un palindrome \n\n ");
				else
					printf("le nombre n'est pas un palindrome\n\n ");
				

			}

			break;
		case 4:                                                //verifier si un nombre est uniforme ou non
			printf("aucun numero a ete saisi !!\n");
			{
				{
					int numero, nb, i, x1, x2, n1, j, n3, n2;
					do {


						printf("donner le nombre de chiffres\n");
						scanf_s("%d", &nb);
					} while (nb < 0);
					do {
						do {
							printf("donner numero \n");
							scanf_s("%d", &numero);
						} while (numero < 0);
						x2 = numero;
						i = 0;
						do {

							x1 = x2 % 10;
							x2 = x2 / 10;

							i++;

						} while (x2 != 0);

					} while (i != nb);

					n2 = numero;
					i = 0;
					j = 1;
					n3 = 0;
					do
					{
						n1 = n2 % 10;
						n2 = n2 / 10;
						i++;
						if (n3 == n1)
						{
							j++;
						}
						n3 = n1;
					} while (nb != i);
					if (j == i)
					{
						printf("uniforme \n\n");
					}
					else
						printf("non uniforme \n\n");


				}


			}
			break;
		case 5:                                              // pour voir les diviseur d'un nombre
			printf("aucun numero a ete saisi !!\n");
			{
				int numero, i, nb, x2, x1;

				{
					do {


						printf("donner le nombre de chiffres\n");
						scanf_s("%d", &nb);
					} while (nb < 0);
					do {
						do {
							printf("donner numero \n");
							scanf_s("%d", &numero);
						} while (numero < 0);
						x2 = numero;
						i = 0;
						do {

							x1 = x2 % 10;
							x2 = x2 / 10;

							i++;

						} while (x2 != 0);

					} while (i != nb);

				}
				for (i = 1; i <= numero; i++)
				{
					if ((numero % i) == 0)
						printf("%d\n", i);
				}
			

			}

			break;
		case 6:                                            //verfier si un nombre est de dudney ou non
		{

			int numero, n1, somme = 0, n2, i, nb, x2, x1;
			{do {


				printf("donner le nombre de chiffres\n");
				scanf_s("%d", &nb);
			} while (nb < 0);
			do {
				do {
					printf("donner numero \n");
					scanf_s("%d", &numero);
				} while (numero < 0);
				x2 = numero;
				i = 0;
				do {

					x1 = x2 % 10;
					x2 = x2 / 10;

					i++;

				} while (x2 != 0);

			} while (i != nb);

			}


			n2 = numero;


			while (n2 != 0) {

				n1 = n2 % 10;

				somme = somme + n1;

				n2 = n2 / 10;

			}

			if (somme * somme * somme == numero) {

				printf("c'est un nombre de dudeney  \n\n");

			}

			else {

				printf("ce n'est pas un nombre de dudney \n\n");

			}
		

		}
		break;
		}
	} while (choix != 7);
}