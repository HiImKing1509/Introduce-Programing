#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float kq = Tong(n);
	cout << "Ket qua = " << kq;
	return 1;
}

float Tong(int k)
{
	float s = 1;
	for (int i = 1; i <= k; i = i + 1)
		s = s * (1 + (float)1 / i / i);
	return s;
}