#include<iostream>
using namespace std;
int main()
{

int i,j,k[5][5];
for(i=1;i<=5;i++)
{
    for(j=1;j<=5;j++)
    {
        cin>> k[i][j];
    }
}
for(i=1;i<=5;i++)
{
    for(j=1;j<=5;j++)
    {
        if(k[i][j]==1)
        {
            cout<< "hi";
        }
    }
}











    return 0;
}


