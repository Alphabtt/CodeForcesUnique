#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int *present = new int [n+1];
    int *result = new int [n+1];

    for(int i=1; i<=n; i++)
    {
        cin>>present[i];
    }


    for(int i=1; i<=n; i++)
    {

        result[present[i]] = i;

    }

    for(int i=1; i<=n; i++)
    {
        cout<<result[i]<<" ";
    }

    delete[] present;
    delete[] result;
    return 0;





}
