#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;


    for (int i =0;i<n;i++){
        double a;
        double b;
        double c;
        cin>>a>>b>>c;
        if (b>a){
            cout<<(int)ceil((b-a)/(c*2))<<"\n";    
        }else{
            cout<<(int)ceil((a-b)/(c*2))<<"\n"; 
        }
        
    }

    return 0;
}