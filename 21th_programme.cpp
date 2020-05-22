#include<iostream>

using namespace std ;
int main() {
	int N , i ;
	cout << "Enter a natural number = " ;
	cin >> N ;
	cout << "Factors of given number are = " ;
	for ( i = 1 ; i <= N-1 ; i++ ) {
		if ( N % i == 0 ) {
			cout << "  " << i ;
		}
	}
	return 0 ;
}
