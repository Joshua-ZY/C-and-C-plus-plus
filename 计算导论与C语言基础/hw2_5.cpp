#include <iostream>
using namespace std;

int main() {
	int n;
	int a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[n - i - 1] << ' ';
	}
	return 0;
}