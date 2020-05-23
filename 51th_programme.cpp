#include<iostream>
#include<string>

using namespace std ;
int main() {
	string str , ctr , gtr , jtr , ltr ; 
	cout << "Enter a string 'name' = " ;
	getline(cin,str) ;
	
	// function to add new content to a string     s.append( <string> )
	str.append(" Super") ;
	cout << str << endl ; 
	
	// function to insert a given string at a given index    s.insert( <index> , <string> )
	str.insert( 3 , " okk " ) ;
	cout << str << endl ;
	
	// function to replace paricular size of string from a particular index by a given string    s.replace( <index> , <size> , <string> )
	cout << "\nEnter new string = " ;
	getline(cin,ctr) ;
	cout << ctr << endl ;
	ctr.replace( 3 , 2 , "hmm" ) ;
	cout << ctr << endl ;
	
	// function to add a single character at the end of the string   s.push_back( <char> )
	cout << "\nEnter a new string = " ;
	getline(cin,gtr) ;
	cout << gtr << endl ;
	gtr.push_back('w') ;
	cout << gtr << endl ;
	
	// function to swap between two strings
	cout << "\nEnter string 1 = " ;
	getline(cin,jtr) ;
	cout << "Enter string 2 = "	;
	getline(cin,ltr) ;
	
	cout << "First string = " << jtr << endl ;
	cout << "Second string = " << ltr << endl ;
	
	jtr.swap(ltr) ;
	cout << "Now first string = " << jtr << endl ;
	cout << "Now second string = " << ltr << endl ;
	
	return 0 ;
}
