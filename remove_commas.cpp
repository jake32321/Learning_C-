#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   int i; 
   char c;
   vector<int> s;
   stringstream ss(str);
   while(ss>>i>>c){
       s.push_back(i);
   }
    ss>>i;
    s.push_back(i);
    return s;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
