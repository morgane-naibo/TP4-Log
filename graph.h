/*************************************************************************
                           Ensemble  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/
#include <iostream>
#include <cstring>
#include <unordered_map> 
using namespace std;

//---------- Interface de la classe <graph> (fichier graph.h) ----------------
#if ! defined ( GRAPH_H )
#define GRAPH_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Graph>
//
//
//------------------------------------------------------------------------

class Graph
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
   
    // Mode d'emploi :
    //
    // Contrat :
    //
    




//------------------------------------------------- Surcharge d'opérateurs

    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur

    Graph(unordered_map<string, int> umap);

    // Mode d'emploi :
    //
    // Contrat :
    //

    ~Graph ( ); 
    // Mode d'emploi :
    //
    // Contrat :
    //
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées


//----------------------------------------------------- Attributs protégés

private:
//----------------------------------------------------- Méthodes protégées
unordered_map<string, int> myGraph;

//----------------------------------------------------- Attributs protégés

  
};

//-------------------------------- Autres définitions dépendantes de <Graph>

#endif // Graph

