#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here

class Visitor {
private:
	string visitorName;
	int ticketsBought;
public:
	Visitor(string visitorName, int ticketsBought);
	Visitor();
	~Visitor();
	
	void displayinfo();
	


};





#endif
