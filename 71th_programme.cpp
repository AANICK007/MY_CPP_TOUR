// This is a programmme to show the difference between global and local variables
#include<iostream>

using namespace std ;

int g = 0 ; // 'g' is a global variable and can be used in any fuction in the programme

int fun () {
	int a = 14 ;  // 'a' is a local variable and can be used only in function fun()
	g += a ;
	cout << " The value of g = " << g << endl ;
}

int main() {
	g = 20 ;
	fun() ;
	g++ ;
	cout << "Now , the value of g = " << g << endl ;
	return 0 ;
}
