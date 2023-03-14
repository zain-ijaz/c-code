#include <iostream>
using namespace std;
int main()
{
	const int row=4;
	const int col = 4;
	int a = 0;
	int b = 0;
	int mat[row][col];
	do
	{
		b = 0;
		do {
				do
				{
					cout << "Enter Value of row " << a << " & column " << b << " in <= 100" << endl;
					cin >> mat[a][b];
				} while (mat[a][b] > 100);
				b++;
		} while (b < col);
		a++;
	} while (a < row);
	int largestRow = 0;
	int largestCol = 0;
	a = 0;
	do
	{
		b = 0;
		do {
			if (mat[a][b] > mat[largestRow][largestCol])
			{
				largestRow = a;
				largestCol = b;
			}
			b++;
		} while (b < col);
			a++;
	} while (a < row);

	cout << "\n";
	cout << "Largest Value is " << mat[largestRow][largestCol] << " at row " << largestRow << " and column " << largestCol << "\n";
}
