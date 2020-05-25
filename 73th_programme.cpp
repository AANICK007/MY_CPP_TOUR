// This is a programme to study the concept of static variables
// Static variable has a power that it is created in the code memory in the prograammme and remains till end
#include<iostream>

using namespace std ;
void fun() {
	static int v = 0 ;
	int a = 5 ; 
	v++ ;
	a++ ;
	cout << "Value of 'v' = " << v << " , " << "Value of 'a' = " << a << endl ;
}

int main() {
	fun() ;
	fun() ;
	fun() ;
	return 0 ;
}
