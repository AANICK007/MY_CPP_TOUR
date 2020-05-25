// This is a programme to add numbers using default argumemts
#include<iostream> 

using namespace std ;

int Add(int x ,int y ,int z=0 ) {
	return ( x + y + z ) ;
}

int main() {
	int a , b , c , add1 , add2 ;
	cout << "Enter first number (a) = " ;
	cin >> a ;
	cout << "Enter second number (b) = " ;
	cin >> b ;
	cout << "Enter third number (c) = " ;
	cin >> c ;
	 
	add1 = Add(a,b) ;
	cout << "\nThe sum of 'a' and 'b' = " << add1 << endl ;
	
	add2 = Add(a,b,c) ;
	cout << "The sum of 'a' , 'b' and 'c' = " << add2 << endl ;
	
	return 0 ;
} 
