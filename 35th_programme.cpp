// This is a programme to find if an element is present in the array or not
#include<iostream>

using namespace std ;
int main() {
	int A[10] , hit , i ;
	cout << "Enter 10 elements = " ;
	for ( i = 0 ; i <= 9 ; i++ ) {
		cin >> A[i] ;
	}
	cout << "Enter the element to find = " ;
	cin >> hit ;
	for ( i = 0 ; i <= 9 ; i++ ) {
		if ( hit == A[i] ) {
			cout << "The index of the given element = " << i ; 
			return 0 ;
		}
	}
	cout << "No element of such type found " ; 
	return 0 ;
}
