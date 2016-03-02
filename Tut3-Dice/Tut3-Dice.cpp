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
	int rollOutcome(void); // outcome on the dice 
	int rollnum(); // number of times dice is rolled 
	

};

Dice::Dice(){
	rollcount = 0;
	srand(time(NULL));

}// end Dice


// returns result of a roll
int Dice::rollOutcome(){
	rollcount++;
	return(rand() % 6) + 1;

}

// number of times dice is rolled 
int Dice::rollnum(){
	return rollcount;
} // end rollnum


int main(){
	Dice myDiObj;
	cout << " my Dice has rolled" << myDiObj.rollnum << endl;
}