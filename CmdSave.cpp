/*************************************************************************
 CmdSave  -  description
 -------------------
 début                : 20 déc. 2013
 copyright            : (C) 2013 par mkitane
 *************************************************************************/

//---------- Réalisation de la classe <CmdSave> (fichier CmdSave.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
//------------------------------------------------------ Include personnel
#include "CmdSave.h"
#include <fstream>

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CmdSave::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

bool CmdSave::execute(){
   //Pour tous les elements, ecrire leur description
    vector<string>::iterator it;
    
    it= listeParametres.begin();
    string nomFichier = *it;

    
    ofstream o;
    o.open (nomFichier, ofstream::out | ofstream::trunc);
    
    if(o.is_open()){
        for(int i=0; i<listeDesElements->size();i++){
            // A modifier plustard
            o << "Objet " << i << " Ecrit" << endl;
        }
        o.close();
    }else{
        cout<<"Error opening file" << endl;
    }

    return true;
}

bool CmdSave::undo(){
    return false;
}
bool CmdSave::canDoAnUndo(){
    return false;
}


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
CmdSave::CmdSave(map<string,string> *lE, vector<string> lP) : Command(lE,lP)
{
#ifdef MAP
    cout << "Appel au constructeur de <CmdSave>" << endl;
#endif
} //----- Fin de CmdSave


CmdSave::~CmdSave ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CmdSave>" << endl;
#endif
} //----- Fin de ~CmdSave


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées