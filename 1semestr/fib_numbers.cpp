
#include <iostream>
#include <locale>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int f1, f2;
	int c;

	do
	{
		cout << "������� 1-�� ����� ������������������: ";
		cin >> f1;

		cout << "������� 2-�� ����� ������������������: ";
		cin >> f2;

		cout << "������������������ ���������: ";
		cout << f1 << " " << f2 << " ";
		while (f1 + f2 < 100)
		{
		

			f2 += f1; 
			f1 = f2 - f1; 
			cout
				<< f2
				<< " "; 
		}

		cout
			<< endl
			<< "���������� (������) 3-� ������� ����� ��������� ���� ������������������: "
			<< f1 + f2 << endl
			<< ".............................."
			<< endl;

		cout
			<< "1. ���������" << endl
			<< "2. �����" << endl;

		cout << "��� �����: ";
		cin >> c;
		if (c == 1)
			cout
			<< ".............................."
			<< endl;
	} while (c != 2);

	
	cout << endl << "................." << endl;
	return 0;
}