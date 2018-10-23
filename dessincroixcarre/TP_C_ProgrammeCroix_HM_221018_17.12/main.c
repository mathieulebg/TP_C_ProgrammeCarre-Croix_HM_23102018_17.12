#include <stdio.h>
#include <stdlib.h>


#define TAILLEMIN 3 //Taille minimale de la croix et du carre

int main()
{
    //Initialisation des variables
    int nTaille,ni,nj;
    char cChar,cChar2;

    //Saisie des variables
    printf("Veuillez entrer un premier caractere\n");
    scanf("%c",&cChar);
    fflush(stdin);
    do{     //saise de l'entier avec verification de sa valeur
        printf("Veuillez entrer la taille de la croix\n");
        scanf("%i",&nTaille);
        if(nTaille<TAILLEMIN){
            printf("Veuillez entrez s'il vous plait une valeur superieur a %i\n",TAILLEMIN);
        }
    }while(nTaille<TAILLEMIN);


    //boucle POUR de la croix
    for(ni=1;ni<=nTaille;ni++){
        for(nj=1;nj<=nTaille;nj++){
            if((nj==ni)||(nj==nTaille-(ni-1))){
                printf("%c",cChar);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
