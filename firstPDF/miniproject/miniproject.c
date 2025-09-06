#include <stdio.h>

void ajouterEtudiant();
void saisirNotes();
void afficherEtudiants();
void afficherBulletin();
void calculerMoyenneGenerale();

typedef struct 
{
    char CNE [20];
    char Name[40];
    char Nickname[40];
    float notes[4];
    float moyenne;
    
} student;

int nombreEtudients = 0;
student classe[30];


int main (){
    int choisir ;
    
    while (1)
    {
        printf("1) Ajouter un étudiant\n2) Saisir les notes d’un étudiant\n3) Afficher tous les étudiants\n4) Afficher bulletin d’un étudiant\n5) Calculer la moyenne générale\n0) Quitter\n");
    printf("entrez un nombre de 0 a 5 :");
    scanf("%d",&choisir);
    switch (choisir)
    {
    case 1:{
        ajouterEtudiant();
    }break;

    case 2:{
        saisirNotes();
    }break;

    case 3:{
        afficherEtudiants();
    }break;

    case 4:{
        afficherBulletin();
    }break;
    
    case 5:{
        calculerMoyenneGenerale();
    }break;

    case 0:{
            printf("ciao ");
        return 0;
        break;
    }

    }
}

}

void ajouterEtudiant(){
    
    
    printf("entrer le CNE/ID d'etudient : ");
    scanf("%s",classe[nombreEtudients].CNE);
    
    printf("entrer le nom d'etudient : ");
    scanf("%s",classe[nombreEtudients].Name);

    printf("entrer le prenom d'etudient : ");
    scanf("%s",classe[nombreEtudients].Nickname);

    nombreEtudients++;

    //main();
    return ;
}

void saisirNotes(){

    float sommeNotes;
    int num=1, choisirEtudiant;
    float moyenne;

    for ( int n  = 0; n < nombreEtudients; n++)
    {
        printf("%d_'%s %s'\n", n+1, classe[n].Nickname, classe[n].Name);
    }

    printf("choisir l'etudiant: ");
    scanf ("%d", &choisirEtudiant);

    for (int i = 0; i < 4; i++)
    {
        printf("entrez la note %d: de l'etudient %s %s:", num, classe[choisirEtudiant-1].Name, classe[choisirEtudiant-1].Nickname );
        scanf("%f", &classe[choisirEtudiant-1].notes[i]); 
        sommeNotes += classe[choisirEtudiant-1].notes[i];
        num++;
    }
    classe[choisirEtudiant-1].moyenne = sommeNotes / 4;
    printf("la note moyenne de l'etudient '%s %s' est: %.2f\n", classe[choisirEtudiant-1].Nickname, classe[choisirEtudiant-1].Name, classe[choisirEtudiant-1].moyenne); 
    return ;
}

void afficherEtudiants(){
    for (int n = 0; n <= nombreEtudients; n++)
    {

       printf("| %s | %s | %s |[", classe[n].CNE, classe[n].Name, classe[n].Nickname);

    for (int i = 0; i < 4; i++)
    {
        printf(" %.2f |", classe[nombreEtudients-n].notes[i]);
    }
    printf(" ] | %.2f |\n", classe[nombreEtudients-n].moyenne); 
    
    }
    return;
}

void afficherBulletin(){
    int choisirBulletin, n;
    
    for ( n  = 0; n < nombreEtudients; n++)
    {
        printf("%d_'%s %s'\n", n+1, classe[n].Nickname, classe[n].Name);
    }
    
    printf("choisir le bulletin de quelle etudient: ");
    scanf ("%d", &choisirBulletin);

        for (int i = 0; i < 4; i++)
     {
         printf("la %d note est: %.2f \n", i+1, classe[choisirBulletin-1].notes[i]);
     }
        printf("La moyenne generale d'etudient est: %.2f\n", classe[choisirBulletin-1].moyenne);

    return;
}

void calculerMoyenneGenerale(){

    float sommeMoyenne, moyenneGenerale;

    for (int i = 0; i < nombreEtudients; i++)
    {
        sommeMoyenne += classe[i].moyenne;
    }
    
    moyenneGenerale = sommeMoyenne / nombreEtudients;
    printf("la moyenne generale du claase est %.2f\n", moyenneGenerale);

    return;
}