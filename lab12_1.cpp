#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

long long int fibonacci(int x);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long int fibonacci(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    else {
        long long int s = fibonacci(n - 1) + fibonacci(n - 2);
        return s;
    }
}
