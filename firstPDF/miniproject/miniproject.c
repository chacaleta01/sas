#include <stdio.h>

void ajouterEtudiant();
void saisirNotes();

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
    
    default: 
        break;
    }


    //printf("le CIN d'etuent est: %s\nle nom d'etudient est: %s\nle prenom d'etudient est: %s", classe[nombreEtudients-1].CNE, classe[nombreEtudients-1].Name, classe[nombreEtudients-1].Nickname);

    return 0;
}



void ajouterEtudiant(){
    
    
    printf("entrer le CNE/ID d'etudient : ");
    scanf("%s",classe[nombreEtudients].CNE);
    
    printf("\nentrer le nom d'etudient : ");
    scanf("%s",classe[nombreEtudients].Name);

    printf("\nentrer le prenom d'etudient : ");
    scanf("%s",classe[nombreEtudients].Nickname);

    nombreEtudients++;

    main();
    return ;
}

void saisirNotes(){
    
    int sommeNotes, num=1;
    for (int i = 0; i < 4; i++)
    {
        printf("entrez la note %d: de l'etudient %s %s:", num, classe[0].Name, classe[0].Nickname );
        scanf("%f", classe[nombreEtudients-1].notes); 
        sommeNotes += classe[nombreEtudients-1].notes[i];
        num++;
    }
    main();
    

    
    
    return ;
}