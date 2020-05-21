// This a programme to find the largest among three numbers
#include<iostream> 

using namespace std ;
int main() {
	int a , b , c ;
	cout << "Enter three numbers a , b and c respectively = " ; 
	cin >> a >> b >> c ;
	if  ( a > b ) {
		if ( a > c ) {
			cout << "a is the largest number " ;
		}
		else {
			cout << "c is the largest number " ;
		}
	}
	else {
		if ( b > c ) {
			cout << "b is the largest number " ;
		}
		else {
			cout << "c is the largest number " ;
		}	
	}
	return 0 ;
}
