#include<iostream>
#include<stdlib.h>

using namespace std;

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
	int tu, mau, uoc;
	cout<<"Nhap tu va mau: ";
	cin>>tu>>mau;

	uoc = GCD(tu, mau);
	tu/=uoc;
	mau/=uoc;
	
	printf("Tong= %u\nHieu= %d\nTich= %u\nThuong= %f", tu+mau, tu-mau, tu*mau,(float) tu/mau);

	return 0;
}