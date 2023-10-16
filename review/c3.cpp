#include<iostream>
#include<stdlib.h>

using namespace std;

void swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

void xuat(int a[], int l){
	for (int i=0; i<l; i++){
		cout<<a[i]<<" ";
	}
	cout<<'\n';
}

void nhap(int a[], int l){
	for (int i=0; i<l; i++){
		printf("Nhap phan tu thu %u: ", i);
		cin>>a[i];
	}
}

void sort(int a[], int l){
	for (int i=0; i<l; i++){
		for (int j=i+1; j<l; j++){
			if (a[i]<a[j]){
				swap(a[i], a[j]);
			}
		}
	}
}

int main(){
	int l;
	cout<<"Nhap so phan tu: ";
	cin>>l;
	int a[l];
	nhap(a, l);
	cout<<"Mang vua nhap: \n";
	xuat(a,l);
	sort(a,l);
	cout<<"Mang sap xep: \n";
	xuat(a,l);
	return 0;
}