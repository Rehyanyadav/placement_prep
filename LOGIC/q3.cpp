//* swap two numbers
#include<iostream>
using namespace std;

// void swap (int &a , int &b){
// int temp = a;
// a = b;
// b = temp;


// }




int main(){

    int a = 10;
    int b = 20;
    cout<<"before swap "<< a <<" "<< b << endl;
    
a = a^b;
b = a^b;
a = a^b;

    cout<<"after swap "<< a <<" "<< b << endl;
}