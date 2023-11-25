#include <iostream>
#include <stdlib.h>
#include <cstdlib>



using namespace std;

bool isPrime(int n){
	if (n<=1){
		return false;
	}
	for (int i = 2; i<=n/2 + 1; i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
}



int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (isPrime(n))
	{
		cout << "So nguyen to";
	}
	else
	{
		cout << "Khong phai so nguyen to";
	}

	cout << '\n';
	system("pause");
	cout<<2<<'\t';
	for (int i = 3; i<=1000; i+=2){
		if (isPrime(i)){
			cout<<i<<'\t';
		}
	}
}