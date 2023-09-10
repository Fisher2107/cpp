#include <bits/stdc++.h>

using namespace std;

int main() {
    double n;
    double m;
    double a;
    cin>>m>>n>>a;
    cout<<fixed<<setprecision(0)<<ceil(n/a) * ceil(m/a);
    return 0;
}