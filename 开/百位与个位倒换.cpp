#include <iostream>
using namespace std;
int main() {
	for (int n = 100; n <= 200; n++) {
		int dig1, dig2, dig3;
		dig1 = n % 10;
		dig2 = (n - dig1) % 100;
		dig3 = (n - dig1 - dig2) % 1000;
		if ((dig1*100+dig2+dig3/100)==n)
			cout << n << endl;
	}
	int x = 0;
	int y=1;
	int z = 1;
	int w = x++ ||++y&&++z;
	cout << x << y << z << endl;

	int a = 1;
	int b = 1;
	int c = 1;
	int p = (++a) || (++b&&++c);
	cout << a << b << c << endl;

	int i;
	int sum;
	int weight;

	for (i = 1, i < 10, i++) {
		cin >> weight;
			sum = sum + weight;
	}
	cout << sum / 10 << endl;


		while (1) {}
	return 0;

}