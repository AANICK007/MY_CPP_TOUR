// This programme shows the scopes of values of a variable
#include<iostream>

using namespace std ;

int x = 10 ;

int main() {
	cout << "Value of x = " << x << endl ;
	
	int x = 20 ; // the value x=10 not be accessed now onwards
	
	{
		int x = 30 ; // this value of x can be accessed in this block only
		cout << "Value of x here = " << x << endl ;
	}
	
	cout << "Value of x again = " << x << endl ; // this value is forever accessible untill changed
	
	return 0 ;
}
