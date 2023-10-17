//palindrome
#include<iostream>
#include<stdlib.h>

using namespace std;

int strlen(char* s){
	int l =0;
	while (s[l]!='\0'){
		l++;
	}
	return l;
}

bool palindrome(char* s){
	int l = strlen(s);
	int left=0, right=l-1;
	
	while (left<right)
	{
		if(s[left]!=s[right]){
			return false;
		}
		left++;
		right--;
	}

	return true;
}

int occured(char* s, char n){
	int o = 0;
	int l = strlen(s);
	for (int i = 0; i<l; i++){
		if (s[i]==n){
			o++;
		}
	}
	return o;
}

int main(){
	char S[50];
	cout<<"Nhap S: ";
	cin.getline(S, 50);
	printf("Ki tu a xuat hien %u lan.\n", occured(S, 'a'));
	if (palindrome(S)){
		printf("S doi xung.");
	} else {
		printf("S khong doi xung.");
	}
}