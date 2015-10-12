#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
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




