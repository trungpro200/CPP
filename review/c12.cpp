#include<iostream>
#include<stdlib.h>

using namespace std;

void nhap(int a[][20], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("A[%u][%u]= ", i, j);
			cin >> a[i][j];
		}
	}
}

int min(int a[][20], int m, int n){
	int MIN=a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(a[i][j]<m){
				MIN=a[i][j];
			}
		}
	}
	return m;
}

int main(){
	int a[20][20], m, n;
	cout<<"Dim: ";
	cin>>m>>n;
	nhap(a, m,n);

	printf("Min: %u", min(a, m, n));
}