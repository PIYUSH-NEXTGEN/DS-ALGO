#include <iostream>
using namespace std;

/*
==============================================================
    PATTERN PRINTING IN C++
==============================================================
*/

/*
Pattern 1:
* * * *
* * * *
* * * *
* * * *
*/
void print1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Pattern 2:
* 
* *
* * *
* * * *
* * * * *
*/
void print2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Pattern 3:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
void print3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
Pattern 4:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
void print4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

/*
Pattern 5:
* * * * *
* * * *
* * *
* *
*
*/
void print5(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Pattern 6:
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
void print6(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
Pattern 7 (Pyramid):
     *
    ***
   *****
  *******
 *********
*/
void print7(int n) {
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Pattern 8 (Inverted Pyramid):
*********
 *******
  *****
   ***
    *
*/
void print8(int n) {
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the num: ";
    cin >> n;

    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print7(n);
    print8(n);

    return 0;
}
