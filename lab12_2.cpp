#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

long long int gcd(long long int a, long long int b){
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}
