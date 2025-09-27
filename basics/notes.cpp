/*
----------------------------------------------------------------------------------------------------
    What is a Void Function?
----------------------------------------------------------------------------------------------------
    A void function is a function that does not return a value.
    - Return type: void
    - Used when no result needs to be sent back to the caller.
----------------------------------------------------------------------------------------------------
*/

/*
----------------------------------------------------------------------------------------------------
    Unordered Set in STL
----------------------------------------------------------------------------------------------------
    - A container that stores unique elements in *no particular order*.
    - Average case time complexity: O(1) per operation
    - Worst case time complexity: O(n)
    
    Syntax:
        unordered_set<object_type> variable_name;
----------------------------------------------------------------------------------------------------
*/

/*
----------------------------------------------------------------------------------------------------
    Vector in STL
----------------------------------------------------------------------------------------------------
    - Vectors are dynamic arrays that can change size when elements are added/removed.
    - Elements are stored in contiguous memory locations.
    - Easy traversal and access using iterators.
    
    Syntax:
        vector<object_type> variable_name;

    push_back vs emplace_back:

    vector<string>name;
    string temp = "Piyush" ; - MAKE STRING HERE . 
    name.push_back(temp);    - COPY IT TO VECOTR .

    name.emplace_back("Piyush"); - MAKE STRING DIRECTLY IN VECTOR.

Here's what happens with push_back:

Make object (uses memory)
Copy object to vector (uses more memory temporarily)
Delete original object
Now you have one object in vector

With emplace_back:

Make object directly in vector
Done - you have one object in vector

----------------------------------------------------------------------------------------------------
*/

/*
----------------------------------------------------------------------------------------------------
    Set in STL
----------------------------------------------------------------------------------------------------
    - A container that stores unique elements in a *sorted order*.
    - Average case time complexity: O(log n) per operation
    - Worst case time complexity: O(n)
    
    Syntax:
        set<object_type> variable_name;
----------------------------------------------------------------------------------------------------
*/
/* ----------------------------------------------------------------------------------------------------
    Map in STL
----------------------------------------------------------------------------------------------------
    - A container that stores key-value pairs in *sorted order of keys*.
    - Each key is unique, and it maps to exactly one value.
    - Implemented as a balanced BST (usually Red-Black Tree).
    - Time complexity:
        - Average case: O(log n) per operation
        - Worst case: O(log n)
    
    Syntax:
        map<key_type, value_type> variable_name;
    
    Example:
        map<int, string> student;
        student[1] = "Piyush";   // Insert (key=1, value="Piyush")
        student[2] = "Raj";
        cout << student[1];      // Access value by key (O(log n))
---------------------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------------------------------
    Unordered Map in STL
----------------------------------------------------------------------------------------------------
    - Similar to map, but elements are *NOT stored in sorted order*.
    - Keys are unique, values are associated with them.
    - Implemented using Hash Table.
    - Time complexity:
        - Average case: O(1) per operation
        - Worst case: O(n)
    
    Syntax:
        unordered_map<key_type, value_type> variable_name;
    
    Example:
        unordered_map<string, int> marks;
        marks["Math"] = 95;
        marks["Science"] = 88;
        cout << marks["Math"];   // Access by key (average O(1))
---------------------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------------------------------
    Multiset in STL
----------------------------------------------------------------------------------------------------
    - Similar to set, but allows *duplicate elements*.
    - Elements are stored in *sorted order*.
    - Implemented as a balanced BST.
    - Time complexity:
        - Average case: O(log n) per operation
    
    Syntax:
        multiset<object_type> variable_name;
    
    Example:
        multiset<int> nums;
        nums.insert(5);
        nums.insert(5);
        nums.insert(3);
        // Elements stored as {3, 5, 5}
---------------------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------------------------------
    Multimap in STL
----------------------------------------------------------------------------------------------------
    - Similar to map, but allows *duplicate keys*.
    - Keys are stored in *sorted order*.
    - Useful when you want multiple values for the same key.
    - Time complexity:
        - Average case: O(log n) per operation
    
    Syntax:
        multimap<key_type, value_type> variable_name;
    
    Example:
        multimap<int, string> students;
        students.insert({1, "Piyush"});
        students.insert({1, "Raj"});
        // Key=1 has two values: "Piyush", "Raj"
---------------------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------------------------------
    Stack in STL
----------------------------------------------------------------------------------------------------
    - A container adapter that follows LIFO (Last In, First Out).
    - Elements can only be inserted (pushed) and removed (popped) from the *top*.
    - Built on top of other containers (like vector, deque, or list).

    Functions:
        push(x)    -> Insert element on top
        pop()      -> Remove element from top
        top()      -> Access the top element
        empty()    -> Check if stack is empty
        size()     -> Number of elements

    Time complexity:
        - Push/Pop/Top -> O(1)

    Syntax:
        stack<object_type> variable_name;

    Example:
        stack<int> st;
        st.push(10);
        st.push(20);
        cout << st.top();   // 20
        st.pop();
        cout << st.top();   // 10
---------------------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------------------------------
    Queue in STL
----------------------------------------------------------------------------------------------------
    - A container adapter that follows FIFO (First In, First Out).
    - Elements are inserted (pushed) at the *back* and removed (popped) from the *front*.
    - Built on top of deque or list.

    Functions:
        push(x)     -> Insert element at back
        pop()       -> Remove element from front
        front()     -> Access first element
        back()      -> Access last element
        empty()     -> Check if queue is empty
        size()      -> Number of elements

    Time complexity:
        - Push/Pop/Front/Back -> O(1)

    Syntax:
        queue<object_type> variable_name;

    Example:
        queue<int> q;
        q.push(10);
        q.push(20);
        cout << q.front();   // 10
        cout << q.back();    // 20
        q.pop();
        cout << q.front();   // 20
---------------------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------------------------------
    Deque in STL (Double Ended Queue)
----------------------------------------------------------------------------------------------------
    - A sequence container that allows insertion and deletion from both *front* and *back*.
    - Unlike vector, it does not guarantee contiguous memory.
    - Useful when you need push/pop from both ends efficiently.

    Functions:
        push_back(x), push_front(x)
        pop_back(), pop_front()
        front(), back()
        at(i), operator[i] -> random access
        empty(), size()

    Time complexity:
        - Push/Pop front/back -> O(1) amortized
        - Random access -> O(1)

    Syntax:
        deque<object_type> variable_name;

    Example:
        deque<int> dq;
        dq.push_back(10);
        dq.push_front(20);
        cout << dq.front();   // 20
        cout << dq.back();    // 10
---------------------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------------------------------
    Priority Queue in STL (Heap)
----------------------------------------------------------------------------------------------------
    - A container adapter that provides *largest (by default)* element at the top.
    - Internally implemented as a *max-heap*.
    - Can be converted to *min-heap* using custom comparator.

    Functions:
        push(x)     -> Insert element
        pop()       -> Remove top element
        top()       -> Access largest (or smallest if min-heap)
        empty(), size()

    Time complexity:
        - Push -> O(log n)
        - Pop  -> O(log n)
        - Top  -> O(1)

    Syntax:
        priority_queue<object_type> pq;   // Max heap
        priority_queue<int, vector<int>, greater<int>> min_pq; // Min heap

    Example:
        priority_queue<int> pq;
        pq.push(10);
        pq.push(30);
        pq.push(20);
        cout << pq.top();   // 30 (largest)
---------------------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------------------------------
    List in STL (Doubly Linked List)
----------------------------------------------------------------------------------------------------
    - A sequence container implemented as a doubly linked list.
    - Provides fast insertion/deletion anywhere (O(1) if position known).
    - Slower random access (O(n)) compared to vector/deque.

    Functions:
        push_back(x), push_front(x)
        pop_back(), pop_front()
        insert(iterator, x), erase(iterator)
        remove(x) -> remove all occurrences of value
        front(), back()
        empty(), size()

    Time complexity:
        - Insertion/Deletion at known position -> O(1)
        - Access by index -> O(n)

    Syntax:
        list<object_type> variable_name;

    Example:
        list<int> lst;
        lst.push_back(10);
        lst.push_front(20);
        lst.remove(10);
        cout << lst.front();   // 20
---------------------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------------------------------
    Pair in STL
----------------------------------------------------------------------------------------------------
    - A container that holds two heterogeneous objects together.
    - Useful in maps, priority queues, etc.

    Functions:
        first, second -> members of the pair

    Syntax:
        pair<type1, type2> variable_name;

    Example:
        pair<int, string> p = {1, "Piyush"};
        cout << p.first << " " << p.second;   // 1 Piyush
---------------------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------------------------------
    Tuple in STL
----------------------------------------------------------------------------------------------------
    - A generalization of pair, allows storage of multiple heterogeneous values.

    Functions:
        get<index>(tuple) -> Access element
        tie(a,b,...) -> Unpack tuple into variables

    Syntax:
        tuple<type1, type2, type3, ...> variable_name;

    Example:
        tuple<int, string, double> t = {1, "Piyush", 95.5};
        cout << get<1>(t);   // "Piyush"
---------------------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------------------------------
    Algorithms in STL (Header <algorithm>)
----------------------------------------------------------------------------------------------------
    - A collection of generic functions to operate on containers.

    Common ones:
        sort(begin, end)           -> Sort in ascending order
        sort(begin, end, cmp)      -> Sort with custom comparator
        reverse(begin, end)        -> Reverse range
        max_element(begin, end)    -> Iterator to largest element
        min_element(begin, end)    -> Iterator to smallest element
        accumulate(begin, end, 0)  -> Sum of elements (needs <numeric>)
        count(begin, end, x)       -> Count occurrences of x
        find(begin, end, x)        -> Iterator to first occurrence of x
        binary_search(begin, end, x) -> Check if x exists (sorted range required)

    Example:
        vector<int> v = {3,1,4,1,5};
        sort(v.begin(), v.end());    // {1,1,3,4,5}
        reverse(v.begin(), v.end()); // {5,4,3,1,1}
---------------------------------------------------------------------------------------------------- */
/*
====================================================================================================================
                                                END OF NOTES
====================================================================================================================
*/
