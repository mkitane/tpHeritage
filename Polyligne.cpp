/*************************************************************************
                           Polyligne  -  description
                             -------------------
    début                : 20 déc. 2013
    copyright            : (C) 2013 par mkitane
*************************************************************************/

//---------- Réalisation de la classe <Polyligne> (fichier Polyligne.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système

//------------------------------------------------------ Include personnel
#include "Polyligne.h"
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Polyligne::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Polyligne::Polyligne (string n, vector<long> lignes ) : EltGeo(n)
// Algorithme :
//
{
    
    vector<long>::iterator it;
    //On suppose que la ligne de point est toujours paire et modulo 4 = 0
    for(it=lignes.begin(); it< lignes.end() ; it++){
        long x1 = *it;
        long y1 = *(++it);

        Point p(x1,y1);
        listeLignes.push_back(p);
    }

#ifdef MAP
    cout << "Appel au constructeur de <Polyligne>" << endl;
#endif
} //----- Fin de Polyligne


Polyligne::~Polyligne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Polyligne>" << endl;
#endif
} //----- Fin de ~Polyligne
bool Polyligne::canBeMoved(long dx, long dy){
    vector<Point>::iterator it2;
    for(it2=listeLignes.begin(); it2<listeLignes.end() ;it2++){
        if(depasserBorne(it2->getX(), dx) || depasserBorne(it2->getY(), dy)){
            return false;
        }
    }

    return true;
}

void Polyligne::deplacer(long dx, long dy){
    vector<Point>::iterator it;
    for(it=listeLignes.begin(); it<listeLignes.end() ;it++){
        it->deplacer(dx, dy);
    }    
}
string Polyligne::description(){
    string desc = "PL ";
    
    desc = desc + nom;
    vector<Point>::iterator it;
    for(it=listeLignes.begin(); it<listeLignes.end() ;it++){
        desc = desc + " " + it->description() ;
    }
    return desc;
}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
