//Day 21: Generics

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)

template<typename hrushii>
void printArray(vector<hrushii>a)
{
    for ( int i=0;i<a.size() ;i++ ) 
    {
        cout<<a[i]<<endl;
     }
}
   

int main(int argc, char const *argv[])
{   
	int n;
	
	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		int_vector[i] = value;
	}
	
	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<string>(string_vector);

return 0;
}