#pragma once;
#include <string>
#include <sstream>
#include <list>
#include <vector>
#include "Stern.h"
#include "Planet.h"
using namespace std;

class Sonnensystem {
private:
    list <const Stern*> stern;
    vector <const Planet*> planet;

public:
    void fuegeHinzu( const Stern & s) {
        stern.push_back(&s);
    }
    void fuegeHinzu( const Planet & p){
        planet.push_back(&p);
    }
    const list <const Stern*> sterne() const {
        return stern;
    }
    const vector <const Planet*> planeten() const {
        return planet;
    }
};