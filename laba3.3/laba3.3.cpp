// Lab_03_3.cpp
// ����������� ³����
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	
	// ������������ � ����� ����
	if (x <= (-1 - R))
		y = (-x - 2);
	else
		if (-1 - R < x && x <= -1)
			y = sqrt(R * R - (x + 1) * (x + 1));
		else
			if (-1 < x && x <= 1)
				y = R;
			else
				if (1 < x && x <= 2)
					y = R + (- 1 - R) * (x - 1);
				else
					y = -1; // �� �������
	
	cout << endl;
	cout << "y = " << y << endl;
	
	cin.get();
	return 0;
}