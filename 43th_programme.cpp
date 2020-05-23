// This programme shows the concept of refrence in C++ ( there is no reference concept in other languages)
// Referencinng means giving a nickname name to the same variable


#include<iostream>

using namespace std ;
int main() {
	int x = 10 ;
	int &y = x ;   // refrences are initialized at that time only
	
	cout << x << endl ;
	cout << y << endl ;
	
	cout << &x << endl ;
	cout << &y << endl ;
	
	x++ ;
	y++ ;
	
	cout << x << endl ;
	cout << y << endl ;
	
	return 0 ;
}
