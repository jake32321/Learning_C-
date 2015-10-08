#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Scans from a predetermined input.
    
    //Initialize variables
    int a; 
    long int b; 
    long long int c; 
    char d; 
    float e; 
    double f; 
    
    scanf("%d %ld %lld %c %f %lf",&a,&b,&c,&d,&e,&f); //Scans Input
    printf("%d\n%ld\n%lld\n%c\n%f\n%lf",a,b,c,d,e,f);  //Prints Input
    return 0;
}