// This is a programme to study the basics of pointers
#include<iostream>

using namespace std ;
int main() {
	int a ;
	int *p ;
	a = 10 ;
	p = &a ;
	
	cout << a << endl ;  // This print the value stored in 'a' 
	cout << &a << endl ; // This print the address of variable 'a' in the programme memory
	cout << p << endl ;  // This prints the value of pointer 'p'    i.e., address of variable 'a' 
	cout << &p << endl ; // This prints the address of pointer variable 'p' in the programme memory
	cout << *p << endl ; // This prints the value of variable 'a' to which 'p' is a pointer
	
	return 0 ;
}
