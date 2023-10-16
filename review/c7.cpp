#include<iostream>
#include<stdlib.h>

using namespace std;


void swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

int GCD(int a, int b){
	if (a<b){ //a>=b voi moi TH
		swap(a, b); 
	}

	if (a%b==0){
		return b;
	}

	return GCD(a%b, b);
}

int main(){
	int a,b,c,d;
	cout<<"Nhap a,b,c,d: ";
	cin>>a>>b>>c>>d;
	int kq = GCD(a, b);
	kq = GCD(kq, c);
	kq = GCD(kq, d);
	printf("GCD(%u, %u, %u, %u)= %u", a,b,c,d,kq);
	return 0;
}
