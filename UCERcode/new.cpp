#include <iostream>
using namespace std;

int main()
{
    int n=5;
   
    char temp = 'A';

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
            if (j == i)
            {
                 temp = ch;
            }
        }
        
        int start = i - 1;
        temp-=2;
        for (int j = start; j >=1 ; j--)
        {
            cout << temp << " ";
            temp--;

        }
        cout << endl;
    }
    return 0;
}