#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //Scans a given array to find the sum
    int sum=0, n;
    int array[100];
    scanf("%d", &n);

    //Adds elements to the sum
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
        sum=sum+array[i];
    }
    //Returns sum
    printf("%d", sum);
    return 0;
}
