#include "Header.h"

void nhapDayso(dayso& m )//nhap day so duong giam dan, nhap 0 thi dung
{						//canh bao neu nhap sai, canh bao lan 2 thi cook
	m.n = 0;
	int x;
	int canhbao = 0;
	do
	{
		cout << "nhap m.list[" << m.n << "]: ";
		cin >> m.list[m.n];
	} while (m.list[m.n] < 0);
	if (m.list[m.n] != 0)
	{
		do
		{
			cout << "\nnhap m.list[" << m.n+1 << "]: ";
			cin >> x;
			if (x > 0 && x < m.list[m.n])
			{
				m.list[++m.n] = x;
			}
			else
			{
				cout << "\nCanh bao lan " << ++canhbao << " !!!\n";
				if (canhbao == 2)
					break;
			}
			if (x == 0)
				m.list[++m.n] = x;
		} while (x != 0);
	}
		m.n += 1;
}

void xuatDayso(dayso m)
{
	cout << "\nDay so vua nhap: ";
	for (int i = 0; i < m.n; i++)
		cout << m.list[i] << "  ";
}

void xuatXdenY(dayso m) //xuat X den Y
{
	int x, y;
	cout << "\nNhap X va Y: ";
	cout << "\n1.X<=Y";
	cout << "\n2.0<=X;Y<=" << m.n - 1;
	do
	{
		cout << "\nNhap X: "; cin >> x;
		cout << "\nNhap Y: "; cin >> y;
	} while (x<0 || x>y || y > m.n - 1);
	cout << "\nXuat tu X den Y: ";
	for(int i=x; i<=y; i++)
		cout << m.list[i] << "  ";
}


