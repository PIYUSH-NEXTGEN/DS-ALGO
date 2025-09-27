#include <bits/stdc++.h>
using namespace std;

/*
----------------------------------------------------------------------------------------------------
    VOID FUNCTION
----------------------------------------------------------------------------------------------------
    - A void function does not return a value.
    - Useful when only performing actions, not producing results. */

//  void print() {
//         cout << "raj";
//         }

//         int sum(int a, int b) {
//         return a + b;
//         }

//         int main() {
//         int c = sum(2, 3);
//         cout << c << endl;
//         return 0;
//         }

       
/*----------------------------------------------------------------------------------------------------*/


/*
----------------------------------------------------------------------------------------------------
    PAIR IN STL
----------------------------------------------------------------------------------------------------
    - A pair stores 2 values (possibly of different types) together.
    - Elements are accessed as .first and .second. */

        // void testPair() {
        //     pair<int,int> p = {1, 3};
        //     cout << p.first << " " << p.second;

        //     pair<int,pair<int,int>> p2 = {1,{2,3}};
        //     cout << p2.first << " " << p2.second.second << " " << p2.second.first;

        //     pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
        //     cout << arr[1].second;
        // }

        void explainVector(){
            // vector<int>num ;
            // num.push_back(1);
            // num.emplace_back(2);
            // cout<<num[0]<<" "<<num[1]<<endl;

            // vector<pair<int,int>>num2;
            // num2.push_back({1,2});
            // num2.emplace_back(3,4);
            // cout<<num2[0].first<<" "<<num2[1].second<<endl;// 0 first means 2 and 1 second means 4

            // vector<int>num3(5,100);
            // for(int i=0 ;i<num3.size();i++){
            //     cout<<num3[i]<<" " ;
            // }
            // vector<int>num4(5);
        //     vector<int>num5(5,20);
        //     vector<int>num6(num5);// make copy of num 5 as num6
        //     for(int i=0 ;i<num6.size();i++){
        //         cout<<num6[i]<<" " ;
        //     }

        // }
        // int main(){
        //     // testPair() ;
        //     explainVector();
        //     return 0 ;

        // }
/*----------------------------------------------------------------------------------------------------*/

/*
----------------------------------------------------------------------------------------------------
    UNORDERED SET IN STL
----------------------------------------------------------------------------------------------------
    - Stores unique elements in *no particular order*.
    - Average case time complexity: O(1)
    - Worst case time complexity: O(n)

    Syntax:
        unordered_set<object_type> variable_name; */

    
        // int main() {
        //     unordered_set<int> s;
        //     for (int i = 1; i <= 10; i++) {
        //         s.insert(i);
        //     }

        //     cout << "Elements present in the unordered set: ";
        //     for (auto it = s.begin(); it != s.end(); it++) {
        //         cout << *it << " ";
        //     }
        //     cout << endl;

        //     int n = 2;
        //     if (s.find(2) != s.end())
        //         cout << n << " is present in unordered set" << endl;

        //     s.erase(s.begin());
        //     cout << "Elements after deleting the first element: ";
        //     for (auto it = s.begin(); it != s.end(); it++) {
        //         cout << *it << " ";
        //     }
        //     cout << endl;

        //     cout << "The size of the unordered set is: " << s.size() << endl;

        //     if (!s.empty())
        //         cout << "The unordered set is not empty " << endl;
        //     else
        //         cout << "The unordered set is empty" << endl;

        //     s.clear();
        //     cout << "Size of the unordered set after clearing: " << s.size();
        // }
/*----------------------------------------------------------------------------------------------------*/

/*
----------------------------------------------------------------------------------------------------
    VECTOR IN STL
----------------------------------------------------------------------------------------------------
    - Dynamic array: can grow/shrink in size.
    - Elements are stored in contiguous memory locations.
    - Can be traversed easily with iterators.

    Syntax:
        vector<object_type> variable_name; */

   
        // int main() {
        //     vector<int> v;
        //     for (int i = 0; i < 10; i++) {
        //         v.push_back(i);
        //     }

        //     cout << "The elements in the vector: ";
        //     for (auto it = v.begin(); it != v.end(); it++)
        //         cout << *it << " ";

        //     cout << "\nThe front element: " << v.front();
        //     cout << "\nThe last element: " << v.back();
        //     cout << "\nThe size of the vector: " << v.size();

        //     cout << "\nDeleting element from the end: " << v[v.size()-1];
        //     v.pop_back();

        //     cout << "\nAfter removing the last element: ";
        //     for (int i = 0; i < v.size(); i++)
        //         cout << v[i] << " ";

        //     cout << "\nInserting 5 at the beginning..." << endl;
        //     v.insert(v.begin(), 5);
        //     cout << "The first element is: " << v[0] << endl;

        //     cout << "Erasing the first element..." << endl;
        //     v.erase(v.begin());
        //     cout << "Now the first element is: " << v[0] << endl;

        //     if (v.empty())
        //         cout << "\nVector is empty";
        //     else
        //         cout << "\nVector is not empty" << endl;

        //     v.clear();
        //     cout << "Size of the vector after clearing: " << v.size();
        // }
/*----------------------------------------------------------------------------------------------------*/

/*
----------------------------------------------------------------------------------------------------
    SET IN STL
----------------------------------------------------------------------------------------------------
    - Stores unique elements in *sorted order*.
    - Average case time complexity: O(log n)
    - Worst case time complexity: O(n)

    Syntax:
        set<object_type> variable_name; */

    
        // int main() {
        //     set<int> s;
        //     for (int i = 1; i <= 10; i++) {
        //         s.insert(i);
        //     }

        //     cout << "Elements present in the set: ";
        //     for (auto it = s.begin(); it != s.end(); it++) {
        //         cout << *it << " ";
        //     }
        //     cout << endl;

        //     int n = 2;
        //     if (s.find(2) != s.end())
        //         cout << n << " is present in set" << endl;

        //     s.erase(s.begin());
        //     cout << "Elements after deleting the first element: ";
        //     for (auto it = s.begin(); it != s.end(); it++) {
        //         cout << *it << " ";
        //     }
        //     cout << endl;

        //     cout << "The size of the set is: " << s.size() << endl;

        //     if (!s.empty())
        //         cout << "The set is not empty " << endl;
        //     else
        //         cout << "The set is empty" << endl;

        //     s.clear();
        //     cout << "Size of the set after clearing: " << s.size();
        // }
/*----------------------------------------------------------------------------------------------------*/
/*
ALGORITHMS - STL

    - Functions for operations on containers (like sorting, searching, etc.).except map
    - Operate on ranges defined by iterators.

    Example: sort, binary_search, reverse, etc. */

        // int main() {
        //     vector<int> v = {4, 3, 2, 1, 5};
        //     sort(v.begin(), v.end()); // Sorts the vector in ascending order


// int a[] = {4,3,2,1,5};
// int n = sizeof(a)/sizeof(a[0]);
// void descendingSorting() 
// {
//     sort(a, a + n, greater<int>());
// }
     

/*
====================================================================================================================
                                               THE END.
====================================================================================================================
*/
