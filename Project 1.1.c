#include <stdio.h>
#include <stdlib.h> 
#include<time.h>
void main()
{
    int menu, x = 1;
    do {
        printf("taper 1 pour jouer \ntaper 2 pour quitter\n\n");
        scanf_s("%d", &menu);

        if (menu == 1)
        {
            int x1, j, num, ran, interval, tenta, i, choix;
            printf("Donner l'intervalle du nombre aleatoire\n");
            scanf_s("%d", &interval);
            srand(time(NULL));
            ran = rand() % interval;
            printf("Donner le nombre des tentatives:\n");
            scanf_s("%d", &tenta);
            i = 0;
            while (tenta > i) {
                printf("Voulez Vous chercher un chiffre \n 1-oui \n 2-non\n");
                scanf_s("%d", &choix);
                if (choix == 1) {
                    printf("Donner votre chiffre a rechercher\n");
                    scanf_s("%d", &num);
                    tenta = tenta - i;
                    i++;
                    j = 0;
                    while (ran > 0) {
                        x1 = ran % 10;
                        if (x1 == num)
                            j++;
                        ran = ran / 10;
                    }

                    if (j == 0)
                        printf("\nle chiffre %d n existe pas, il vous restre %d tentative\n", num, tenta);
                    else
                        printf("\nle chiffre %d existe %d fois, il vous reste %d tentative\n", num, j, tenta);
                }
                if (choix == 2) {
                    while (tenta > i) {
                        i++;
                        printf("donner votre nombre \n ");
                        scanf_s("%d", &num);
                        printf("tentative numero: %d/%d \n", i, tenta);
                        if (num == ran) {
                            printf("BRAVO!! vous aveez trouver le nombre mystere  \n\n");
                            break;
                        }
                        else if (num > ran) {
                            printf("Le nombre saisi est plus grand que le nombre mystere \n");
                        }
                        else {
                            printf("Le nombre saisi est plus petit que le nombre mystere \n\n");
                        }
                    } break;
                }

            }
         

        }
        else
            exit(0);

    } while (x == 1);
}