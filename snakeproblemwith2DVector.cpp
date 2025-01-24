#include<bits/stdc++.h>
using namespace std;

void snakeshape(vector<vector<char>>&snake, int n, int m)
{

    int Rsize = snake.size();
    int Msize = snake[0].size();

    for(int i=1; i<Rsize; i= i+4)
    {
        for(int j=0; j<Msize-1; j++)
        {
            snake[i][j]='.';
        }
    }
 
    for(int i=3; i<Rsize; i= i+4)
    {
        for(int j=1; j<Msize; j++)
        {
            snake[i][j]='.';
        }
    }
}

int main()
{

    int n, m;
    cin>>n>>m;
  
    vector<vector<char>>snake(n, vector<char>(m,'#'));

    snakeshape(snake, n, m);

    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<snake[i][j];
        }
        cout<<endl;
    }

return 0;

}
