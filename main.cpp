/*
* Luncher by Darkiron - contact@darkiron.fr
* build 0.1.5
* June 2014 GNU Licence Ask for use !
*/
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>

using namespace std;
using std::string;

int main(int argc, char *argv[])
{
    // Demande le nom du disque où ce situe Arma !
    int x = 0;
    string dd = "C";
    string patch = "";


    printf ("Nombre d'argument : %d\n", argc);

    for (x = 0; x < argc; ++x){
        printf ("Argument %d : %s\n", x + 1, argv[x]);
        printf ("value %d \n",strcmp("title.exe",argv[x]));
        if(strcmp("arma3.exe",argv[x])!= 0){
            dd = argv[x];
        }
    }

    cout << dd <<endl;
    patch = dd + ":\\SteamLibrary\\SteamApps\\common\\Arma 3";
    cout << dd <<endl;
    cout << "On lunch arma 3 sur :" << patch << endl;

    //Eror 2 file not found but Arma is lunch !
    cout << "Erreur :" << ShellExecute(NULL, "open", "arma3.exe", NULL, patch.c_str(), SW_SHOWNORMAL) << " detail:" << GetLastError() <<endl;
    system("pause");
    return 0;
}
