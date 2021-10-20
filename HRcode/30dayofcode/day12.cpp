#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
int map[6][6], max=-64;

for(int i=0; i<6; i++)
{
    for (int j=0; j<6; j++)
    {
       cin>>map[i][j];
    }
    cout<<"\n";

}


cout<<"\n";
int sum=0;


for(int i=0; i<4; i++)
{
    for (int j=0; j<4; j++)
    {    sum=map[i+1][j+1];
    for (int k = 0; k < 3; ++k)
    {
        sum=sum+map[i][j+k]+map[i+2][j+k];
    }
    if (sum>max)
    {
        max=sum;
    }
}
}
cout<<max<<endl;
return 0;
}
