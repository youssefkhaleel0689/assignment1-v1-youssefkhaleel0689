#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main() {
    Animal::Animal(string name, int age, bool isHungry) {
	this->age = age;
	this->isHungry = isHungry;
	this->name = name;


}

void Animal ::  display(){
	cout << "" << name << endl;
	cout << " " << isHungry << endl;
	cout << "" << age <<endl;

}
void Animal::feed() {
	if (isHungry)
		cout << "is hungry" << endl;
	else
		cout << "isnot hungry " << endl;
}
string Animal::getname() {
	return name;
}
int  Animal::getage() {
	return age;
}
bool Animal::getishungry() {
	return isHungry;
}


bird::bird( bool) {
	Animal::getage();
	Animal::getishungry();
	Animal::getname();

	this->wingSpan = wingspan;
	


}
bird::bird() {
}
bird::~bird() {}

Mamal :: Mamal(string){
    Animal::getage();
	Animal::getishungry();
	Animal::getname();
this->furcolor=furcolor
}


//  class enclosure 
Enclosure :: Enclosure (Animal* ann, int capacity, int currentCount) {
	this->ann =  new Animal[currentCount];
	this->capacity = capacity;
	this->currentCount = 0;


}
Enclosure::Enclosure() {
	this->ann = nullptr;
	this->capacity = 0;
	this->currentCount = 0;
}
Enclosure :: ~Enclosure() {}
void Enclosure::addAnimal(Animal * a) {
	if (capacity == currentCount) {
		cout << "" << endl;
		return;
	}
	else {
		this->ann[currentCount] =  *a;
	 currentCount++;
	}
}
void Enclosure::displayAnimal() {
	for (int i = 0; i <= capacity; i++) {
		cout << "animal" << ann << endl;
	}
}
Visitor::Visitor() {
	this->ticketsBought = ticketsBought;
	this->visitorName = visitorName;
}
Visitor::Visitor() {
	this->ticketsBought = 0;
	this->visitorName = "  ";
}
Visitor::~Visitor() {}
void Visitor::displayinfo() {
	cout << "" << visitorName << "" << ticketsBought << endl;
}


    
    return 0;
}
