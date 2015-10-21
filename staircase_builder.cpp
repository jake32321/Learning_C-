#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int in, i=0;
    cin>>in;
    for(int i=1; i<=in; i++){
        cout<<string((in-i), ' ')<< string(i, '#')<<endl;
    }
    return 0;
}
