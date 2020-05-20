// This is a programme to calculate simple interest
#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
	int P , R , T ;
	float S_I ;
	cout << " Enter the value of principle money = " ;
	cin >> P ;
	cout << " \nEnter the rate of interest = " ;
	cin >> R ;
	cout << " \nEnter the time of loan borrowed = " ;
	cin >> T ;
	S_I = (float)(P*R*T)/100 ;
	cout << "\nThe total value of interest is = " << S_I ;
	return 0 ;
}
