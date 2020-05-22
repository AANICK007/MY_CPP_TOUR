// This is a programme to check if a number is an armstrong number or not
#include<iostream>

using namespace std ;
int main() {
	int N , i , sum = 0 , k , u ;
	cout << "Enter a natural number = " ;
	cin >> N ;
	k = N ;
	for ( i = 1 ; k != 0 ; i++ ) {
		u = k % 10 ;
		sum += u*u*u ;
		k = k/10 ;
	}
	if ( sum == N ) {
		cout << "Boom !! you have entered an armstrong number " ;
	}
	else {
		cout << "Sorry !! its not an armstrong number " ;
	}
	return 0 ;
}
