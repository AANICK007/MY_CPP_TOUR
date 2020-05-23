// This is a programme to read and write string
#include<iostream>

using namespace std ;
int main() {
	char S[20] ;
	cout << "Enter your name = " ;
	cin.getline(S , 20 ) ;
	cout << "Welcome " << S << endl ;
	
	char A[20] ;
	cout << "Enter your name again = " ;
	cin.getline(A , 20) ;
	cout << "Welcome " << A << endl ;
	
	return 0 ;
}
