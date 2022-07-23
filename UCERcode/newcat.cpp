#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b)      for(int i=a;i<b;i++)


int stockbuysell(int arr[], int n) {
  int maxPro = 0;
  
  int minPrice = INT_MAX;
  for (int i = 0; i < n; i++) {
    minPrice = min(minPrice, arr[i]);
    maxPro = max(maxPro, arr[i] - minPrice);
  }
  return maxPro;
}

int main() {
  int t;
  cin>>t;

  int arr[t];
  rep(i,0,t)
  {
    cin>>arr[t];
  }

  int max=stockbuysell(arr, t);
  cout<<max;
}