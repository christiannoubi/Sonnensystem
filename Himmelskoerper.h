#pragma once;
#include <string>
#include <sstream>
using namespace std;

class Himmelskoerper{

private:
    string _name;
    double _masse;
public:
    Himmelskoerper (const string& name, double masse){
        this->_name = name;
        this->_masse = masse;
    }

    const string &getName() const {
        return _name;
    }

    void setName(const string &Name) {
        Himmelskoerper::_name = _name;
    }

    double getMasse() const {
        return _masse;
    }

    void setMasse(double _masse) {
        Himmelskoerper::_masse = _masse;
    }
};