// This is a programme of string iteration
#include<iostream>
#include<string>

using namespace std ;
int main() {
	string str , ctr ;
	string::iterator it ;
	string::reverse_iterator in ;
	
	cout << "Enter a string = " ;
	getline(cin,str) ;
	for( it = str.begin() ; it != str.end() ; it++ ) {
		cout << *it << endl ;
	}
	str.clear() ;
	
	// print lower case to upper case 
	cout << "\nEnter again in lower case = " ;
	getline(cin,str) ;
	for( it = str.begin() ; it != str.end() ; it++ ) { 
		*it = *it - 32 ;
		cout << *it << endl ;
	}
	
	cout << "Enter another string = " ;
	getline(cin,ctr) ;
	for ( in = ctr.rend() ; in != ctr.rbegin() ; in-- ) {
		cout << *in << endl ;
	}
	
	return 0 ;
}
