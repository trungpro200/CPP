#include<iostream>
#include<stdlib.h>

using namespace std;

int nhap(int a[], int l){
	for (int i = 0; i<l; i++){
		printf("A[%u]= ", i);
		cin>>a[i];
	}
}

bool existed(int a[], int l, int n){
	for (int i = 0; i<l; i++){
		if (a[i]==n){
			return true;
		}
	}
	return false;
}


int main(){
	int l;
	cout<<"Nhap so phan tu: ";
	cin>>l;
	int nums[l], 
		indexs[l] = {-1}, l2=0; //An 'empty' list.

	nhap(nums, l);
	for (int scanI=0; scanI<l; scanI++){
		if (existed(indexs, l,scanI)){
			continue;
		}
		int count=0;
		for (int countI=0; countI <l; countI++){
			if (existed(indexs, l,countI)){
				continue;
			}
			if (nums[scanI]==nums[countI]){
				count++;
				indexs[l2]=countI;
				l2++;
			}
		}
		printf("%u occured %u times.\n", nums[scanI], count);
	}


	return 0;
}