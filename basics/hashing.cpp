#include <bits/stdc++.h>
using namespace std;
/*  HASHING :
Hashing is a technique to convert data into a unique index (a number) so it can be stored or found quickly.

You use a hash function to map a value (like 23 or "apple") into a specific location in memory (like box number 5).
That way, instead of searching the whole list, you jump directly to where it’s stored.

In short:
Hashing = Fast lookup by using a calculated index instead of searching.

map<int, string> m;
m[3] = "apple";
m[1] = "banana";
m[2] = "cherry";
cout << m[2]; // Outputs "cherry"

 Keys are unique
 Data is sorted by key
 A bit slower (O(log n) for search, insert, delete)
*/
// int main() {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]] += 1;
//     }
//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetching:
//         cout << hash[number] << endl;
//     }
//     return 0;
// }
// // Code if the string contain both upper and lower case letters.
// int main(){
//     string s ;
//     cin >> s ;
//     int hash[256] = {0};
//     for( int i = 0 ;i<s.size();i++){
//         hash[s[i]]++;
//     }
//     int q ;
//     cin >> q ;
//     while(q--){
//         char c ;
//         cin>>c ;
//         cout << hash[c] << endl;
//     }
//     return 0 ;
// }

/* UNORDERED HASHING :
An unordered_map also stores key–value pairs, but it uses hashing instead of a tree.
That means elements are not sorted, but operations are faster on average.

unordered_map<int, string> m;
m[3] = "apple";
m[1] = "banana";
m[2] = "cherry";

Output
2 cherry
3 apple
1 banana

 Very fast (average O(1) time)
 Not sorted
 Slightly more memory used because of the hash table

MAP (ordered map in C++)

A map in C++ stores key–value pairs in sorted order of keys.
It’s implemented using a balanced binary search tree (like Red-Black Tree).
*/
// Q1. Given an array, we have found the number of occurrences of each element in the array.
/*
Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
     5  2
        15  1
*/
// void frequency(int arr[], int  n){
//     unordered_map<int,int> mp ;
//     for(int i = 0 ; i < n ; i++){
//         mp[arr[i]]++;
//     }
//     for(auto it : mp){
//         cout << it.first << " " << it.second << endl ;
//     }
// }
// int main(){
//     int arr[]={10,5,10,15,10,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     frequency(arr,n);
//     return 0 ;
// }

// Q2. Given an array of size N. Find the highest and lowest frequency element.
void frequency(int arr[], int n){
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++){   
    map[arr[i]]++;
    }
    int maxF = 0 , minF = n ;
    int maxElement_freq = 0 , minElement_freq = 0 ;
    for(auto it :map){
        int count = it.second ;
        int element = it.first ;

        if(count>maxF){
            maxElement_freq = element ;
            maxF = count ;
        }
        if(count<minF){
            minElement_freq = element ;
            minF = count ;
        }
    }
    cout<< "Max Frequency Element: " << maxElement_freq << " with frequency " << maxF << endl ;
    cout<< "Min Frequency Element: " << minElement_freq << " with frequency " << minF << endl ;
}
int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    frequency(arr, n);
    return 0;
}
