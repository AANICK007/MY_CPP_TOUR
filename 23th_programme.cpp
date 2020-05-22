// This is a programme to print the multiplication table of a given number
#include<iostream>

using namespace std ;
int main() {
	int N , i , K ;
	cout << "Enter a number = " ;
	cin >> N ;
	cout << "The multiplication table of the given number is = " ;
	for ( i =1 ;  i <=10 ; i++ ) {
		K = N*i ;
		cout << K << endl ; 
	} 
	return 0 ;
}
