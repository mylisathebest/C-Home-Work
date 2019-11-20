#include <iostream>
#include <iomanip>
using namespace std;
int b = 0, m = 0;

void build_ziggurat(int ziggurat[100][100], int e)
{
	for (int k = 1; k <= (e); k++) {

		for (int i = b; i < e; i++) {
			for (int j = b; j < e; j++) {
				ziggurat[i][j] = k;
			}
		};
		b++;
		e--;
	}
	
}


int main()
{
	int ziggurat[100][100];
	int e = 0;
	cin >> e;
	m = e;
	build_ziggurat(ziggurat, e);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(2) << ziggurat[i][j];
			cout << "  ";
		}
		cout << endl;
		cout << endl;

	}
	
	return 0;
}
