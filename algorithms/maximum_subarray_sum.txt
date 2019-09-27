/* 
 * File:   maximum_subarray_sum.cpp
 * Author: hamidsultanzadeh
 *
 * Created on September 23, 2019, 21:21
 */

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int best=0, sum=0;
    
    int size=0;
    cin>>size;
    
    int arr[size];
    
    for(int i=0 ; i<size ; i++) cin>>arr[i];
    
    for(int i=0 ; i<size ; i++){
        sum = max(arr[i],sum+arr[i]);
        best = max(sum,best);
//        cout<<sum<<"\t"<<best<<endl; DEBUG
    }
    
    cout<<"Best : "<<best;

    return 0;
}
//INPUT
//8
//-1 2 4 -3 5 2 -5 2

//OUPUT
//sum best
//-1 0
// 2 2
// 6 6
// 3 6
// 8 8
// 10 10
// 5 10
// 7 10