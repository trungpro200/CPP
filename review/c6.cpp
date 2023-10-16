#include<iostream>

using namespace std;

int f(int n){
	if (n<=2){
		return n-1;
	}
	return f(n-1)+f(n-2);
}

int main(){
	cout<<f(2) + f(4) + f(6) + f(8);
	return 0;
}