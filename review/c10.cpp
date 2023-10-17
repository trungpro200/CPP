#include <iostream>
#include <stdlib.h>

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

void xuat(int a[][20], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << '\n';
	}
}

int tichcot(int a[][20], int m, int k)
{	
	int tich=1;
	for (int hang = 0; hang < m; hang++)
	{
		tich*=a[hang][k];
	}
	return tich;
}

int main()
{
	int m, n, k;

	cout << "Dim: ";
	cin >> m >> n;
	int a[20][20];
	nhap(a, m, n);
	printf("Ma tran vua nhap: \n");
	xuat(a, m, n);
	printf("Nhap k: ");
	cin >> k;
	cout<<tichcot(a, m, k);

	return 0;
}