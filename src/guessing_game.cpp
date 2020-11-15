#include <iostream>
#include <stdlib.h>
using namespace std;

// https://www.sololearn.com/Discuss/344022/why-this-rand-always-showing-41-as-output
//add this to your includes
#include <ctime> //to use time()

int main () {
    srand(time(0));//seed the rand function

    int computer_input = rand() % 101;
    int player_input;

    do {
        cout << "Enter integer:" << endl;

        if (!(cin >> player_input)) {
            cout << "Wrong input. Only integer allowed" << endl;
            continue;
        }

        if (player_input > computer_input) 
        {
            cout << "You guessed too high" << endl;
        } else if (player_input < computer_input)
        {
            cout << "You guessed too low" << endl;
        } else
        {
            cout << "You guessed correctly. It was " << player_input;
        }

    } while (player_input != computer_input);

}