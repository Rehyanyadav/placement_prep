// #include <iostream>
// using namespace std;

// int main() {
//     // First part: 3 rows of 3 asterisks
//     for (int i = 0; i < 3; i++) {
//         cout << "***" << endl;
//     }

//     // Second part: 5 rows of 5 asterisks
//     for (int i = 0; i < 5; i++) {
//         cout << "*****" << endl;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

void print1(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<"*";

        }
     cout << endl;
   }
}
int main(){
  int t;
   cout<<"enter the number of test cases:";
    cin>>t;

    for(int i=0;i<t;i++){
    int n;
    cout<<"enter the number of rows:";
    cin >>n;
    print1(n);
    }
    return 0;
}