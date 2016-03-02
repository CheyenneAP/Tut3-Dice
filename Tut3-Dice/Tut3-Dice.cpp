#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
 

class Dice{
private: 
	int rollcount;
	int outcome[6];

public:
	Dice(void);
	int roll(void);
	int rollnum();
	int rollcounter();

};


