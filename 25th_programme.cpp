// this is a programme to check if a number is a prfect number or not
#include<iostream>

using namespace std ;
int main() {
	int N , i , sum=0 ;
	cout << "Enter a number = " ;
	cin >> N ;
	for ( i = 1 ; i <= N ; i++ ) {
		if( N%i == 0 ) {
			sum = sum + i ;
		}
	}
	if ( sum == 2*N ) {
		cout << "Boom !! you have entered a perfect number " ;
	}
	else {
		cout << "Sorry it is not a perfect number " ;
	}
	return 0 ;
}
