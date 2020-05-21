// This is a programme to find the fACTORIAL of a given number
#include<iostream>

using namespace std ;
int main(){
	int N , F=1 , i ;
	cout << "Enter any natural number = " ;
	cin >> N ;
	for ( i=1 ; i<=N ; i++ ){
		F *= i ;
	}
	cout << "The value of factorial of the given number is =  " << F ;
}
