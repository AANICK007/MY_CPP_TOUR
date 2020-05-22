// This is a programme to ffind sum of first natural numbers
#include<iostream> 

using namespace std ;
int main() {
	int n , i , sum=0 ;
	cout << "Enter a natural number = " ;
	cin >> n ;
	for ( i = 1 ; i <= n ; i++ ) {
		sum = sum + i ;
	}
	cout << "The sum of all the natural number till given number is = " << sum ;
 	return 0 ;
}
