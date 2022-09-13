#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;

	cin >> k;

	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = k-1; i >= 1; i--) {
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
}