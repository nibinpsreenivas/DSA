#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i,k,count=0;
    
    string s;
    cout<<"Enter the strng";
    cin>>s;
    int l1=s.length();
    char ch1[l1+1],ch[l1+1];
    strcpy(ch,s.c_str());
   
    
    for(i=0;ch[i]!='\0';i++)
    {
        if(i==0)
        {
            ch1[count]=ch[i];
            count=count+1;

        }
        else
        {
           if(ch[i-1]!=ch[i])
           {
            ch1[count]=ch[i];
            count=count+1;
           }
        }
          
    }
    ch1[count]='\0';

    for(int k=0;ch1[k]!='\0';k++)
    {
        cout<<ch1[k];
    }
    return 0;
}