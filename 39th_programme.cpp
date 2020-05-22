// This is a programme to find multiplication of two given matrices
#include<iostream> 

using namespace std ;
int main() {
	int A[3][3] , B[3][3] , C[3][3] , sum ;
	cout << "Enter the elements of the first 3*3 matrix = " ;
	for ( int i = 0 ; i <=2 ; i++ ) {
		for ( int j = 0 ; j <=2 ; j++ ) {
			cin >> A[i][j] ;
		}
	}
	cout << "Enter the elements of the second 3*3 matrix = " ;
	for ( int i = 0 ; i <=2 ; i++ ) {
		for ( int j = 0 ; j <=2 ; j++ ) {
			cin >> B[i][j] ;
		}
	}
	for ( int i = 0 ; i <=2 ; i++ ) {
		for ( int j = 0 ; j <= 2 ; j++ ) {
			sum = 0 ;
			for ( int k = 0 ; k <=2 ; k++ ) {
				sum += A[i][k] * B[k][j] ;
			}
			C[i][j] = sum ;
		}
	}
	cout << "The multiplication of given two matrices is = \n" ;
	for ( int i = 0 ; i <=2 ; i++ ) {
		for ( int j = 0 ; j <=2 ; j++ ) {
			cout << C[i][j] << " " ;
		}
		cout << endl ;
	}
	return 0 ;
}
