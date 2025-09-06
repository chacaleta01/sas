#include <stdio.h>

void ajouterEtudiant();


typedef struct student
{
    char *CNE;
    char *Name;
    char *Nickname;
} student;



int main (){
    int choisir;
    printf("1) Ajouter un étudiant\n2) Saisir les notes d’un étudiant\n3) Afficher tous les étudiants\n4) Afficher bulletin d’un étudiant\n5) Calculer la moyenne générale\n0) Quitter\n");
    printf("entrez un nombre de 0 a 5 :");
    scanf("%d",&choisir);
    switch (choisir)
    {
    case 1:{
        ajouterEtudiant();
    }break;
    
    
    default: 
        break;
    }


    return 0;
}



void ajouterEtudiant(){
    student abdou;

    printf("entrer le CNE/ID d'etudient : ");
    scanf("%s",abdou.CNE);
    
    printf("\nentrer le nom d'etudient : ");
    scanf("%s",abdou.Name);

    printf("\nentrer le prenom d'etudient : ");
    scanf("%s",abdou.Nickname);

}