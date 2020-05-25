// This is a programme to show that :::::::---------
// Call by reference mechanism can also modify actual parameters
// Call by reference is much similar to call by address
// References are nicknames given to variables
// When we use Call by reference the function br=ecomes inline function

#include<iostream> 

using namespace std ;

void swap(int &x , int &y) {
	int temp ; 
	temp = x ;
	x = y ;
	y = temp ;
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
