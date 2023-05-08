#ifndef PERSISTANCEPRIXJOURNALIERS_H_INCLUDED
#define PERSISTANCEPRIXJOURNALIERS_H_INCLUDED
#include<vector>
#include<iostream>
#include<fstream>
#include<string>
#include "PrixJournalier.h"
using namespace std;

class PersistancePrixJournaliers
{
    public:
        static vector<PrixJournalier> lirePrixJournaliersDUnFichier(string chemin){
            vector<PrixJournalier> historique;
            ifstream f(chemin.c_str());
            int nbLignes= 0;
            string entete;
            if(f.is_open()){
                f>>entete;
                while(!f.eof()){
                    PrixJournalier pj;
                    f>>(pj);
                    historique.push_back(pj);
                    nbLignes++;
                }
            }
            return historique;
        }
};


#endif // PERSISTANCEPRIXJOURNALIERS_H_INCLUDED
