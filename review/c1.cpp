#include <iostream>
#include <stdlib.h>
#include <cstdlib>

#define range(i, a, b, step) for (int i = a; i < b; i += step)


using namespace std;

bool isPrime(int n)
{
	if (n <= 1)
	{
		return false;
	}
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int sqr(int n){
	return n*n;
}

void Prime1000()
{
	int primes[200];
	primes[0] = 2;
	int cur = 3;
	int l = 1;
	bool isPrime;
	int outloop = 0;
	int inloop = 0;

	while (cur < 1000)
	{

		outloop++;
		isPrime = true;

		for (int i=0; (i<l)&&(sqr(primes[i])<=cur);i++)		
		// range(i, 0, l, 1)
		{
			if (cur % primes[i] == 0)
			{
				inloop++;
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			l++;
			primes[l - 1] = cur;
			cout << cur << '\n';
		}

		cur+=2;
	}

	printf("Found %u primes \n", l);
	printf("Did %u loops outside and %u loops inside", outloop, inloop);
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
	Prime1000();
}