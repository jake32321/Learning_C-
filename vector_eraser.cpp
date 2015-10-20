#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int in, in_two, in_three, in_four, element;
    cin>>in;
    vector<int> ints;
    for(int i=0; i<in; i++){
        scanf("%d", &element);
        ints.push_back(element);
    }
    cin>>in_two;
    ints.erase(ints.begin()+(in_two-1));
    cin>>in_three;
    cin>>in_four;
    ints.erase(ints.begin()+(in_three-1), ints.begin()+(in_four-1));
    cout<<ints.size()<<endl;
    for(int i=0; i<ints.size(); i++){
        cout<<ints[i]<<" ";
    }
    return 0;
}

