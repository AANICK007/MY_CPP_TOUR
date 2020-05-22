// This is a programme to find factors of a given number
#include<iostream>

using namespace std ;
int main() {
	int N , i ;
	cout << "Enter a natural number = " ;
	cin >> N ;
	cout << "Factors of given number are = " ;
	for ( i = 1 ; i <= N ; i++ ) {
		if ( N % i == 0 ) {
			cout << "  " << i ;
		}
	}
	return 0 ;
}
