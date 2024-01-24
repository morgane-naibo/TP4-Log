/*************************************************************************
                           Ensemble  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <graph> (fichier graph.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système


//------------------------------------------------------ Include personnel
#include "Graph.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
#define MAP



//-------------------------------------------- Constructeurs - destructeur

// Algorithme :
Graph::Graph (unordered_map<string, int> umap)
{
    #ifdef MAP
        cout << "Appel au constructeur de Graph" << endl;
    #endif
myGraph=umap;
} //----- Fin de Graph


Graph::~Graph ( )
// Algorithme :
{
    #ifdef MAP
        cout << "Appel au destructeur de " << endl;
    #endif


} 
//----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE


//----------------------------------------------------- Méthodes protégées
