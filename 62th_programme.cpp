// This is a programme to add two numbers using function overloading
#include<iostream> 

using namespace std ;
int Add (int , int) ;
int Add (int , int , int) ;
float Add (float , float) ;

int main() {
	int a , b , c , d ;
	cout << "Enter the first number = " ;
	cin >> a ;
	cout << "Enter the second number = " ;
	cin >> b ;
	
	c = Add(a,b) ;
	cout << "\nThe sum of both numbers = " << c << endl ;
	
	d = Add (a,b,c) ;
	cout << "The further sum = " << d << endl ;
	
	float i , j , k ;
	cout << "\nEnter a float number = " ;
	cin >> i ;
	cout << "Enter next float number = " ;
	cin >> j ;
	k = Add(i,j) ;
	cout << "The sum of the float values = " << k << endl ;
	
	return 0 ;
}

int Add(int x ,int y ) {
	return(x + y) ;
}

int Add(int x , int y , int z) {
	return(x + y + z) ;
}

float Add(float x , float y ) {
	return(x + y) ;
}


