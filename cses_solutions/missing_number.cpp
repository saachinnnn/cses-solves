#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solution(long long int n,const vector<int> &v){
    for(auto each : v){
        n -= each;
    }
    cout<< n;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    vector<int> number(n - 1);
    for(int &each : number){
        cin>>each;
    }
    long long int ans = (n * (n + 1)) / 2;
    solution(ans,number);
    return 0;
}