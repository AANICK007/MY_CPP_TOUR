// This is a programme to find roots of a given quadratic equation
#include<iostream>
#include<cmath>

using namespace std ;

int main()
{ 
	int A , B , C , D ;
	float R , Q ;
	cout << "The expression should be taken as  Ax^2 + Bx + C = 0 " ;
	cout << "\nEnter the value of A = " ;
	cin >> A ;
	cout << "\nEnter the value of B = " ;
	cin >> B ;
	cout << "\nEnter the value of C = " ;
	cin >> C ;
	D = B*B - 4*A*C ;
	R = (float)(-B + sqrt(D))/(2*A) ;
	Q = (float)(-B - sqrt(D))/(2*A) ;
	if ( D >= 0 )
	{
		cout << "\nAs the value of determinant is greater than or equal to zero i.e., " << D ;
		cout << "\nThe first root is = " << R ;
		cout << "\nThe second root is = " << Q ;
	}
	else
	{
		cout << "\nAs the value of determinant is less than zero i.e., " << D ;
		cout << "\nThere are no root for the given equation " ;
	}
	return 0 ;
}
