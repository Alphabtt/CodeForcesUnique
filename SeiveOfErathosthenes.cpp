//countig prime numbers

#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
         vector<int>prime(n,10);

         if(n<=2)
         {
            false;
         }
    int cnt=0;
         for(int i=2; i<n; i++)
         {
            if(prime[i])
            {
                cnt++;
                for(int j=2*i; j<n; j= j+i)
                {
                    prime[j]=false;
                }

            }
         }
        return cnt;     

}
int main()
{

    int n;
    cin>>n;

    cout<<countPrimes(n);

    return 0;
}
