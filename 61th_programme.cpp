// This is a programme to solve b power of a using functions
#include<iostream>

using namespace std ;
int Power( int , int ) ;

int main() {
	int a , b , P ;
	cout << "Enter the number (a) = " ;
	cin >> a ;
	cout << "Enter the power (b) = " ;
	cin >> b ;
	
	P = Power(a,b) ;
	cout << "The value of 'b' power of 'a' = " << P ;
	
	return 0 ;
	
}

int Power ( int x , int y ) {
	int mult = 1 , i ;
	for ( i = 1 ; i <= y ; i++ ) {
		mult *= x ;
	}
	return mult ;
}
