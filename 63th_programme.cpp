// This is a programme to find minimum of given values using function overloading
#include<iostream> 

using namespace std ;
int Min(int,int) ;
int Min(int,int,int) ;
float Min(float,float) ;

int main() {
	int a , b , c , m1 , m2 ;
	cout << "Enter first number (a) = " ;
	cin >> a ;
	cout << "Enter second number (b) = " ;
	cin >> b ;
	
	m1 = Min(a,b) ;
	cout << "Minimum of both number (a & b ) = " << m1 << endl ;
	
	cout << "\nEnter third number (c) = " ;
	cin >> c ;
	
	m2 = Min(a,b,c) ;
	cout << "Minimum of three numbers (a , b & c) = " << m2 << endl ;
	
	float i , j , m3 ;
	cout << "\nEnter a float value = " ;
	cin >> i ;
	cout << "Enter next float value = " ;
	cin >> j ;
	m3 = Min(i,j) ;
	cout << "The minimum float value betwwen these two values = " << m3 ;
	
	return 0 ;
}

int Min(int x , int y) {
	return( x < y ? x : y ) ;
}

int Min(int x ,int y , int z) {
	return ( ( x < y ) ? ( x < z ? x : z ) : ( y < z ? y : z ) ) ;
}

float Min(float x ,float y) {
	return ( x < y ? x : y ) ;
}






