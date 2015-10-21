#include <cmath>
#include <cstudio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/***************************************
Following code is for demonstration only
***************************************/

class Student{  //Creates a student class that has functions CalculateTotalScore and Input.
    private:
        int element;
        int score=0;
        vector<int> s; //Store Scores
    public:
        int CalculateTotalScore(){  //Calculate total from 5 scores
            for(int i=0; i<5; i++){
                score=score+s[i];
            }
            return score;
        }
        void Input(){  //5 score input
            for(int i=0; i<5; i++){
                scanf("%d", &element);
                s.push_back(element);
            }
        }
};
/*************************************
Passes in a test case to calculate
students with a higher score. First
input is number of students. Second are
scores of the students with krish's
scores listed first.

Ex. test-case

3
10 20 40 50 30
20 50 40 40 20
10 10 30 50 40
**************************************/
int main(){
  int n;
  cin>>n;  //Passes n students in.
  Student s[n];
  for(int i=0; i<n; i++){
    s[i].Input();  //Assigns test grades to students
  }
  int count=0;
  int krish_score=s[0].CalculateTotalScore();
  for(int i=0; i<n; i++){ //Compares totals to krish_score
    int total=s[i].CalculateTotalScore();
    if(total>krish_score){
      count++;
    }
    cout<<count;  //Returns better scores 
    return 0;
  }
}
