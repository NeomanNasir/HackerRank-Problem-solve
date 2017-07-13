#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

//here in this problem,
//p across q 180 degree means
//q get over the distance q-p,
//and this point we have required point r
int main()
{
    int cases, px, py, qx, qy, rx, ry;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d %d %d %d", &px, &py, &qx, &qy);

        rx = (qx - px) + qx;
        ry = (qy - py) + qy;

        printf("%d %d\n", rx, ry);
    }
    return 0;
}
