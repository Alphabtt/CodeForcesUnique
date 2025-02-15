#include<bits/stdc++.h>
using namespace std;

bool iscomposite(int n)
{
    if(n<4)
    {
        return false;
    }
  
    
        for(int i=2; i*i <=n; i++)

        {
            if(n%i==0)
            {
                return true;
            }
        }
    
   
        return false;
    


}


int main()
{

int x;
cin>>x;

for(int a=4; a<x ; a++)
{
    int b = x - a;

    if(iscomposite(b) && iscomposite(a))
    {
        cout<<a<<" "<<b;
        break;
    }
}




return 0;


}
