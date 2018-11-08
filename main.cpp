#include <iostream>
#include <iostream>
#include <iomanip>
#include "Sonnensystem.h"
using namespace std;

int main() {
    Stern sonne ("Sonne", 332976.21, 0,3.82e26);
    Sonnensystem sonnensystem;
    sonnensystem.fuegeHinzu(sonne);
    sonnensystem.fuegeHinzu(Planet("Merkur", 0.06,0.39,0));
    sonnensystem.fuegeHinzu(Planet("Venus",0.82,0.72,0));
    sonnensystem.fuegeHinzu(Planet("Erde",1.0,1.0,1));
    sonnensystem.fuegeHinzu(Planet("Mars",0.11,1.72,2));
    sonnensystem.fuegeHinzu(Planet("Jupiter",317.84,5.20,67));
    sonnensystem.fuegeHinzu(Planet("Saturn",95.17,9.53,62));
    sonnensystem.fuegeHinzu(Planet("Uranus",14.54,19.2,27));
    sonnensystem.fuegeHinzu(Planet("Neptun",17.15,30.1,14));

    int i = 1;
    cout << "Sonnensystem =\n";
    cout << "Sterne: \n";
    for (auto s: sonnensystem.sterne()){
        cout << " " << i << "- Name = " << s->getName()<< "; Masse = " << s->getMasse()<< "; Entfernung = " << s->getEntfernung()<< "; Fusionsleistung= " << s->getFusionsleistung() <<"\n";
        i++;
    }
    cout << "Planeten: \n";
    for (auto p: sonnensystem.planeten()){
        cout << " " << i << "- Name = " << p->getName()<< "; Masse = " << p->getMasse()<< "; Entfernung = " << p->getEntfernung()<< "; Anzahlmonde= " << p->getAnzahlMonde() <<"\n";
        i++;
    }
}