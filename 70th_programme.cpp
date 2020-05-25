// This is a programme to show that :::::::::-------
// When a fuction return reference then ,,,,,,, 
// Then the functions acts similar to the reference of the actual parameter ..........|||||||

#include<iostream>

using namespace std ;
int & fun( int & ) ;

int main() {
	int x ;
	cout << "Enter a number = " ;
	cin >> x ;
	cout << "Value = " << x << endl ;
	fun(x) = 25 ; // here function works same as reference of variable
	cout << "Now , value = " << x << endl ;
	return 0 ;
}

int & fun(int &a) {
	return a ;
}
