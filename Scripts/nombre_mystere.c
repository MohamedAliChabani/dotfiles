#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int difficulty();
void level_one_and_two(int lvl);
void level_three();

int main()
{
    int lvl;

    lvl = difficulty();
    if (lvl == 1 || lvl == 2) level_one_and_two(lvl);
    else level_three();

    return 0;
}

int difficulty()
{
    int lvl;

    printf("Bienvenue au jeu mystère\n");
    printf("veuillez choisir le niveau de difficulté\n");
    printf("\t1: niveau facile\n");
    printf("\t2: niveau moyen\n");
    printf("\t3: niveau difficile\n");
    printf("Choisir le niveau: ");
    scanf("%d", &lvl);

    return lvl;
}

void level_one_and_two(lvl)
{
    int upper_bound, guess, rand_number, tries_left, max_tries;
    time_t t;

    srand((unsigned) time(&t));

    if (lvl == 1) upper_bound = 100, rand_number = rand() % upper_bound, max_tries = 15;
    else if (lvl == 2) upper_bound = 10000, rand_number = rand() % upper_bound, max_tries = 10;

    tries_left = max_tries;

    while (tries_left > 0) {
        printf("Donnez le nombre mystere entre 0 et %d: ", upper_bound);
        scanf("%d", &guess);

        if (tries_left == 1 && guess != rand_number) {
            tries_left = tries_left - 1;
            printf("Vous avez perdu, le nombre mystere est %d\n", rand_number);
            break;
        }
        else if (guess == rand_number) {
            tries_left = tries_left - 1;
            printf("Bravo! Vous avez gagné au bout de %d tentatives\n", max_tries - tries_left);
            break;
        }

        else if (guess > rand_number) {
            tries_left = tries_left - 1;
            printf("C'est moins, il vous reste %d tentatives\n", tries_left);
        }

        else {
            tries_left = tries_left - 1;
            printf("C'est plus, il vous reste %d tentatives\n", tries_left);
        }
    }
}

void level_three()
{
    char rand_letter = 'A' + (random() % 26);
    int rand_number, tries_left, num_guess, letter_guess, found;
    time_t t;
    int max_tries = 15;

    srand((unsigned) time(&t));
    rand_number = rand() % (100 + 1 - 10) + 10;

    tries_left = 10;
    found = 0;

    while (tries_left > 0) {
        printf("Donnez le nombre mystere entre 10 et 100: ");
        scanf("%d", &num_guess);
        tries_left = tries_left - 1;

        printf("Donnez le caractere mystere entre A et Z: ");
        scanf("%d", &letter_guess);

        if (letter_guess == rand_letter && num_guess == rand_number ) {
            printf("Bravo vous avez gagné au bout de %d tentatives \n", max_tries - tries_left);
            break;
            }

        if (letter_guess == rand_letter ||  num_guess == rand_number ) found = 1;

        if (letter_guess > rand_letter) {
            char hint_letter[] = "Le caractere est avant";}

        if (letter_guess < rand_letter) {
            char hint_letter[] = "Le caractere est apres";}
    }
}
