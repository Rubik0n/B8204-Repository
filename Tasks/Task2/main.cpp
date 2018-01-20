#include "matrix_lib.h"
#include <conio.h> 
#include <time.h>

int main()
{
	srand(time(0)); 
	setlocale(LC_ALL, "rus");

	const int N = 4, M = 5;
	const int K = 5, P = 6;
	
	int A[N][M];
	int B[K][P];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			A[i][j] = rand() % 10;
	for (int i = 0; i < K; i++)
		for (int j = 0; j < P; j++)
			B[i][j] = rand() % 10;

	cout << "Матрица А\n";
	printMatrix(*A, N, M);
	cout << endl;
	cout << "Матрица B\n";
	printMatrix(*B, K, P);
	cout << endl;

	int sum[N][M];
	cout << "Сумма A и B\n";
	if (sumMatrix(*A, N, M, *B, K, P, *sum))
		printMatrix(*sum, N, M);
	else
		cout << "Нельзя просуммировать (разная размерность матриц)";
	cout <<"\n\n";

	int multiply[N][P];
	cout << "Умножение A на B\n";
	if (multiMatrix(*A, N, M, *B, K, P, *multiply))
		printMatrix(*multiply, N, P);
	else
		cout << "Нельзя перемножить (разная размерность матриц)";
	cout << "\n";

	int alphaMultiply[N][M];
	int alpha = 2;
	cout << "Умножение A на " << alpha << "\n";
	alphaMultiMatrix(*A, N, M, alpha, *alphaMultiply);
	printMatrix(*alphaMultiply, N, M);



	_getch();
	return 0;
}