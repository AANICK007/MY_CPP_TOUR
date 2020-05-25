// This is a programme for print numbers in reverse using recurrsion
# include<iostream>
using namespace std;
    
/*program for recursive function

*/
void fun(int n)
{
	if(n>0)
	{
	       	cout<<n <<endl;
		fun(n-1);
	}
}
int main()
{
	int x = 5;
	fun(x);
}
