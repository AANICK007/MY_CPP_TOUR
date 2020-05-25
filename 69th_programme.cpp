// This is a programme to show function can also return address
#include<iostream>

using namespace std ;
int * fun(int size){
	int *p = new int[size] ;
	for ( int i = 0 ; i < size ; i++ ) {
		p[i] = 5*i ;
	}
	return p ;
}

int main() {
	int *q = fun(5) ;
	for ( int i = 0 ; i < 5 ; i++ ) {
		cout << q[i] << " " ;
	}
	return 0 ;
}
