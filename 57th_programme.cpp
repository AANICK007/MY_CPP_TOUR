// This is a programme to find username from email id
#include<iostream>
#include<string>

using namespace std ;
int main() {
	string str ;
	
	cout << "Enter your e_mail id = " ;
	getline(cin,str) ;
	
	int i = (int) str.find('@') ;
	string usr_nme = str.substr(0 , i) ;
	cout << "Your user name is = " << usr_nme << endl ;
	
	return 0 ;
}
