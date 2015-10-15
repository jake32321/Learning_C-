#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int in=0, negs=0, pos=0, zero=0, i=0;
    cin>>in;
    int numbers[in];
    for(int i=0; i<in; i++){ //Feeds inputs into array.
        cin>>numbers[i];
    }
    while(i<in){  //Checks integer for type.
        if(numbers[i]<0){
            negs++;
        }
        if(numbers[i]>0){
            pos++;
        }
        else if(numbers[i]==0){
            zero++;
        }
        i++;
    }
    cout<<(float)pos/in<<"\n"<<(float)negs/in<<"\n"<<(float)zero/in<<endl;
    return 0;
}
