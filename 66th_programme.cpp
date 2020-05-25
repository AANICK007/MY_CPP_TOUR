// This is a programme to show that ::::------
// Call by value cannot modify the actual parameters
// Call by value can only perform calculations on actual parameters
#include<iostream> 

using namespace std ;

void swap(int x , int y) {
	x = x+y ;
	y = x-y ;
	x = x-y ;
}

int main() {
	int a , b ;
	cout << "Enter first number = " ;
	cin >> a ;
	cout << "Enter second number = " ;
	cin >> b ;
	
	swap(a,b) ;
	cout << "First number = " << a << endl << "Second number = " << b << endl ;
	return 0 ;
}
