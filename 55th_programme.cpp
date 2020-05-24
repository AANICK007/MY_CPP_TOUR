// This is a programme to convert uppercase string into lowrcase string
#include<iostream>
#include<string>

using namespace std ; 
int main() {
	string str , ctr ;
	string::iterator it ;
	
	cout << "Enter a string in uppercase = " ;
	getline(cin,str) ;
	
	// first method
	for ( int i = 0 ; str[i] != 0 ; i++ ) {
		str[i] += 32 ;
	}
	cout << "String in lowercase = " << str << endl ;
	
	// second methood
	cout << "Enter again a string in uppercase = " ;
	getline(cin,ctr) ;
	cout << "Lowercase string = " ;
	for( it = ctr.begin() ; it != ctr.end() ; it++ ) {
		*it += 32 ;
		cout << *it ;
	}
	
	return 0 ;
}
