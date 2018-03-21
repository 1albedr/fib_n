#include <iostream>
#include <locale>

using namespace std;

long long replace_digit(long long, size_t, size_t);

int main()
{
	setlocale(LC_ALL, "rus");
	long long n=0, copy_n=0;
	size_t digit=0, replace=0, k=0;

	cout << "������� �����: ";
	cin >> n;

	cout << "����� ����� ������� ��������: ";
	cin >> digit;

	cout << "�� ����� ����� ������� ��������: ";
	cin >> replace;

	cout
		<< "����� ������ ����� "
		<< digit
		<< " �� ����� "
		<< replace << ": "
		<< replace_digit(n, digit, replace) << endl;


	
	cout << endl << "......................" << endl;
	system("pause");
	return 0;

}

long long replace_digit(long long num, size_t toReplace, size_t replace)
{
	long long copy_n =  num ;
	size_t k = 0;

	while (num)
	{
		++k;
		num /= 10;
	}

	//cout << k << endl;

	for (size_t i = 0; i < k; i++)
	{
		if (copy_n % 10 == toReplace)
		{
			num += pow(10, i)*replace;
		}
		else
			num += pow(10, i)*(copy_n % 10);
		copy_n /= 10;
	}

	return num;
}
