#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int in, element;
    cin>>in;
    vector<int> inputs(in);
    for(int i=0; i<in; i++){
        scanf("%d", &element);
        inputs[i]=element;
    }
    sort(inputs.begin(),inputs.end());
    for(int i=0; i<in; i++){
        cout<<inputs[i]<<" ";
    }
    return 0;
}
