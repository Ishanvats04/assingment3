#include<iostream>
using namespace std;
int main()
{
float n1,n2,n3;
    cout<<"enter the three number:";
    cin>>n1>>n2>>n3;
    
    if( n1>=n2 && n1>=n3)
    {
        cout<<"the largest number is n1"<<n1;
    }

   if (n2>=n1 && n2>=n3)
   {
       cout<<"the largest number is n2"<<n2;
       
   }
    if(n3>=n1 && n3>=n2)
    {
        cout<<"the largest number is n3"<<n3;
        
    }
    return 0;
}
