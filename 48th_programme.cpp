// This is a programme to study some other string functions
#include<iostream>
#include<cstring>

using namespace std ;
int main() {
	char str1[20] , str2[20] ;
	char str3[20] , str ;
	char str5[20] , str6[20] ;
	
	// function to find substring   strstr()
	cout << "Enter a string = " ;
	cin.getline(str1 , 20) ;
	cout << "Enter a substring to find = " ;
	cin.getline(str2, 20 ) ;
	if ( strstr(str1,str2 ) != 0 ) {
		cout << strstr(str1,str2) << endl ;
	}
	else {
		cout << "No string found" << endl ;
	}
	
	// function to compare string in dictionary order     strcmp()
	cout << "\nEnter string 1 = " ;
	cin.getline(str5 ,20) ;
	cout << "\nEnter string 2 = " ;
	cin.getline(str6 , 20) ;
	cout << strcmp(str5,str6) << endl ;
	
	// function to find a character in string       strchr()
	cout << "\nEnter a new string = " ;
	cin.getline(str3,20) ;
	cout << "Enter a character to find = " ;
	cin >> str ;
	if (strchr(str3,str) != 0 ) {
		cout << strchr(str3, str) << endl ; ;
	}
	else {
		cout << "No char found" << endl ;
	}
	 	
	return 0 ;
}
