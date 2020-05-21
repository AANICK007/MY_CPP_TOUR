// This is a programme to convert fahrenheit temperature in celcius tempertature
#include<iostream>

using namespace std ;
int main(){
	float C , F ;
	cout << "Enter the temperature in degree fahrenheit = " ;
	cin >> F ;
	C = (float) 5/9*(F-32) ;
	cout << "The required temperature in degree celcius is = " << C << endl ;
	return 0 ;
}
