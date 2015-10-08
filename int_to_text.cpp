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
    
	if(n<=9){
        if(n==1)
            cout<<"one"<<endl;
        if(n==2)
            cout<<"two"<<endl;
        if(n==3)
            cout<<"three"<<endl;
        if(n==4)
            cout<<"four"<<endl;
        if(n==5)
            cout<<"five"<<endl;
        if(n==6)
            cout<<"six"<<endl;
        if(n==7)
            cout<<"seven"<<endl;
        if(n==8)
            cout<<"eight"<<endl;
        if(n==9)
            cout<<"nine"<<endl;
    }else{
        cout<<"Greater than 9"<<endl;
    }
   return 0;
}