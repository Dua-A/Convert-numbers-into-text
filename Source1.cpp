
#include <iostream>
using namespace std;

int x;


int num() {
    string ones[]{ "zero","one","tow","three", "four", "five", "six", "seven", "eight", "nine" , "ten" };
    string tens[]{ "", "eleven","twelve","thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    string te[]{ "","","twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    string hundreds[]{ "","hundred" };

    if (x <= 10) {
        cout << ones[x];
    }
    else if (x < 20) {
        cout << tens[x % 10];
    }
    else if (x < 100) {
        cout << te[x / 10] << " " << ones[x % 10];
    }
    else if (x < 1000) {
        cout << ones[x / 100] << " " << hundreds[1] << " ";
        x = x % 100;
        if (x <= 10) {
            cout << ones[x];
        }
        else if (x < 20) {
            cout << tens[x % 10];
        }
        else {
            cout << te[x / 10] << " " << ones[x % 10];
        }
    }
    return 0;
}
int main() {
    cout << "Inter a number between 0 - 999\n";
    cin >> x;
    num();
    return 0;
}
