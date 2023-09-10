#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n;
    cin>>n;
    long long int an;

    long long int input[100001]= {0};

    //Create array of occurances
    for (int i =0;i<n;i++){
        cin>>an;
        input[an]++;
    }

    for (int i=2;i<100001;i++){
        input[i]=max(input[i-1],(input[i]*i)+input[i-2]);
    }
    cout<<input[100000];

    



    return 0;
}