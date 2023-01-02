#include <iostream>
using namespace std;
int main()
{
     int a[20],n,temp,j;
    cout << "enter how many elements ";
    cin >>n;
     cout << "enter elements into the arrary ";
    for(int i=0;i<n;i++)
    {
     
      cin >>a[i];
    }
    for(int i=0,j=n-1;i<j;i++,j--)
    {
      if(i!=j)
      {
        temp=a[j];  
        a[j]=a[i];
        a[i]=temp;
      }
    }
    for(int i=0;i<n;i++)
    {
     
      cout <<"\n"<< a[i];
    }
}