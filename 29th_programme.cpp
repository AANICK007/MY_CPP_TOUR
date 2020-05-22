// This is a programme to check if a number is palindrome or not
#include<iostream>

using namespace std ;
int main() {
	int N , n , rev=0 , rem , i ;
	cout << "Enter a number = " ;
	cin >> N ;
	n = N ;
	for ( i = 1 ; n != 0 ; i++ ) {
		rem = n%10 ;
		rev = rev*10 + rem ;
		n = n/10 ;
	}
	cout<< "The reverse of the given number is = " << rev << endl ;
	if ( rev == N ) {
		cout << "The given number is a palindrome number" ;
	}
	else {
		cout << "This is not a palindrome number " ;
	}
 	return 0 ;
}
