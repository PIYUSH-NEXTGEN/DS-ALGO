#include <bits/stdc++.h>
using namespace std;

// Extract number by %
// int main(){
//     int n = 7789 ;
//     while(n>0){
//         int digit = n % 10 ;
//         cout << digit;
//         n = n / 10 ;
//     }
// }

// You are given an integer n. You need to return the number of digits in the number.
// The number will have no leading zeroes, except when the number is 0 itself.

// class Solution {
// public:
//     int countDigit(int n) {
//         if (n == 0) return 1;
//         int count = 0;
//         while (n > 0) {
//             n = n / 10;
//             count++;
//         }
//         return count;
//     }
// };

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     Solution s;
//     cout << "Number of digits: " << s.countDigit(n) << endl;
//     return 0;
// }

/*
Q2 Reverse a number

You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
*/

// class Solution {
// public:
//     int reverseNumber(int n) {
//         int n = 0 ;
//         cin>>n ;
//         int revnum = 0 ;
//         while(n>0) {
//             int lastdigit = n % 10 ;
//             revnum = (revnum*10)+ lastdigit ;
//             n = n/10 ;
//         }
//         return revnum ;
//     }
// };

/*
Q3 Palindrome Number

You are given an integer n. You need to check whether the number is a palindrome number or not.
Return true if it's a palindrome number, otherwise return false.

A palindrome number is a number which reads the same both left to right and right to left.
*/

// int main()
// {
//     int n = 0 ;
//     cin >> n;
//     int revnum = 0;
//     int duplicate = n ;
//     while (n > 0)
//     {
//         int lastdigit = n % 10;
//         revnum = (revnum * 10) + lastdigit;
//         n = n / 10;
//     }
//     if (duplicate == revnum)
//     {
//         cout << "Palindrome number " << endl;
//     }
//     else
//     {
//         cout << " Not a palindrome number " << endl;
//     }
// }

/*
Q4 GCD of Two Numbers
You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. 
Return the GCD of the two numbers.

The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers
*/

int main(){
    int a,b ;
    cin>>a>>b ;
    while(a>0 && b > 0){
        if(a>b){
            a= a%b ;
        }
        else {
            b = b%a ;
        }
       

        }
cout << "GCD is: " << (a + b) << endl;
}
/*
| Step | a  | b  | Condition | Operation               | New a | New b |
| ---- | -- | -- | --------- | ----------------------- | ----- | ----- |
| 1    | 20 | 12 | a > b     | a = a % b → 20 % 12 = 8 | 8     | 12    |
| 2    | 8  | 12 | a < b     | b = b % a → 12 % 8 = 4  | 8     | 4     |
| 3    | 8  | 4  | a > b     | a = a % b → 8 % 4 = 0   | 0     | 4     |
  */
