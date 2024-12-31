//Problem:A beautiful Matrix.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count(vector<vector<int>>&matrix)
{

int cnt=0;

for(int i=0; i<5; i++)
{
        for(int j=0; j<5; j++)
    {
        int element=matrix[i][j];

            if(element==1)
            {
                cnt= abs(i-2) + abs(j-2); //by using manhattan distance to centar unique formula.
            }
    }     
}
return cnt;
}

int main()
{

    vector<vector<int>>matrix(5, vector<int>(5,0));
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<count(matrix);

    return 0;
}
