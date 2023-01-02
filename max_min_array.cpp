
#include <iostream>
using namespace std;
int main()
{
    int a[20],n,temp;
    cout << "enter how many elements ";
    cin >>n;
     cout << "enter elements into the arrary ";
    for(int i=0;i<n;i++)
    {
     5
      cin >>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
           if(a[j]>=a[j+1])
           {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;

           }
        }
    }
    cout << "smallest element in a arrary is "<<a[0];
    cout << "\nlargest element in a arrary is "<<a[n-1];
    return 0;
    

} 