#pragma once;
#include <string>
#include <sstream>
#include "Himmelskoerper.h"
using namespace std;

class Stern: public Himmelskoerper{

private:
    double _entfernung;
    double _fusionsleistung;
public:
    Stern(const string & name, double masse, double entfernung, double fusionsleistung): Himmelskoerper(name, masse){
        this->_entfernung = entfernung;
        this->_fusionsleistung = fusionsleistung;
    }

    double getEntfernung() const {
        return _entfernung;
    }

    void setEntfernung(double _entfernung) {
        Stern::_entfernung = _entfernung;
    }

    double getFusionsleistung() const {
        return _fusionsleistung;
    }

    void setFusionsleistung(double _fusionsleistung) {
        Stern::_fusionsleistung = _fusionsleistung;
    }

};