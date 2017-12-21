#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> S;
    int  N, x, val;

    cin >> N;
    while(N--)
    {
        cin >> x;
        if(x == 1)
        {
            cin >> val;
            S.push_back(val);
        }
        else if(x == 2)
        {
            S.pop_back();
        }
        else if(x == 3)
        {
            cout << *max_element(S.begin(), S.end()) << endl;
        }
    }
    return 0;
}
