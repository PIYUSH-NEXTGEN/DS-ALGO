// Given marks of a student, print on the screen:

// Grade A if marks >= 90
// Grade B if marks >= 70
// Grade C if marks >= 50
// Grade D if marks >= 35
// Fail, otherwise.
#include<iostream>
using namespace std;

class Solution {
public:
    void studentGrade(int marks) {

        if (marks >= 90) {
            cout << "Grade A"<<endl ;
        }
        else if ( marks >= 70) {
            cout<<"Grade B"<<endl ;
        }
        else if ( marks >= 50) {
            cout<<"Grade C"<<endl ;
        }
        else if ( marks >= 35) {
            cout<<"Grade D"<<endl ;
        }
        else {
            cout<<"Fail" <<endl ;
        } 
    }
};
int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    Solution s;
    s.studentGrade(marks);
    return 0;
}