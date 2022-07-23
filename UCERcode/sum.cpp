#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n=127;
	int i=0,s=0;
	int sample(int n);
	{
	while(n>0)
	{
		int r=n%10;
		int p=8^i;
		s=s+p*r;
		i=i+1;
		n=n/10;
	}
	cout<<s;}

	return 0;
}