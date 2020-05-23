// This is a programme to study string class functions
#include<iostream>
#include<string>

using namespace std ;
int main() {
	string str ;
	int a ;
	
	cout << "Enter a string = " ;
	getline( cin , str ) ;
	
	// function to find length of string     s.length()
	cout << "\nLength of string = " << str.length() << endl ;
	
	// function to find the size of string  s.size()
	cout << "\nSize of string is = " << str.size() << endl ;
	
	// function to find the capacity of the string str   s.capacity()
	cout << "\nCapacity of string str = " << str.capacity() << endl ;
	
	// function to resize the capacity of string    s.resize(int)
	cout << "\nEnter the required capacity = " ;
	cin >> a ;
	str.resize(a) ;
	cout << "Current capacity of string = " << str.capacity() << endl ;
	
	// function to give the max possible size of string    s.max_size()
	cout << "\nThe max possible size of string is = " << str.max_size() << endl ;
	
	// function to clear a string     s.clear()
	str.clear() ;
	
	// function to check if a string is empty or not      s.empty()
	if ( str.empty() ) {
		cout << "\nString is empty" << endl ;
	}
	else {
		cout << "\nString isn't empty" << endl ;
	}
 	
	return 0 ;
}
