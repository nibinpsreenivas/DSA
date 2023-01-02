#include <iostream>
#include <cstring>
using namespace std;
void check_pal(char new_array[],int n)
{
    
    int set=1;
    char rev[n];
  for(int i =0,j=n-1;i<n;i++,j--)
  {
    rev[i]=new_array[j];
  }
  rev[n]='\0';
  cout<<"\n";
   for(int i=0;rev[i]!='\0';i++)
    {
        cout <<rev[i];
       
    }
  for(int i =0;i<n;i++)
  {
    if(rev[i]!=new_array[i])
    {
       set=0;
    }
  }
  if(set==1)
  {
    cout<<"string is a palindrome";
  }
  else
   {
    cout<<"string is not a palindrome";
  }

  
}
int main()
{
    string s;
    cout<<"enter the string";
    getline(cin,s);
    int n = s.length();
    char char_array[n + 1];
    strcpy(char_array, s.c_str());
    char new_array[n+1];
    int j=0;
    for(int i=0;i<n;i++)
    { 
        int a=char_array[i];
        if(a>=97 &&a<=122 || a>=65 && a<=90)
        {
          if( a>=65 && a<=90)
          {
              new_array[j]= (char)tolower(char_array[i]);           
          }
          else{
           new_array[j]=char_array[i];
          }
           j=j+1;     
        }
    }
     new_array[j]='\0';
     int count =0;
    for(int i=0;new_array[i]!='\0';i++)
    {
        cout <<new_array[i];
        count = count+1;
    }

    check_pal(new_array,count);
    return 0;

}