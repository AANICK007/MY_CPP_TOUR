// This is a programme to print the following pattern
/* 
    *
    ** 
    ***
    ****
    *****
*/  
#include<iostream>

using namespace std ;
int main() {
	for ( int i = 1 ; i <= 5 ; i++ ) {
		for ( int j = 1 ; j <= 5 ; j++ ) {
			if ( i >= j ){
				cout << "*" ;
			}
		}
		cout << "\n" ;
	}
	return 0 ;
}
