// This is a programme for Linear Search using functions
#include<iostream>

using namespace std;

int Search(int A[] , int size , int key)
{
 	for(int i = 0; i < size ; i++)
 		if( key == A[i] )
			 return i;
	return size+1 ;
}

int main()
{
 	int A[] = { 2 , 4 , 5 , 7 , 10 , 9 , 13 };
 	int k;
	cout << " Enter an Element to be Searched = " ;
 	cin >> k;
	int index = Search(A,7,k);
	if ( index < 6 )
 		cout << "Element found at index = " << index << endl ;
 	else {
 		cout << "Element not found " << endl ;
	 }
	return 0 ;
}
