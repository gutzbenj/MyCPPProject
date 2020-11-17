#include <iostream>
using namespace std;

int main () {
    int kHorseCost = 10;
    int kPigCost = 3;
    float kRabbitCost = 0.5;

    float moneyToSpend = 100;
    int animalsToBuy = 100;

    for (int h = 0; h < 100; h++) {
        for (int p = 0; p < 100; p++) {
            for (int r = 0; r < 100; r++) {
                if ((h + p + r) == animalsToBuy)
                    if ((h * kHorseCost + p * kPigCost + r * kRabbitCost) == moneyToSpend)
                        cout << "Solution: " << h << " horses, " << p << " pigs, " << r << " rabbits" << endl;
            }
        }
    }

}