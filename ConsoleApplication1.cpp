#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");

	int n;
	int a[10][10];
	cout << "Введите размерность матрицы" << endl;
	cin >> n;
	cout << "Введите элементы матрицы" << endl;

	for (int i = 0; i <n; i++)
	{
		for (int j = 0; j<n; j++)

		{
			//cout << "a["<<i<< "][" <<j<<"]"<<endl;
			cin >>a[i][j];
		}
	}
	
	int k = 0, s = 0, o = 0,check = 0, equal = 0;
	for (int i = 0; i < n; i++) 
	{
		equal = i;
		for (int j = 0; j < i; j++)
		{
			if (a[i][equal] == 0) check++;
			if (a[i][j] == 0)s++; //проверяет элементы ниже гл. диагонали 
			if (a[n - i - 1][n - j - 1] == 0) o++; //проверяет элементы выше гл. диагонали 


			k++; //кол-во элементов выше или ниже гл. диагонали (оно одинаковое т.к. матрица квадратная) 

		}
	}

	if ((s == k) && (o == k) && (check == n)) cout <<"Нулевая матрица" << endl;
	else if ((s == k) && (o == k)) cout << "Диагональная матрица" << endl;
	else if (s == k) cout << "Треугольная нижняя" << endl;
	else if(o == k) cout << "Треугольная верхняя" << endl;
	else cout << "Нетреугольная" << endl;
	system("pause");
    return 0;
}

