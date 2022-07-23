//Day 14: Scope

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
      Difference(vector<int>v)
      {
          elements=v;
      }
    void computeDifference()
    {
        maximumDifference=0;
        for(int i;i<elements.size();i++)
        {
            for(int j=i+1;j<elements.size();j++)
            {
                if(abs(elements[i]-elements[j])>maximumDifference)
            {
                maximumDifference=abs(elements[i]-elements[j]);
            }
            }
        }
    }
	
}; 

int main(int argc, char const *argv[])
{   
	int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;

return 0;
}