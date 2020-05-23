// This is a programme to stuudy the importance of heap memory allocation

/*

#include<iostream>

using namespace std ;
int main() {
	
	here we take an array according to user's requirement 
	
	int size ;
	cout << "Enter the number of elements = " ;
	cin >> size ;  // reading of size
	
	int A[size] ;  //  declaring array of user's choice
	
	cout << sizeof A << endl ;
	
	// now if we wanna take size = 35 then ,
	
	size = 35 ;
	
	// but now no option to redeclare the array 'A[]'

	// Therfore we dynamiclly allocate an array in the heap 
	// so as to avoid the disturbance of the user's choice or mind 
	
} 

*/


#include<iostream> 

using namespace std ;
int main() {
	int *p = new int [20] ;
	p[19] = 56 ;
	cout << p[19] << endl  ;
	
	// deleting the memory in the pointer
	
	delete []p ;
	p = NULL ;
	
	//  till here we can access only 20 places in the heap 
	
	p = new int [40] ;
	p[39] = 23 ;
	cout << p[39] << endl ;
	
	// but now can access 40 places in the programme 
	return 0 ;
}
