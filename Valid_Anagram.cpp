#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"enter the string 1";
    cin>>s1;
    cout<<"enter the string 2";
    cin>>s2;
    char s;
    int count=0;
    int l1 = s1.length();
    int l2 = s2.length();
    char ch1[l1+1];
    char ch2[l2+1];
    int sel;
    if(l1 == l2)
    { 
       int i,j;
       int c;
       strcpy(ch1,s1.c_str());
       strcpy(ch2,s2.c_str());
       
        for(i=0;ch1[i]!='\0';i++)
        {
            s=ch1[i];
            c=0;
            for( j=0;ch2[j]!='\0';j++)
            {
               if(s == ch2[j])
               {
                 if(c!=0)
                 {
                    continue;
                 }
                c=c+1;
                count++;
                
               }
            }
        }
    }
    else
    {
        cout<<"false";
    }
    
    if(count==l1)
     {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
     
   return 0;
}
