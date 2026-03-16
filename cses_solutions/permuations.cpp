#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solution(long long int num){
    // write the code here for the logic.
    if(num <=0 or num == 2 or num == 3){
        cout << "NO SOLUTION";
        return;
    }
    vector <long long int> v(num);
    long long int even = 2;
    long long int odd = 1;
    for(int i = 0;i < v.size();i++){
        if(even <= num){
            v[i] = even;
            even += 2;
        }
        else if(odd <= num){
            v[i] = odd;
            odd += 2;
        }
    }
    for(auto element:v) cout<< element << " ";
    return;
}

int main(){
    long long int num;
    cin>>num;
    solution(num);
    return 0;
}