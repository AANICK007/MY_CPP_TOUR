// This is a programme to find if a number is even or odd
#include<iostream> 

using namespace std ;
int main() {
	int A ;
	cout << "Enter a natural number = " ;
	cin >> A ;
	if ( A % 2 ) {
		cout << "The given number is an odd number " ;
	}
	else {
		cout << "The given number is an even number " ;
	}
	return 0 ;
}
