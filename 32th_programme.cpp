// This is a simple programme to declare an array and print its elements
#include<iostream>

using namespace std ;
int main() {
	int A[10] ;
	cout << "Please enter 10 numbers = " ;
	for ( int i = 0 ; i <= 9 ; i++ ) {
		cin >> A[i] ;
	}
	for ( int i = 0 ; i <= 9 ; i++ ) {
		cout << A[i] << " "  ;
	}
	return 0 ;
}
