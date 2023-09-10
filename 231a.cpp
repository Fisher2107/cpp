#include <bits/stdc++.h>

using namespace std;

int main() {
    int s1,s2,s3;
    int num;
    int total=0;
    cin>>num;
    for (int i=0;i<num;i++){
        cin>>s1>>s2>>s3;
        if (s1+s2+s3>=2){
            total++;
        }
    }
    cout<<total;


    return 0;
}