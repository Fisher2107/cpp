#include <bits/stdc++.h>

using namespace std;



int reccur(unordered_map<int,int>& map) {

    if (map.size()==0){
        return 0;
    }else if(map.size()==1){
        return ((*map.begin()).second * (*map.begin()).first);
    }

    
    unordered_map<int,int>::iterator it;
    unordered_map<int,int> queue[map.size()];
    int key;

    for (it = map.begin(); it!= map.end();it++){
        unordered_map<int,int> temp = map;

        key = (*temp.begin()).second;
        if (temp.find(key - 1) != temp.end()) {
            temp.erase(key-1);
        }
        if (temp.find(key + 1) != temp.end()) {
            temp.erase(key+1);
        }
    }
        
}

int main() {
    int n;
    cin>>n;
    int an;

    unordered_map<int,int> map = {};

    //Create Dictionary for sequence
    for (int i =0;i<n;i++){
        cin>>an;
        if (map.find(an) != map.end()) {
            map[an] = 1;
        }else{
            map[an]+=1;
        }
    }

    cout<<reccur(map);



    return 0;
}