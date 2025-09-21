#include <iostream>
using namespace std;

/*

* * * *
* * * *
* * * *
* * * *

*/

// void print1(int n)
// {
//     for (int i = 0; i <= n-1; i++)
//     {
//         for (int j = 0; j <= n-1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

/* 

* 
* * 
* * *
* * * * 
* * * * *

*/
// void print2(int n){
//     for(int i = 0 ; i <= n;i++){
//         for(int j =1;j<=i;j++){
//             cout<<"* " ;
//         }
//         cout << endl ;

//     }
    
// }


/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

// void print3(int n){
//     for(int i = 0 ; i<=n;i++){
//         for(int j = 1;j<=i;j++){
//             cout<<j <<" "  ;
//         }
//         cout<<endl;
//     }
// }
 
/*

1 
2 2 
3 3 3 
4 4 4 4
5 5 5 5 5

*/
// void print4(int n ){
//     for(int i = 1;i<=n;i++){
//         for(int j =1;j<= i;j++){
//             cout<<i<<" " ;
//         }
//         cout<<endl ;
//     }
// }


/*

* * * * *
* * * * 
* * *
* *
* 

*/

// void print5(int n){
//     for(int i = 1; i<=n;i++){
//         for(int j = 1; j<=n-i+1;j++){
//             cout<<"* " ;
//         }
//         cout<<endl ;
//     }
// }
// int main(){
//     int n ;
//     cout<<"Enter the num : " ;
//     cin >> n ;
//     print5(n) ;
// }

/*

1 2 3 4 5
1 2 3 4 
1 2 3 
1 2 
1 

*/ 

// void print6(int n){
//     for(int i = 1; i <= n;i ++){
//         for(int j = 1;j<=n-i+1;j++){
//             cout<<j<<" " ;
//         }
//         cout<<endl ;
//     }
// }



/*
     *
    ***
   *****
  *******
 *********


 */

// void print7(int n){
//     for(int i = 0; i<n; i++){
//         for(int j = 0 ; j<n-i-1;j++){
//             cout<<" " ;
//         }
//         for(int j= 0 ; j<2*i+1;j++){
//             cout<<"*" ;   
//         }
//         for(int j =0;j<n-i+1;j++){
//             cout<<" ";
//         }
//         cout<<endl ;
//     }
// }

/*

*********
 *******
  *****
   ***
    *
*/
void print8(int n){
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j<n-i+1;j++){
            cout<<" " ;
        }
        for(int j = 0 ;j<1-2*i;j++){
            cout<<"*" ;
        }
        for(int j= 0;j<n+i-1;j++){
            cout<<" " ;
        }
        cout<<endl ;
    }
}
 int main(){
    int n ;
    cout<<"Enter the num :" ;
    cin >> n ;
    print8(n) ;
}
