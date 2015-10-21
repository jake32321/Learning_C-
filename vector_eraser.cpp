#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int in, in_two, in_three, in_four, element;
    cin>>in; //Takes in the size of the vector
    vector<int> ints;
    for(int i=0; i<in; i++){ //Adds values to the vector from an input
        scanf("%d", &element);
        ints.push_back(element);
    }
    cin>>in_two; //Takes in a single value to be removed
    ints.erase(ints.begin()+(in_two-1));
    cin>>in_three; //Takes in the inclusive starting index 
    cin>>in_four; //Takes in the exclusive end index
    ints.erase(ints.begin()+(in_three-1), ints.begin()+(in_four-1));  //Erases from starting to end value
    cout<<ints.size()<<endl;
    for(int i=0; i<ints.size(); i++){  //Prints values to the console
        cout<<ints[i]<<" ";
    }
    return 0;
}

