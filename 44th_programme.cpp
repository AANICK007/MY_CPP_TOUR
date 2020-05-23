// This programme shows the use of function pointers

#include<iostream>

using namespace std ;

void max(int x , int y ) {
	int k ;
	k = x>y ? x : y ;
	cout << " " << k << endl ;
}

void min(int x , int y ) {
	int k ;
	k = x<y ? x : y ;
	cout << " " << k << endl ;
}

int main() {
	void (*fp)(int,int) ;
 
	fp = max ;
	(*fp)(10,5) ;
	
	fp = min ;
	(*fp)(10,5) ; 
	
	return 0 ;
}
