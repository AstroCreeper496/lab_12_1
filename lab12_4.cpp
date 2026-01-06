#include<iostream>
#include<string>

using namespace std;

void mySwap(int &,int &); 
void mySwap(char &,char &); 
void mySwap(string &,string &);

int main(){
	int x, y;
	string a, b;
	char p, q;
	
	cin >> x >> y >> a >> b >> p >> q;
	
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	cout << "Before swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	mySwap(a,b);
	cout << "After swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	
	cout << "Before swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";
	mySwap(p,q);
	cout << "After swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";

	return 0;
}

void mySwap(int &a,int &b){
    int c = a;
    a = b;
    b = c;
}

void mySwap(char &a,char &b){
    char c = a;
    a = b;
    b = c;
}

void mySwap(string &a,string &b){
    string c = a;
    a = b;
    b = c;
}

