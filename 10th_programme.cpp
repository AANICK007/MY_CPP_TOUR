// This is a programme to convert celcius temperature in fahrenhrit tempertature
#include<iostream>

using namespace std ;
int main(){
	float C , F ;
	cout << "Enter the temperature in degree celcius = " ;
	cin >> C ;
	F = (float) 9/5*(C) + 32 ;
	cout << "The required temperature in degree fahrenheit is = " << F << endl ;
	return 0 ;
}
