// This is a programme to find the largest element of a given array
#include<iostream>

using namespace std ;
int main() {
	int A[10] , max ;
	cout << "Enter 10 elements of the array = " ;
	for ( int i = 0 ; i <= 9 ; i++ ) {
		cin >> A[i] ;
	}
	max = A[0] ;
	for ( int i = 1 ; i <= 9 ; i++ ) {
		max = A[i] > max ? A[i] : max ;
	}
	cout << "The largest element of the given array = " << max ;
	return 0 ;
}
