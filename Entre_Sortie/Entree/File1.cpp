#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

#include <string>
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[]) 
{
	int qiUtilisateur(150);
	string nomUtilisateur("Albert Einstein");

	cout << "Vous vous appelez " << nomUtilisateur << " et votre QI vaut " << qiUtilisateur << endl;
	system("PAUSE");

	return 0;
}
