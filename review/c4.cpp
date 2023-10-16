#include<iostream>
#include<cstring>

using namespace std;

void strpop(char* s, int index){
	int l = strlen(s);
	for (;index<l;index++){
		s[index]=s[index+1];
	}
}

void chopspace(char* s){
	int l = strlen(s);
	for (int i=0;s[i]==' '&&i<l;i++){
		strpop(s, i);
	}
}

void removespace(char* s){
	int l = strlen(s);
	for (int i=0;i<l;i++){
		if(s[i]==' '){
			strpop(s, i);
		}
	}
}

int main(){
	char name[6] = " ruck";
	strpop(name, 2);
	cout<<name<<"-->";
	chopspace(name);
	cout<<name<<'\n';

	char spaced[10]="T ru ck";
	cout<<spaced<<"-->";
	removespace(spaced);
	cout<<spaced;
	return 0;
}