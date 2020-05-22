// This is a programme to find sum of positive and negative elements of an array
#include<iostream>

using namespace std ;
int main() {
	int A[10] , k=0 , l=0 ;
	cout << "Enter 10 elements = " ;
	for ( int i = 0 ; i <= 9 ; i++ ) {
		cin >> A[i] ;
	}
	for ( int i = 0 ; i <= 9 ; i++ ) {
		if ( A[i] >= 0 ) {
			k += A[i] ;
		}
		else {
			l += A[i] ;
		}
	}
	cout << "\nThe sum of positive elements = " << k ;
	cout << "\nThe sum of negative elements = " << l ;
 	return 0 ;
}
