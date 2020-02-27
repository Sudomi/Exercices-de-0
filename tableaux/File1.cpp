#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include <iostream>

#include <stdio.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[]) 
{
   int const nombreNotes(6);
   double notes[nombreNotes];

   notes[0] = 12.5;
   notes[1] = 19.5;  //Bieeeen !
   notes[2] = 6.;    //Pas bien !
   notes[3] = 12;
   notes[4] = 14.5;
   notes[5] = 15;

   double moyenne(0);
   for(int i(0); i<nombreNotes; ++i)
   {
      moyenne += notes[i];   //On additionne toutes les notes
   }
   //En arrivant ici, la variable moyenne contient la somme des notes (79.5)
   //Il ne reste donc qu'à diviser par le nombre de notes
   moyenne /= nombreNotes;

   cout << "Votre moyenne est : " << moyenne << endl;
   	system("PAUSE");
   return 0;

}

/* AVec une fonction qui reçoit un tableaux en argument

 *  Fonction qui calcule la moyenne des éléments d'un tableau
 *  - tableau : Le tableau dont on veut la moyenne
 *  - tailleTableau : La taille du tableau

double moyenne(double tableau[], int tailleTableau)
{
   double moyenne(0);
   for(int i(0); i<tailleTableau; ++i)
   {
      moyenne += tableau[i];   //On additionne toutes les valeurs
   }
   moyenne /= tailleTableau;

   return moyenne;
}

*/