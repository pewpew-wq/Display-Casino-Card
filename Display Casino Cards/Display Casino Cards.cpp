#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string RandomCard() {
    string label[] = { "Hearts", "Diamonds", "Spades", "Clubs" };
    string value[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };

    srand(time(NULL));

    int labelIndex = rand() % 4;
    int valueIndex = rand() % 13;

    return value[valueIndex] + " of " + label[labelIndex];
}

int main() {
    string card = RandomCard();
    string border = string(40, '*');

    cout << border << endl;
    cout << " " << endl;
    cout << setw(20) << setfill('-') << card << setfill('-') << setw(20) << endl;
    cout << " " << endl;
    cout << border << endl;

    return 0;
}
