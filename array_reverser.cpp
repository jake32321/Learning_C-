#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n; 
    cin>>n;
    
    int numbers[n];
    if(n<1||n>1000)
        return -1;
    for(int i=0; i<n; i++){
        cin>>numbers[i];
    }
    for(int i=n-1; i>=0; i--){
        cout<<numbers[i]<<" ";
    }
    return 0;
}

