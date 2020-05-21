// This is a programme to check if a number is positive or negative
#include<iostream>

using namespace std ;
int main() {
	int A ;
	cout << "Enter a number = " ;
	cin >> A ;
	if ( A > 0 ) {
		cout << "The given number is a positive number " ;
	}
 	else{
 		if ( A == 0 ) {
			cout << "The given number is zero " ;
 		}
 		else{
 			cout << "The given number is a negative number " ;
		}
	}
}
