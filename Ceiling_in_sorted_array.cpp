#include <iostream>
using namespace std;
void input(int n,int arr[])
{
   cout <<"enter" <<n <<" the elemnts into array";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void select_sort(int n,int arr[])
{
    int lar=0;
    int i,index;
    for(i=0;i<n-1;i++)
    {
       lar=arr[i];
       index=i;
        for(int j=i+1;j<n;j++)
        {
          if(lar>arr[j])
          {
            lar=arr[j];
            index=j;
          }
        }
        if(index!=i)
        {
            swap(&arr[index],&arr[i]);
        }
    }
}
void display(int n,int arr[])
{
    for(int i=0;i<n;i++)
   {
    cout<<"\t"<<arr[i];
   }
}
int main()
{
    int n;
    int ceiling;
    cout <<"\nenter the how many elemnts in a array ";
    cin >>n;
    int arr[n];
    input(n,arr);
    select_sort(n,arr);
     cout <<"\nelemet in sorted order are:";
     display(n,arr);
     cout <<"\nenter the value to find the ceiling of it";
     cin>>ceiling;
     int small;
     if(ceiling>arr[n-1])
     {
        cout<<"\nceil doesn't exist in array";
     }
     else
     {
         for(int i=0;i<n;i++)
         {
           if(ceiling==arr[i] || ceiling <arr[i])
           {
               small=arr[i];
                
               break;
           }
            
           }
          cout<<"the ceiling of"<<ceiling<<" is "<<small; 
         }
         return 0;
}