#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)  //Feeds long data into array.
        cin>>a[i];
    long long sum = 0;
    for(int i=0; i<n; i++) //Adds long data to the sum variable.
        sum=sum+a[i];
    cout<<sum;
}
