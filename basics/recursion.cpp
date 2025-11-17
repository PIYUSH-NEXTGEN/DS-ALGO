#include<iostream>
using namespace std ;

// Q1. Print name n time using recursion.

// void f(int i,int n){
//     if(i>n) return ;
//     else{
//         cout<<"piyush"<<endl;
//         f(i+1,n)  ;
//     }
// }

// Q2. Print linearly from 1 to n.

// void printnum(int i ,int n){
//     if(i>n) return ;
//     else{
//         cout<<i<<endl ;
//         printnum(i+1,n);
//     }
// }
// int main(){
//     int n,i ;
//     cin>>n ;
//     printnum(1,n);
// }


// Q3. Print linearly from n to 1.

// void printNto1(int n) {
//     if (n < 1) return;
//     cout << n << " ";
//     printNto1(n - 1);
// }

// Q4. Print 1 to n using backtracking.
// void backtracking(int i,int n){
//     if(i<1) return ;
//     else{
//         backtracking(i-1,n);
//         cout<<i<<endl ;
//     }
// }

// Q5. Print Sum of first n natural numbers (Parameterized).
// void sum(int i,int s){
//     if(i<1){
//         cout<<s<<endl ;
//         return ;
//     }
//     else {
//         sum(i-1,s+i);
//     }
// }

// int main(){
//     int n ;
//     cin>>n ;
//     sum(n,0);
// }

// Q6. Print Sum of first n natural numbers (Functional).
// int sum(int n) {
//     if (n == 0) return 0;        // base case
//     return n + sum(n - 1);       // recursive case
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << sum(n) << endl;
//     return 0;
// }

//Q7. Reverse an array using.
// void printArray(int arr[], int n) {
//    cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << arr[i] << " ";
//    }
// }
// //Function to reverse array using recursion
// void reverseArray(int arr[], int start, int end) {
//    if (start < end) {
//       swap(arr[start], arr[end]);
//       reverseArray(arr, start + 1, end - 1);
//    }
// }
// int main() {
//    int n = 5;
//    int arr[] = { 5, 4, 3, 2, 1 };
//    reverseArray(arr, 0, n - 1);
//    printArray(arr, n);
//    return 0;
// }

// Q8. Check if the num is pallindrome or not.
// bool palindrome(int i,string &s){
//     if(i<=s.length()/2) return true ;
//     if(s[i]!=s[s.length()-i-1]) return false ;
//     return palindrome(i+1,s);
// }
// int main(){
//     string s ;
//     cin>>s ;
//     cout<<palindrome(0,s)<<endl ; 

//     return 0;
// }

// Q9. Fibonacci sequence using recursion.
// int fibonacci(int n){
//     if (n<=1) return n ;
//     return fibonacci(n-1)+fibonacci(n-2) ;
// }
// int main(){
//     int n ;
//     cin>>n ;
//     cout<<fibonacci(n)<<endl ;
//     return 0;
// }

