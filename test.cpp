#include <bits/stdc++.h>

using namespace std;

int main() {
    cout<<"how to access elements from hashmap"<<endl;
    unordered_map<int, int> m = {{6, 1}};

    cout<< (*m.begin()).first<<endl;
    cout<< (*m.begin()).second<<endl;

    //lists are not assignable, however we can assign list2 to be a pointer of list1 like in python like so
    int list1[3] = {1,2,3};
    int* list2 = list1;

    cout <<list1<<'\n'<<&list1<<endl;
    cout <<list2<<'\n'<<&list2<<endl;
    //if you assign b to a, the memory address of b stays the same. Meaning it produces a copy of a and puts in the b memory space
    cout<<"int tests"<<endl;
    int a =2;
    int b =3;

    cout <<&a<<endl;
    cout <<&b<<endl;

    b=a;

    cout<<b<<"    "<<&b<<endl;
    
    //all objects by defualt are mutable
    //however if the object is set to be immutable by using the const declaration then assignment is not possible.

    return 0;
}