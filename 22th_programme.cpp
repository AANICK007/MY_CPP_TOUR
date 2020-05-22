// This is a programme to find the binary expression of a giveen decimal expression
#include<iostream>

using namespace std ;
int main() {
	int N , i , a[10] ;
	cout << "Enter a number = " ;
	cin >> N ;
	cout << "The binary expression of the given number is = " ;
	for ( i = 0 ; N > 0 ; i++ ) { 
		a[i] = N%2 ;
		N = N/2 ;
	}
	for( i-1 ; i >= 0 ; i-- ) {
		cout << a[i] ;
	}
	return 0 ;
}
