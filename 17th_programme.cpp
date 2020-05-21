// This is a programme to check thr stage of your human life
#include<iostream>

using namespace std ;
int main() {
	float age ;
	cout << " May I know your age = " ;
	cin >> age ;
	if ( age > 0 ) {
		if ( age > 0 && age <=1 ) {
			cout << "Hey baby!! you are an infant " ;
		}
		if ( age > 1 && age <= 4 ) {
			cout << "Hello dear !! you are a toddler " ;
		}
		if ( age > 4 && age <= 8 ) {
			cout << "Hello dear !! you are a child " ;
		}
		if ( age > 8 && age <= 13 ) {
			cout << "Hello dear !! this is puberty age " ;
		}
		if ( age > 13 && age <= 18 ) {
			cout << "Hello guy !! you are an older adolscent" ;
		}
		if ( age > 18 && age <= 30 ) { 
			cout << "Hii !! you are an adult " ;
		}
		if ( age > 30 && age <= 50 ) {
			cout << "Hii !! you are of middle age " ;
		}
		if ( age > 50 && age <= 100 ) {
			cout << "Hello !! you are an older citizen now " ;
		}
		if ( age > 100 ) {
			cout << "Hii !! you have amazing lead a wonderful life ,, may you live the longest " ;
		}
	}
	else {
		cout << "Invalid age " ;
	}
	return 0 ;
}
