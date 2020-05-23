// This is a programme to shoe various typres of proceess to declare and initialize string

#include<iostream>

using namespace std ;
int main() {
	char S[10] = "Hello" ;
	cout << S << endl ; 
	
	char A[] = "Hello" ;
	cout << A << endl ;
	
	char W[] = { 'H' , 'e' , 'l' , 'l' , 'o' } ;
	cout << W << endl ;
	
	char Q[] = { 'H' , 'e' , 'l' , 'l' , 'o' , '\0' } ;
	cout << Q << endl ;
	
	char T[] = { 72 , 101 , 108 , 108 , 111 , '\0' } ; 
	cout << T << endl ;
	
	char *E = "Hello" ;
	cout << *E << endl ;
	
	return 0 ;
}
