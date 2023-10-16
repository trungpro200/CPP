#include<iostream>
#include<cstdlib>


using namespace std;

bool namnhuan(int n){
	if (n%400==0){
		return true;
	}
	if (n%4==0&&n%100!=0){
		return true;
	}
	return false;
}

void _1000nam(){
	for (int year=1000; year<=2000;year+=4){
		if (namnhuan(year)){
			cout<<year<<'\n';
		}
	}
}

int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	if (namnhuan(n)){
		cout<<"Nam nhuan.";
	} else {
		cout<<"Nam khong nhuan.";
	}

	cout<<'\n';
	system("pause");
	_1000nam();

	return 0;
}
