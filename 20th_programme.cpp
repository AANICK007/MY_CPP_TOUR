// This is a mini calulator using switch case
#include<iostream>

using namespace std ;
int main() {
    int A, B, K;
    float C ;
    cout << "THIS IS A PROGRAMME TO DO ALMOST EVERY POSSIBLE CALCULATION BETWEEN TWO NUMBERS " << endl;
    cout << "Please enter the first number A = " ;
    cin >> A;
    cout << "Now, Enter the second number B = " ;
    cin >> B;
    cout << "\nPlease enter 1 for addition between these numbers " << endl;
    cout << "\nPlease enter 2 for subtraction between these numbers ";
    cout << "\nPlease enter 3 for multiplication between these numbers ";
    cout << "\nPlease enter 4 for division between these numbers ";
    cout << "\nPlease enter 5 for comparision between these numbers ";
    cout << "\nPlease enter 6 for bitwise AND between these numbers ";
    cout << "\nPlease enter 7 for power of A or A^B ";
    cout << "\nPlease enter 8 for bitwise OR between these numbers " ;
    cout << "\nPlease enter 9 for exiting this machine " << endl;
    cout << "\nYour choice is = ";
    cin >> K;
    switch (K) {
        case 1 :
            C = A + B;
            cout << "\nThe result is = " << C;
            break;
        case 2 :
            C = A - B;
            cout << "\nThe result is = " << C;
            break;
        case 3 :
            C = A * B;
            cout << "\nThe result is = " << C;
            break;
        case 4 :
            C = (float) A / B;
            cout << "\nThe result is = " << C;
            break;
        case 5 :
            C = A > B ? A : B;
            cout << "\nThe greater number is = " << C;
            break;
        case 6 :
            C = A & B;
            cout << "\nThe result is = " << C;
            break;
        case 7 :
            C = 1;
            int i;
            for (i = 1; i <= B; i++) {
                C *= A;
            }
            cout << "\nThe result is = " << C;
            break;
        case 8 :
            C = A | B;
            cout << "\nThe result is = " << C;
            break;
        case 9 :
            exit(0);
        default:
            cout << "\nHey you this machine is not for your use ";
    }
    return 0;
}
