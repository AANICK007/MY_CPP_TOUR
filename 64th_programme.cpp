// This is a programme to find maximum of given numbers using function templates
#include<iostream> 

using namespace std ;

template<class T>
T Max ( T x , T y ) {
	return ( x > y ? x : y ) ;
}

int main() {
	int a , b , M1 ;
	cout << "Enter a number = " ;
	cin >> a ;
	cout << "Enter second number = " ;
	cin >> b ;
	
	M1 = Max(a,b) ;
	cout << "The maximum of both numbers = " << M1 << endl ;
	
	float i , j , M2 ;
	cout << "\nEnter a float value = " ;
	cin >> i ;
	cout << "Enter next float value = " ;
	cin >> j ;
	
	M2 = Max(i,j) ;
	cout << "The maximum of both values = " << M2 <<endl ;
	 
	return 0 ;
}


