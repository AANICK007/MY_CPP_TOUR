// This is a programme to find the sum of all elements of an array
#include<iostream>

using namespace std ;
int main() {
	int A[10] , sum=0 ;
	cout << "Enter 10 elements = " ;
	for ( int i = 0 ; i <= 9 ; i++ ) {
		cin >> A[i] ;
	}
	for (int i = 0 ; i <= 9 ; i++ ) {
		sum = sum + A[i] ; 
	}
	cout << "The sum of elements of the given array = " << sum ; 
	return 0 ;
}
