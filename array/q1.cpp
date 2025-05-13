//* largest element in an array 
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int sortarray(vector<int> & v){
    sort(v.begin(), v.end());
    return v[v.size()-1];
    
    
}
int main(){

    vector <int> v = {1,3,5,10,,2,4,};
 cout<<"largest array"  << sortarray(v);
    


}
