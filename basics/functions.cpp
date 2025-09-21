#include<iostream>
using namespace std ; 
//  Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase the readibility
// Functions are used to use same code multiple times

// void = which does not  return anything
// return
// parameterised
// not parameterised


// void printname(string name){
//     cout<<"hey "<<name<<endl;
// }

// int main () {
//     string name ;
//     cout << "ENTER NAME: ";
//     cin >> name ;
//     printname(name);

//     string name2;
//     cout << "ENTER NAME: ";
//     cin >> name2;
//     printname(name2);
//     return 0 ;
// }


// sum of two numbers
// void sum(int num1,int num2){
//     int num3 = num1 + num2 ;
//     cout << num3 <<endl ;
// }

// int main(){
//     int num1 , num2 ;
//     cout<<"enter two numbers: "<<endl ;
//     cin >> num1 >> num2 ;
//     sum(num1,num2);
//     return 0 ;
// }

int main(){
    int arr[5] ;
    for (int i = 0 ; i<=4; i=i+1){
        cin >> arr[i] ;
    }
    for(int i = 0;i<=4;i=i+1){
        cout << arr[i] << " " << endl ;
    }
    return 0 ;

}