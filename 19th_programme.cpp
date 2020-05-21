// This programme is a discount calculator in super market
#include<iostream>

using namespace std ;
int main() {
	float Amount , K , L , M ;
	cout << "Please enter the amount of the items you have taken = " ;
	cin >> Amount ;
	K = (float) Amount - (Amount*0.5) ;
	L = (float) Amount - (Amount*0.2) ;
	M = (float) Amount - (Amount*0.1) ;
	if ( Amount >= 0 ) {
		if ( Amount >= 0 && Amount < 2000 ) {
			cout << "Hello !! you got a discount of 10% on your purchase and now you have to pay $  " << M ;
		}
		if ( Amount >= 2000 && Amount < 5000 ) {
			cout << "Hello !! you got a discount of 20% on your purchase and now you have to pay $  " << L ;
		}
		if ( Amount >= 5000 ) {
			cout << "Hello !! you got a discount of 50% on your purchase and now you have to pay $  " << K ;
		}
	}
	else {
		cout << "Please stop kidding as you haven't paid and want everything " ; 
	}
	return 0 ;
}
