// This is a programme to study string functions
#include<iostream>
#include<cstring>

using namespace std ;
int main() {
	char str1[20] , str2[20] , str3[20] , str4[20] , str5[20] ;
	cout << "Enter a string = " ;
	cin.getline(str1 , 20 ) ;
	
	cout << "Enter next string = " ;
	cin.getline(str2,20 ) ;
	
	// function to find length of string   strlen()
	cout << "Length of first string = " << strlen(str1) << endl ;
	cout << "Length of second string = " << strlen(str2) << endl ; 
	
	// function to concatinate two strings    strcat() 
	strcat (str1 , str2 ) ;
	cout << str1 << endl ;
	
	// fuction to copy a string into another string
	strcpy (str3 , str1 ) ;
	cout << str3 << endl ;
	
	// function to find a substring in a string      strstr()
	cout << "\nEnter a new string = " ;
	cin.getline(str4,20) ;
	
	cout << "\nEnter a substring to find = " ;
	cin.getline(str5,20) ;
	
	cout << strstr(str4,str5) << endl ;
	
	return 0 ;
}
