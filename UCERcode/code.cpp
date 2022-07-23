#include<iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,size,p;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{   char s[101];
		cin>>s;
        cout<<"\n";
		if(strlen(s)<11)
		{cout<<s;}
		else
		{
			p=strlen(s)-1;		
		    size=strlen(s)-2;
	        cout<<s[0]<<size<<s[p]<<"\n";
        
        }
}
	return 0;
}