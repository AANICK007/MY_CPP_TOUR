// This is a programme to count vowels , words and consonants in a string
#include<iostream>
#include<string>

using namespace std ;
int main() {
	string str;
	int vowel=0 , space=0 , conso=0 ;
	
	cout << "Enter a string = " ;
	getline(cin,str) ;
	
	for ( int i = 0 ; str[i] != '\0' ; i++  ) {
		if ( str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' ||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ) {
			vowel++ ;
		}
		else {
			if ( str[i] == ' ' ) {
				space++ ;
			}
			else {
				conso++ ;
			}
		}
	}
	
	cout << "\nVowels in the string = " << vowel << endl ;
	cout << "Consonants in the string = " << conso << endl ;
	cout << "Words in the string = " << space+1 << endl ;
	
	return 0 ;
}
