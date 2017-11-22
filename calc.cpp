#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main (int argc, char * argv[]) {

	if (argc != 4){
		cerr<< "Error: count of arguments is invalid." << endl;
		return 1;
	}

	double lhs = stod (argv[1]);
	string op = argv[2];
	double rhs = stod(argv[3]);

	if (op == "+"){
		cout << "results = " << lhs + rhs << endl;
	} else if (op == "-"){
		cout << "results = " << lhs - rhs << endl;
	} else if (op == "x") {
		cout << "results = " << pow(lhs, rhs) << endl;
	} else {
		cerr << "Error: op " << op << " not supported." << endl;
		return 1;
	}
	
	return 0;
}
