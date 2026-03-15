#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    cout << n << " ";
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
            cout<<n<<" ";
        }
        else{
            n *= 3;
            n++;
            cout<<n<<" ";
        }
    }
    return 0;
}