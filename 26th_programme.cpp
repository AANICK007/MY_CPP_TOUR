// This is a programme to check if a number is prime number or not
#include<iostream> 

using namespace std ;
int main() {
	int N , i ;
	cout << "Enter a natural number = " ;
	cin >> N ;
	for ( i = 2 ; i <= N-1 ; i++ ) {
		if ( N%i == 0 ) {
			break ;
		}
	}
	if ( i == N ) {
		cout << "Yes this is a prime number" ;
	}
	else {
		cout << "Nay  its not a prime number" ;
	}
	return 0 ;
}
