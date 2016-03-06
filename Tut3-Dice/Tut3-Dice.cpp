#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


class Dice{
private: 
	int rollcount,sum=0;
	int outcome[6];
	float ave;

public:
	Dice(void);
	int rollOutcome(void); // outcome on the dice 
	int rollnum(); // number of times dice is rolled 
	float average(Dice);
	float average();
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
float Dice::average(Dice d){
	// obtain the average of all the dice rolls 
	sum = sum + rollOutcome();
	ave = sum / rollcount;
	return ave;
}
float Dice::average(){
	// obtain the average of all the integers in the array
	for (int i = 0; i < rollcount; i++)
	{
		sum = sum + outcome[i];
		ave= (float)(sum / rollcount);
		
	}
	return ave;
}



void Dice::display(){
	// displays the outcome with the dice roll
	for (int i = 0; i < 6; i++)
	{
		int ro = rollOutcome();
		outcome[i] = ro;
		cout << "outcome\t" << i + 1 << "\t=\t" << ro << "\t Number of times Dice has rolled______" << rollnum();
		cout << "\t\t\t Array[" << i << "] = " << outcome[i] << endl;
	}

}





int main(){
	Dice myDiObj;


	myDiObj.display();

	 float a = myDiObj.average();
	 cout << "average of the  outcomes  = " << a << endl;



	
	
	
	
	
}
