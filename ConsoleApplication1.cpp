// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");

	int n;
	int a[10][10];
	cout << "������� ����������� �������" << endl;
	cin >> n;

	for (int i = 0; i <n; i++)
	{
		for (int j = 0; j<n; j++)

		{
			cout << "a["<<i<< "][" <<j<<"]"<<endl;
			cin >>a[i][j];
		}
	}
	
	

	int k = 0, s = 0, o = 0;
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
		{
			if (a[i][j] == 0) s++; //��������� �������� ���� ��. ��������� 
			if (a[n - i - 1][n - j - 1] == 0) o++; //��������� �������� ���� ��. ��������� 
			k++; //���-�� ��������� ���� ��� ���� ��. ��������� (��� ���������� �.�. ������� ����������) 
		}

	if ((s == k) || (o == k)) cout << "�����������"<<endl;
	else cout << "�� �����������" << endl;
	system("pause");
    return 0;
}

