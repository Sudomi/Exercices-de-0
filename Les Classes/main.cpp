#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <fstream> // flux vers les fichiers
#include <string>
#include <iostream> // flux d'entr�es/sorties
using namespace std;


class Personnage
{

	private:
	// Attributs
	int mVie;
	int mMana;
	string mNomArme;
	int mDegatsArme;



	public:
        // M�thodes
	void recevoirDegats(int nbDegats)
    {

    }

    void attaquer(Personnage &cible)
	{

	}

	void boirePotionDeVie(int quantitePotion)
    {

    }

    void changerArme(string nomNouvelleArme, int degatsNouvelleArme)
    {

    }

	bool estVivant()
    {

	}
};


int _tmain(int argc, _TCHAR* argv[]) 
{
	Personnage david, goliath;
	//Cr�ation de 2 objets de type Personnage : david et goliath

	goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david r�cup�re 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath r�attaque david
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ?

	goliath.changerArme("Double hache tranchante v�n�neuse de la mort", 40);
    goliath.attaquer(david);


	return 0;
}

