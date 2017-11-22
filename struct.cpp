#include <iostream>
#include <string>
using namespace std;

struct STR_age{
	int in_weeks;
	int from;
};

struct STR_animal {
	string name;
	int weight;
	STR_age age;
};


int main (int argc, char* argv[]){


	STR_animal animals[5];
	
	animals[0].name="bird";animals[1].name="monkey";animals[2].name="elephan";animals[3].name="pig";
	animals[4].name="dog";

	animals[0].weight= 46;animals[1].weight= 92; animals[2].weight= 12; animals[3].weight= 80;
        animals[4].weight= 15;

	animals[0].age.in_weeks=43; animals[1].age.in_weeks=33; animals[2].age.in_weeks=53;
        animals[3].age.in_weeks=13; animals[4].age.in_weeks=23;

        animals[0].age.from=11; animals[1].age.from=3; animals[2].age.from=8; animals[3].age.from=64;
        animals[4].age.from=123;

	for (int i=0; i<5; i++){
		cout << "**********************************************" << endl;
		cout << "Name of pet:	         " << animals[i].name << endl;
		cout << "	- weight:        " << animals[i].weight << endl;
		cout << "	- age in weeks:  " << animals[i].age.in_weeks << endl;
		cout << "	- how long is:   " << animals[i].age.from << endl;
		cout << "**********************************************" << endl << endl;


	}

	return 0;
}
