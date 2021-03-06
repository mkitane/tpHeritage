/*************************************************************************
 Command  -  description
 -------------------
 début                : 20 déc. 2013
 copyright            : (C) 2013 par mkitane
 *************************************************************************/

//---------- Réalisation de la classe <Command> (fichier Command.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
//------------------------------------------------------ Include personnel
#include "Command.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Command::Command (map<string,EltGeo *> *lE, vector<string> lP ) : listeParametres(lP) , listeDesElements(lE)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Command>" << endl;
#endif
} //----- Fin de Command


Command::~Command ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Command>" << endl;
#endif
} //----- Fin de ~Command


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
