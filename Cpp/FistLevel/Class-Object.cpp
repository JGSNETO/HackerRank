#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
private:
    vector<int> studentScores;
    int score1=0, score2=0, score3=0, score4=0, score5=0;

public:
    void input(){
        cin >> score1 >> score2 >> score3 >> score4 >> score5;
    }
    
    int calculateTotalScore(){
        int sum=0;
        sum = score1 + score2 + score3 + score4 + score5;
        //cout << sum << endl;
        return sum;
    }
};
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
