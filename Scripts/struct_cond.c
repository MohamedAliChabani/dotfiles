#include <stdio.h>
#include <stdlib.h>

int main() {
    int birth, interchirur, weight, budget, arret_travail, depistage,
        age, cotisation_de_base, cotisation_finale, niveau_prestation; 

    float height, imc;

    printf("donnez votre année de naissance: ");
    scanf("%d", &birth);

    printf("donnez votre poids: ");
    scanf("%d", &weight);

    printf("donnez votre taille: ");
    scanf("%f", &height);



    printf("interventions chirurgicales lors des 10 dernieres années (0 si non / 1 si oui): ");
    scanf("%d", &interchirur);

    printf("arret de travail depuis plus d'un mois lors des 5 dernieres années (0 si non / 1 si oui): ");
    scanf("%d", &arret_travail);

    printf("depistage (0 si aucun, 1 si VHA[hépatite A], 2 si VHB[hépatite B], 3 si VHC[hépatite C] et 4 si VIH[SIDA]): ");
    scanf("%d", &depistage);

    printf("donnez votre budget: ");
    scanf("%d", &budget);

    printf("interchirur: %d , arret_travail: %d , depistage: %d , budget: %d \n", interchirur,
            arret_travail, depistage, budget);

    imc = weight / (height * height);
    age = 2022 - birth;

    if (interchirur == 1 || arret_travail == 1 || depistage == 2 || depistage == 3 || depistage == 4){
        printf("vous êtes un client a haut risque \n");
        printf("demande d'adhésion rejetée\n");}


    else if (age > 50 || depistage == 1 || imc < 16.5 || imc > 30) {
        printf("\nvous êtes un client à moyen rique \n");

        printf("Liste de niveaux de prestations possibles:");

        printf("\n\nniveau 1:");
        printf("\n\tmaximum de prestations remboursées = 3000DT par an et par prestataire");
        printf("\n\tdans ce cas, le tarif de cotisation de base est 1500DT");

        printf("\n\nniveau 2:");
        printf("\n\tmaximum de prestations remboursées = 3500DT par an et par prestataire");
        printf("\n\tdans ce cas, le tarif de cotisation de base est 1800DT");

        printf("\n\nniveau 3:");
        printf("\n\tmaximum de prestations remboursées = 5000DT par an et par prestataire");
        printf("\n\tdans ce cas, le tarif de cotisation de base est 2100DT");

        printf("\n\nveuillez choisir le niveau de prestations souhaité");
        scanf("%d", &niveau_prestation);

        if (niveau_prestation == 1) cotisation_finale = 1500;

        else if (niveau_prestation == 2) cotisation_de_base = 1800;

        else if (niveau_prestation == 3) cotisation_de_base = 2100;
        
        cotisation_finale = cotisation_de_base * (1 + 15/100);
    }


    else {
        printf("\nvous êtes un client à faible rique \n");

        printf("Liste de niveaux de prestations possibles:");

        printf("\n\nniveau 1:");
        printf("\n\tmaximum de prestations remboursées = 3000DT par an et par prestataire");
        printf("\n\tdans ce cas, le tarif de cotisation de base est 1500DT");

        printf("\n\nniveau 2:");
        printf("\n\tmaximum de prestations remboursées = 3500DT par an et par prestataire");
        printf("\n\tdans ce cas, le tarif de cotisation de base est 1800DT");

        printf("\n\nniveau 3:");
        printf("\n\tmaximum de prestations remboursées = 5000DT par an et par prestataire");
        printf("\n\tdans ce cas, le tarif de cotisation de base est 2100DT");

        printf("\n\nveuillez choisir le niveau de prestations souhaité");
        scanf("%d", &niveau_prestation);

        if (niveau_prestation == 1) cotisation_finale = 1500;

        else if (niveau_prestation == 2) cotisation_de_base = 1800;

        else if (niveau_prestation == 3) cotisation_de_base = 2100;

        cotisation_finale = cotisation_de_base;


    return 0;
    }
}
