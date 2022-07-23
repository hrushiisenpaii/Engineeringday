//Day 18: Queues and Stacks

#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll              long long
#define nl              "\n"
#define rep(i,a,b)      for(int i=a;i<b;i++)

class Solution {
    //Write your code here
    public:
    char c;
    stack<char>st;
    queue<char>qu;
    void pushCharacter(char ch)
    {
        st.push(ch);
    }
    void enqueueCharacter(char ch)
    {
        qu.push(ch);
    }
    char popCharacter()
    {
        c=st.top();
        st.pop();
        return c;
    }
    char dequeueCharacter()
    {
        c=qu.front();
        qu.pop();
        return c;
        
    }
     
};

int main(int argc, char const *argv[])
{   
	string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    

return 0;
}