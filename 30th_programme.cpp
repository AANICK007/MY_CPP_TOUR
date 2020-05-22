// This is a programme to find HCF of two numbers
#include<iostream>

using namespace std ;
int main() {
	int A , B , i ;
	cout << "Enter the first number = " ;
	cin >> A ;
	cout << "Enter the second number = " ;
	cin >> B ;
	for ( i = A>B ? B :A  ; i >= 1 ; i-- ) {
		if ( A%i == 0 && B%i == 0 ) {
			break ;
		}
	} 
	cout << "The HCF of given numbers is = " << i ;
	return 0 ;
}
