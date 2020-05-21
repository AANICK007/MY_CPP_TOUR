#include<iostream>

using namespace std ;
typedef int marks ;
int main() {
	float m1 , m2 , m3 , avg ;
	cout << " THIS PROGRAMME IS A PASS FAIL DETECTOR " << endl ;
	cout << "Enter your marks in mathematics = " ;
	cin >> m1 ;
	cout << "Enter your marks in english = " ;
	cin >> m2 ;
	cout << "Enter your marks in computers = " ;
	cin >> m3 ;
	avg = (float) (m1 + m2 + m3) / 3 ;
	if ( avg > 0 ) {
		if ( avg > 0 && avg < 33 ) {
			cout << "Hey men !! you are fail " ;
		}
		if ( avg >= 33 && avg < 45 ) {
			cout << "Hey there !! you just passed and got third division " ;
		}
		if ( avg >= 45 && avg < 60 ) {
			cout << "Hey there !! you passed the exams with second division " ;
		}
		if ( avg >= 60 && avg < 80 ) {
			cout << "Helllooo !! you cleared the exams with first division " ;
		}
		if ( avg >= 80 && avg <100 ) {
			cout << "Helllooo !! you are a good student with more than 80 percent marks " ;
		}
		if ( avg == 100 ) {
			cout << "Congrats you are the topper of the class " ;
		}
		if ( avg > 100 ) {
			cout << "Hey you !! this is not a right moment to joke " ;
		}
	}
	else {
		cout << "Surely you are not meant to study any more " ;
	}
	return 0 ;
}
