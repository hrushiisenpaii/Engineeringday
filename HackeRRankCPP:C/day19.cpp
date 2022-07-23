//Day 19: Interfaces

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
         int sum;
        for (int i=1; i<=n; i++) 
        {
        if(n%i==0)
        {
            sum+=i;
        }
        }
        
        return sum;
    }
};

int main(int argc, char const *argv[])
{   
	int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    
    return 0;
}