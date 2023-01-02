#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> g1;
    int y,a,f,set=0;
    while(1)
    {
        cout << "\ndo you want to enter element int array 1-yes 0-no";
        cin >> y;
        if(y==0)
        {
            break;
        }
         cout << "\nenter the element into array";
         cin >> a;
         g1.push_back(a);
          

    }
    for(auto j=g1.begin();j<=g1.end();j++)
    {
       f=*j; 
        for(auto k=g1.begin();k<=g1.end();k++)
        {
            if(j!=k)
            {
                if(f==*k)
                {
                    set=1;
                }
            }
        }
    }
   if(set==1)
   {
     cout << "\nThe array has duplicate element";
   }
   else{
      cout << "\nThe array no has duplicate element";
   }
}