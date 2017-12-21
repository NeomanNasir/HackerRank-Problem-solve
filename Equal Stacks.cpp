#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main(){
    int n1;
    int n2;
    int n3;
    int stk1 = 0, stk2 = 0, stk3 = 0;

    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
       stk1 += h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
       stk2 += h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
       stk3 += h3[h3_i];
    }

    reverse(h1.begin(), h1.end());
    reverse(h2.begin(), h2.end());
    reverse(h3.begin(), h3.end());
    bool is_equal = false;
    if(stk1 == stk2 && stk2 == stk3)
    {
        is_equal = true;
    }
    else
    {
        while(is_equal != true)
    {
        if(stk1 >= stk2 && stk1 >= stk3)
        {
             stk1 -= h1[n1-1];
             h1.pop_back();
             n1--;
        }
        else if(stk2 >= stk1 && stk2 >= stk3)
        {
            stk2 -= h2[n2-1];
             h3.pop_back();
             n2--;
        }
        else if(stk3 >= stk2 && stk3 >= stk1)
        {
            stk3 -= h3[n3-1];
             h3.pop_back();
             n3--;
        }
        if((stk1 == stk2 && stk2 == stk3))
            is_equal = true;
    }

    }
    printf("%d\n", stk1); ///all stk are equal now.

    return 0;
}

