#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 
class Enclosure :public Animal  {
private:
	Animal* ann;
	int capacity;
	int currentCount;
public :
	void addAnimal(Animal * a);
	void displayAnimal();
	Enclosure(Animal* ann,int capacity, int currentCount);
	Enclosure();
	~Enclosure();


};








#endif
