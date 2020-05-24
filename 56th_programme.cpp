// This is a programme to check if a string is palindrome or not
#include<iostream>
#include<string>

using namespace std ;
int main() {
	string str ;
	string rev = "" ;
	
	cout << "Enter a string = " ;
	getline(cin,str) ;
	
	int len = (int) str.length() ;
	rev.resize(len) ;
	
	for( int i = 0 , j = len-1 ; i < len ; i++ , j-- ) {
		rev[i] = str[j] ;
	}
	rev[len] = '\0' ;
	
	cout << rev << endl ;
	
	if ( str.compare(rev) == 0 ) {
		cout << "\nYes string is palindrome " ;
	}
	else {
		cout << "\nNo not a palindrome " ;
	}
	
	return 0 ;
}
