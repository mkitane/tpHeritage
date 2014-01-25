
/*************************************************************************
                           EltGeo  -  description
                             -------------------
    d�but                : 20 d�c. 2013
    copyright            : (C) 2013 par mkitane
*************************************************************************/

//---------- Interface de la classe <EltGeo> (fichier EltGeo.h) ------

//#define MAP

#ifndef ELTGEO_H_INCLUDED
#define ELTGEO_H_INCLUDED

#include <iostream>
#include "Point.h"
using namespace std;

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <EltGeo>
//
//
//------------------------------------------------------------------------

class EltGeo
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
    // type M�thode ( liste des param�tres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    bool depasserBorne(long a, long b);
    const string getNom();
    virtual bool canBeMoved(long dx, long dy) =0; 
    virtual void deplacer(long dx, long dy) =0;
    virtual string description() = 0 ;
    // Mode d'emploi : deplace l'element geometrique selon la translation de vecteur(x0,y0)
    //
    // Contrat :
    //
//------------------------------------------------- Surcharge d'op�rateurs


//-------------------------------------------- Constructeurs - destructeur
    EltGeo ( const EltGeo & unEltGeo );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    EltGeo (string n);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~EltGeo ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- M�thodes prot�g�es
    string nom;
//----------------------------------------------------- Attributs prot�g�s
};

//--------------------------- Autres d�finitions d�pendantes de <EltGeo>

#endif // EltGeo_H_




