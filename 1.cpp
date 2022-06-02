//simple number pattern printing problems
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int n,i=1,j,count=1;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n&&count<=9)
        {
            cout<<" "<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}