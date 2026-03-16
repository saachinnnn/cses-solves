#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void solution(vector <long long int> &v){
    long long int cost = 0;
    for(int i = 1;i<v.size();i++){
        if(v[i] <= v[i - 1]){
            cost += abs(v[i] - v[i - 1]);
            v[i] = v[i - 1];
        }
    }
    cout << cost;
    return;
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    vector <long long int> v(n);
    for(auto &element:v) cin >> element;
    solution(v);
    return 0;
}
