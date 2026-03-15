#include<iostream>
#include<vector>
using namespace std;
void solution(const vector<int> &v){
    // write the code solution here.
    // Weird type of O(N^2) solution
    long long int ans = 0;
    for(int i = 0;i < v.size() - 1;i++){
        for(int j = i + 1;j < v.size();j++){
            if(v[j] >= v[i]) break;
            ans++;
        }
    }
    cout << ans + 1;
    return;
}
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    // write the input code here.
    int n;
    vector <int> v(n);
    for(auto &element : v){
        cin >> element;
    }
    solution(v);
    return 0;
}