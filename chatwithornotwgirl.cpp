//Chat with girl or not problem

#include<bits/stdc++.h>
using namespace std;


int main()
{

bool count[26]={0};

string s;
cin>>s;
int res=0;
for(char c:s)
{
    int index= c - 'a';

    if(count[index]==0)
    {
        count[index]=true;
        res++;
    }
}

if(res%2==0)
{
    cout<<"CHAT WITH HER!";
}
else{
    cout<<"IGNORE HIM!";
}


return 0;

}
