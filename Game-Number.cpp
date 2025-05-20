#include <iostream>
using namespace std;

int main() {
    int points = 0;    
    int inp, inp2, poi;
    int y = 1;
    int n = 2;

    cout << "10 | 20 | 30 | 40 | ??" << "\n";
    cout << "number please: ";
    cin >> inp;

    if (inp == 50) {
        cout << "yes, this number" << "\n";
        points++;
    } else if (inp == 100) {
        cout << "no, not this number" << "\n";
        points--;
    }

    cout << "\n60 | 70 | 80 | 90 | ??" << "\n";
    cout << "number please: ";
    cin >> inp2;

    if (inp2 == 100) {
        cout << "yes, this number" << "\n";
        points++;
    } else if (inp2 < 100 && inp2 > 90) {
        cout << "no, not this number" << "\n";
        points--;
    }

    cout << "\ndo you want to check your points? (1 = yes / 2 = no): ";
    cin >> poi;

    if (poi == y) {
        cout << "guess your points: ";
        cin >> poi;

        if (poi == points) {
            cout << "yes, good! your points: " << points << endl;
        } else if (poi < points) {
            cout << "not this point. Good! your points is: " << points << endl;
        }
    } else if (poi == n) {
        cout << "your points is: " << points << endl;
    }

    return 0;
}
