#include<iostream>
using namespace std;
int main()
{
    int n,sum=0, temp,r;
    cout<<"enter the number";
    cin>>n;
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
        
        
    }
    if (sum==temp)
        cout<<" this is palindrome";
    else
        cout<<" this is not palindrome";
    return 0;
}

