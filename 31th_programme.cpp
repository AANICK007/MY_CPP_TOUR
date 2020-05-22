// This is a programme to find the LCM of two numbers
#include<iostream>

using namespace std ;
int main() {
	int A , B , i ;
	cout << "Enter the first number = " ;
	cin >> A ;
	cout << "Enter the second number = " ;
	cin >> B ;
	for ( i = A>B ? A : B ; i <= A*B ; i++ ) {
		if ( i%A == 0 && i%B == 0 ) {
			break ;
		}
	}
	cout << "The LCM of given two numbers is = " << i ;
	return 0 ;
}
