#include <stdio.h>
#include <stdlib.h>
#define TAILLEMIN 2
int main()
{

    char out,in;   // Déclaration des variable
    int tailleCarre,i=1,j=1;


    printf("Veuillez entrer les caracteres externes :\n"); //nous recuperons la valeur des caracteres externes
    scanf("%c",&out);
    fflush(stdin);

    printf("Veuillez entrer les caracteres internes :\n");//nous recuperons la valeur des caracteres internes
    scanf("%c",&in);

    printf("Et la taille : \n");
    scanf("%d",&tailleCarre);

    ////verification de la taille minimale requise pour l'affichage du carre
    if(tailleCarre<TAILLEMIN){
            printf("Erreur, veullez entrer un valeur superieur a %i\n",TAILLEMIN);
}

//          Affichage du carré

    for(i=1; i<=tailleCarre; i++){ //premiere ligne
        printf("%c",out);
    }
    printf("\n");

    for(i=1; i<=tailleCarre-2; i++){ //lignes entre la premiere et derniere
        printf("%c",out);
        for(j=1; j<=tailleCarre-2; j++){
            printf("%c",in);
        }
        printf("%c",out);
        printf("\n");
    }

    i=1;
    for(i=1; i<=tailleCarre; i++){
        printf("%c",out);
    }


    return 0;
}
