#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    int nombrealeatoire = rand() % 101;
    int nombrejoueur = -1;
    while (nombrealeatoire != nombrejoueur); {
        printf("deviné le nombre : ");
        scanf("%d", &nombrejoueur);
        if (nombrealeatoire > nombrejoueur); {
            printf("C'est plus!");
        }
        if (nombrealeatoire < nombrejoueur); {
            printf("C'est moins!");
        }
        if (nombrealeatoire == nombrejoueur); {
            printf("C'est gagné");
        }
    }
    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
