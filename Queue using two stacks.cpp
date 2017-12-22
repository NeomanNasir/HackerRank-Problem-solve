#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int cases, x, q;
    queue<int> Q;
    cin >> cases;
    while(cases--)
    {
        cin >> q;
        if(q == 1)
        {
            cin >> x;
            Q.push(x);
        }
        else if(q == 2)
            Q.pop();
        else if(q == 3)
        {
            cout << Q.front() << endl;
        }
    }

    return 0;
}
