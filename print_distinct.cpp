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
        k=0;
         if(count==0)
         {
            ch1[0]=ch[i];
            count= count+1;
         }
         else
         {
           for(int j=0;j<count;j++)
           {
            if(ch[i] == ch1[j])
            {
                k=1;
            }
           }
           if(k==0)
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