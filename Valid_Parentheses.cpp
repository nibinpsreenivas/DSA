#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i;
    
    string s;
    cout<<"Enter the strng";
    cin>>s;
    int l1=s.length();
    char ch[l1+1];
    strcpy(ch,s.c_str());
   
    int k=0;
    for(i=0;ch[i]!='\0';i++)
    {
      cout<<ch[i];
    }
    for(i=0;ch[i]!='\0';)
    {
        if(ch[i]=='(')
        {
           if(ch[i+1]==')')
           {
               
              i=i+2;
           }
           else{
            k=1;
            break;
           }
        }
        else if(ch[i]=='{')
        {
           if(ch[i+1]=='}')
           {
              i=i+2;
           }
           else{
            k=1;
            break;
           }
        }
        else if(ch[i]=='[')
        {
           if(ch[i+1]==']')
           {
              i=i+2;
           }
           else{
            k=1;
            break;
           }
        }
        else{
           k=1;
           break;
        }
    }
        if(k==0)
        {
            cout<<"Valid Parentheses";
        }
        else{
           cout<<"Not Valid Parentheses";
        }
          
    
 
    return 0;
}