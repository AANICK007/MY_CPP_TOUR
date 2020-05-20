// This is a programme to find sum of first N natural numbers
#include<iostream>
#include<cmath>

using namespace std ;

int main()
{ 
	int N , count ;
	cout << " THIS IS A PROGRAMME TO FIND THE SUM OF N NATURAL NUMBERS " ;
	cout << "\nEnter any natural number N = " ;
	cin >> N ;
	count = N*(N+1)/2 ;
	cout << " The sum of natural numbers till N =  " << count ;
	return 0 ;
}
