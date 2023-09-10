#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>input;
        if (input.length()<=10){
            cout<<input<<'\n';
        }else{
            cout<<input[0]<<input.length()-2<<input[input.length()-1]<<'\n';
        }
    }


    
    return 0;
}
