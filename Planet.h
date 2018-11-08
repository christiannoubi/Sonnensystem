#pragma once;
#include <string>
#include <sstream>
#include "Himmelskoerper.h"
using namespace std;

class Planet: public Himmelskoerper{

private:
    double _entfernung;
    int _anzahlMonde;

public:
    Planet(string const& name, double masse, double entfernung, int anzahlmonde): Himmelskoerper(name, masse){
        this->_entfernung = entfernung;
        this->_anzahlMonde = anzahlmonde;
    }

    double getEntfernung() const {
        return _entfernung;
    }

    void setEntfernung(double _entfernung) {
        Planet::_entfernung = _entfernung;
    }

    int getAnzahlMonde() const {
        return _anzahlMonde;
    }

    void setAnzahlMonde(int _anzahlMonde) {
        Planet::_anzahlMonde = _anzahlMonde;
    }

};