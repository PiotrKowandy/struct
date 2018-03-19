#include <iostream>
#include <cstdlib>
using namespace std;


float show_bmi(int weight=95, float height=1.73){

	return static_cast<float>(weight)/(height * height);

}

int main (int argc, char *argv[]){

    int choice=1;
    int weight=0;
    float height=0;

    while (choice){
        system("CLS");

        cout << "\nDefault arguments are set: \n  height = 1.73 m \n weight = 95 cm \n\n These are examples how function works \n show_bmi() \n show_bmi (70) \n show_bmi(60, 150) \n";

        int parametre;

        cout << "\nWhich function do You want to use: \n\n" ;
        cout << "1 - with default arguments. \n";
        cout << "2 - with one argument.\n";
        cout << "3 - with two arguments.\n\n";
        cin >> parametre;

        switch (parametre){

            case 1:{
                cout <<"\nYour BMI = " << show_bmi() << "\n";
                break;
            }
            case 2: {
                cout << "Give me what weight do You have: \n";
                cin >> weight;
                cout <<"\nYour BMI = " << show_bmi(weight) << "\n";
                break;
            }

            case 3: {
                cout << "Give me what weight do You have: \n";
                cin >> weight;

                cout << "Give me what height do You have (in centimetres and metres): \n";
                cin >> height;
                if (height > 3.0) height /=100;

                cout <<"\nYour BMI = " << show_bmi(weight, height) << "\n";
                break;
            }
        }

        cout << "\nTo leave program, please choose 0.\n";
        cin >> choice;
    }

	return 0;
}
