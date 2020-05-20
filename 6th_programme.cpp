// This is a programme to calculate distance travelled by a body
// Using initial velocty ,final velocity and acceleration
#include<iostream>
#include<cmath>

using namespace std ;

int main()
{ 
	int u , v , a ;
	float s ;
	cout << " Enter the value of initial velocity = " ;
	cin >> u ;
	cout << " \nEnter the value of final velocity = " ;
	cin >> v ;
	cout << " \nEnter the value of acceleration = " ;
	cin >> a ;
	s = (float)(v*v - u*u)/(2*a) ;
	cout << " \nThe coreesponding value of distance is = " << s ;
	return 0 ;
}
