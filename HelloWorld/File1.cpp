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
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Hello World!" << endl;
	system("PAUSE");
	return 0;
}
