#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;
    queue<int> q;

    for(int i=1;i<=N;i++)
    {
        q.push(i);
    }

    while(q.size()>1)
    {
        q.pop();

        int tmp;
        tmp = q.front();
        q.push(tmp);
        q.pop();
    }

    cout<<q.front();

}