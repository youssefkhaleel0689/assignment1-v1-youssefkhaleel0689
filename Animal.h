#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;
class Animal {
private:
	string name;
	int age;
	bool isHungry;

public:
	Animal(string , int ,bool);
	Animal();
	~Animal();
	void display();
	void feed();
	string getname();
	int getage();
	bool getishungry();



};
//define animal class here 



#endif
