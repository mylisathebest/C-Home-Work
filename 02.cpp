// Visual Studio 2019

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPrimitive(int n);

void delete_primitives(vector <int> array, int n)
{
	int k = 0;
	vector<int> result(n);
	for (int i = 0; i < n; i++) {
		int currentValue = array[i];
		if (!isPrimitive(currentValue)) {
			result[k] = currentValue;
			k++;
			continue;
		}
		bool add = true;
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			if (add && array[j] == currentValue) {
				add = false;
				break;
			}
		}
		if (add) {
			result[k] = currentValue;
			k++;
		}
	}
	if (k > 0)
		for (int i = 0; i < k; i++) {
			cout << result[i];
			if (i < k - 1) cout << " ";
		}
	else
		cout << "Result is empty";

}



bool isPrimitive(int n) {
	if (n == 0)
		return false;
	for (int i = 2; i <= abs(n) / 2; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cout << "input size\n\r";
	cin >> n;
	if (n <= 0) {
		cout << "size must be greater than zero";
		return 0;
	}
	vector <int> Array(n);
	cout << "input array\n\r";
	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}
	delete_primitives(Array, n);
	return 0;
}