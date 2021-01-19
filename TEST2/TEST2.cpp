#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");
	int i, j, n, m, sum = 0; int **A;
	cout << "¬ведите кол-во строк n= "; cin >> n;
	cout << "¬ведите кол-во столбцов m= "; cin >> m;
	A = new int*[n];
	for (i = 0; i < n; i++)
		A[i] = new int[m];
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			A[i][j] = 1 + rand() % 10;
	for (int **ptr = A; ptr != A + n; ++ptr)
	{
		for (int*it = *ptr; it != *ptr + m; ++it)
		{
			cout << "\t" << *it;
			if (*it % 2 == 0)
				sum += *it;
		}
		cout << endl;

	}
	cout << "—умма= " << sum << endl;
	for (int k = 0; k < n; k++)
		delete A[k];
	delete[]A;
	system("pause");
}