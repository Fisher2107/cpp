#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int x;
    int rem;

    for (int i =0;i<n;i++){
        cin>>x;
        if (i==0){
            rem=x%2;
        }

        if (rem!=x%2 && i==1){
            cin>>x;
            if (rem!=x%2){
                cout<<1;
            }else{
                cout<<2;
            }
            return 0;
        }

        if (rem!=x%2 && i>1){
            cout<<i+1;
            return 0;
        }

    }

    return 0;
}