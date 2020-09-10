void fill(char** arr, int n) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				arr[i][j] = 'o';
}
void queen(int n, char **arr)
{
	int j;
	if (n % 2)
		j = 0;
	else j = 1;
	for (int i = 0; i < n; i++, j += 2)
	{
		arr[i][j] = 'Q';
		//	cout << "(" << i << "," << j << ")" << endl;
		if (j == n - 1 && (n % 2 != 0))
			j = -1;
		else if (j == n - 1 && (n % 2 == 0))
			j = -2;
	}
}
void print(int n, char** arr) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}
