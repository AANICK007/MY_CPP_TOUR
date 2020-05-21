// This is a programme 
#include<iostream>

using namespace std ;
int main(){
	int B , P_A , P_D , N_S ;
	cout << "Please enter your basic salary = " ;
	cin >> B ;
	cout << "May I know your monthly percentage of allowance = " ;
	cin >> P_A ;
	cout << "Can you tell about the percentage of salary deduction per month = " ;
	cin >> P_D ;
	N_S = B + B*P_A / 100 + B*P_D / 100 ;
	cout << "Hey men !!! your net salary is =  " << N_S <<endl ;
	return 0 ;
}

