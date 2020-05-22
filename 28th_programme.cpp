// This is a programme to find sum of digits of a given number
#include<iostream>

using namespace std ;
int main() {
	int n , i , sum = 0 , k  ;
	cout << "Enter a number = " ;
	cin >> n ;
	for ( i = 1 ; n != 0 ; i++ ) {
		k = n%10 ;
		sum += k ;
		n = n/10 ;
	}
	cout << "The sum of digits of the given number is = " << sum ;
	return 0 ;
}
