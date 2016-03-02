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
	float average(Dice, int);
	float average(int);
	void display();
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


// overloading functions named average
float Dice::average(Dice d, int numOutcome){
	// obtain the average of all the dice rolls 
	int sum;
	float average;
	sum = sum + numOutcome;
	average = sum / rollcount;
	return average;
}
float Dice::average(int numOutcome){
	// obstain the average of all the integers in the array
	for (int i = 0; i < rollcount; i++)
	{
		int sum;
		float average;
		outcome[i] = numOutcome;
		sum = sum + outcome[i];
		average = (sum / numOutcome);
		return average;
	}
}
void Dice::display(){


	cout << rollcount << "\t rolls where made " << endl;
	cout << " the outcome of the rolls are:";
	for (int i = 0; i < rollcount; i++)
	{
		cout << outcome[i];
	}
}



int main(){
	Dice myDiObj;
	cout << " Number of times Dice has rolled" << myDiObj.rollnum() << endl;
	cout << "Dice outcomes for " << myDiObj.rollnum();
	cout << "rolls is equal to " << endl;
	

}
