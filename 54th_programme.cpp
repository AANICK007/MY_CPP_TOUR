// This is a programme to find the length of string without string class functions
#include<iostream>
#include<string>

using namespace std ; 
int main() {
	string str ; 
	string::iterator it ;
	int count=0 , couunt=0 ;
	
	cout << "Enter a string  = " ;
	getline(cin,str) ;
	
	// to find the length we have to check all the characters untill null character
	for ( int i = 0 ; str[i] != '\0' ; i++ ) {
		count++ ;
 	}
 	cout << "Length of string is = " << count << endl ;
 	
 	// second method to find length 
 	for ( it = str.begin() ; it != str.end() ; it++ ) {
 		couunt++ ;
	}
	cout << "Length of string using second method = " << couunt << endl ;	
	
	return 0 ;
}
