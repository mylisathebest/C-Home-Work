#include <iostream>
#include <vector>
using namespace std;

void delete_duplicates(vector <int> Array, int n)
{
	//vector <int> Array;
	vector <int> array1(n);
	int s = 0;
	int j = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < s; j++)
		{
			if (Array[i] == array1[j])
				break;
		}
		if (j == s)
		{
			array1[s] = Array[i];
			s++;
		}
	}
	for (int i = 0; i < s; i++)
	{
		cout << array1[i] << "\n\r";
	}
}

int main()
{
	int n;
	cin >> n;
	vector <int> Array(n);
	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}
	delete_duplicates(Array, n);
	return 0;
}