#ifndef _Samochod_
#define _Samochod_

#include <iostream>
#include "Pojazd.h"

using namespace std;
class Samochod : public Pojazd{
private:
	double pojemnoscSilnika;

public:
	virtual void info();

	void setPojemnoscSilnika(double pojemnoscSilnika){
		this->pojemnoscSilnika = pojemnoscSilnika;
	}

	double getPojemnoscSilnika(){
		return this->pojemnoscSilnika;
	}
};

#endif
