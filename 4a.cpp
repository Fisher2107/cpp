#include<iostream>

int main(){
    int x;
    std::cin>>x;
    int i = 1;
    while(i<x){
        if(i%2==0 && (x-i)%2==0){
            std::cout<<"YES";
            return 0;
        }
        i++;
    }
    std::cout<<"NO";
    return 0;
}