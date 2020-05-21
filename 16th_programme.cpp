// This is a programme to decide working or leisure hours
#include<iostream>

using namespace std ;
int main() {
	float H ; 
	cout << "Please enter the current hours = " ;
	cin >> H ;
	if ( H > 0 && H < 24 ){
		if ( H > 9 && H <18 ) {
		cout << "Hey there!!! this is working hour " ;
	}
	else {
		cout << "Hey!!! just relax these are leisure hours " ;
	}
	}
	else {
		cout << "Invalid hours " ;
	}
	return 0 ;
}
