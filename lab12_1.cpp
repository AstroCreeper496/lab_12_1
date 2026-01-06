#include<iostream>
using namespace std;

int fibonacci(int x);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    else {
        int s = fibonacci(n - 1) + fibonacci(n - 2);
        return s;
    }
}
