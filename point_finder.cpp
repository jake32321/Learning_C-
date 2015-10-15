#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Short cpp file to find the distance between two points.
*/

int main() {

    int in;
    scanf("%d", &in);
    for(int i = 0; i<in; i++){
        int px, py, qx, qy;
        cin>>px>>py>>qx>>qy;
        int Mx=2*qx-px;
        int My=2*qy-py;
        cout<<Mx<<" "<<My<<endl;
    }
    return 0;
}
