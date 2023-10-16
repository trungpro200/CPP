#include<iostream>

using namespace std;

int factorial(int n){
	if (n<=1){
		return 1;
	}
	return n*factorial(n-1);
}

int Ck(int n, int k){
	//  n!/(k! (n-k)!)
	return factorial(n)/(factorial(k)*factorial(n-k));
}

int main(){
	cout<<factorial(10)<<'\n';
	cout<<Ck(9,3);
}