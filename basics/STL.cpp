/*
An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.

Syntax:
unordered_set<object_type> variable_name;
*/

#include<bits/stdc++.h>

using namespace std;

// int main() {
//   unordered_set < int > s;
//   for (int i = 1; i <= 10; i++) {
//     s.insert(i);
//   }

//   cout << "Elements present in the unordered set: ";
//   for (auto it = s.begin(); it != s.end(); it++) {
//     cout << * it << " ";
//   }
//   cout << endl;
//   int n = 2;
//   if (s.find(2) != s.end())
//     cout << n << " is present in unordered set" << endl;

//   s.erase(s.begin());
//   cout << "Elements after deleting the first element: ";
//   for (auto it = s.begin(); it != s.end(); it++) {
//     cout << * it << " ";
//   }
//   cout << endl;

//   cout << "The size of the unordered set is: " << s.size() << endl;

//   if (s.empty() == false)
//     cout << "The unordered set is not empty " << endl;
//   else
//     cout << "The unordered set is empty" << endl;
//   s.clear();
//   cout << "Size of the unordered set after clearing all the elements: " << s.size();
// }

/*
What is a Vector?
Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them. Vector elements can be easily accessed and traversed using iterators. A vector stores elements in contiguous memory locations.

Syntax:
vector<object_type> variable_name;

*/

#include<bits/stdc++.h>

using namespace std;

int main() {
  vector < int > v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5);
  cout << "The first element is: " << v[0] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0] << endl;

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty" << endl;

  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size();

}