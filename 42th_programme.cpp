// This is a programme to show aritnmetic operations on pointers
// There are only 5 possible arithmetic operations on pointers
#include<iostream>

using namespace std ;
int main() {
	int A[5] = { 2 , 4 , 6 , 8 , 10 } ;
	int *p ;
	p = A ;
	
	cout << p << endl ;
	
	// first arithmetic operation     p++
	p++ ; 
	cout << p << endl ; // points to next integer value's address
	
	// second arithmetic operation    p--
	p-- ;
	cout << p << endl ; // points to the last integer's address
	
	// third arithmetic operation     p + i 
	p += 2 ;
	cout << p << endl ; // points to the second next integer's address
	
	// fourth arithmetic operation    p - i 
	p -= 2 ;
	cout << p << endl ; // points to the second last integer's value's address to the present one
	
	// fifth arithmetic operation     q - p   ------>>>>>>  means subtacting two pointers
	int *q = &A[3] ;
	cout << q - p << endl ; // gives the distance between two pointers
	  
	return 0 ;
}
