#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <vector> //Ne pas oublier !
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) 
{

   vector<double> notes; //Un tableau vide

   notes.push_back(12.5);  //On ajoute des cases avec les notes
   notes.push_back(19.5);
   notes.push_back(6);
   notes.push_back(12);
   notes.push_back(14.5);
   notes.push_back(15);

   double moyenne(0);
   for(int i(0); i<notes.size(); ++i)
   //On utilise notes.size() pour la limite de notre boucle
   {
	  moyenne += notes[i];   //On additionne toutes les notes
   }

   moyenne /= notes.size();
   //On utilise � nouveau notes.size() pour obtenir le nombre de notes

   cout << "Votre moyenne est : " << moyenne << endl;
   	system("PAUSE");
   return 0;

}
