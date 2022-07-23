//Day 20: Sorting

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)


int main(int argc, char const *argv[])
{   
	 int n,numberOfSwaps=0;
    cin >> n;
    int a[5000000];
    for(int i = 0;i < n; i++){
    	cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
    
    for (int j = 0; j < n - 1; j++) {
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }
    if (numberOfSwaps == 0) {
        break;
    }
    }
    cout<<"Array is sorted in "<< numberOfSwaps <<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1];
    

return 0;
}