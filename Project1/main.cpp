#include <iostream>
#include <cstdlib>
#include <Windows.h>

/*
	���� ������
	bool		true/false
	char		'h'	'\t'
	short		32768
	int			214746834
	long		214746834123
	long long	214746834214746834214746

	float		1234.414243
	doble		123412314.414243
	long double	1231314121231123.413113123131

	unsidned

	���������

	��������������:	+ - * / = % ++ --
	�������������:	< > <= >= != == <=>
	����������:		&&	||	!

*/

/*
���_�������� ���_�������(���������_�������) {
	����_�������
}
*/

void PrintHelloWorld() {
	std::cout << "Hello World\n";
}

void PrintInt(int number) {
	std::cout << number;
}

int SetNumber(int number, int d, float b) {
	return number + d;
}

double Addition(double first, double secound) {
	return first + secound;
}
double Subtraction(double first, double secound) {
	return first - secound;
}
double Multiplication(double first, double secound) {
	return first * secound;
}
double Division(double first, double secound) {
	return first / secound;
}

int main() {
	// setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	PrintHelloWorld();

	int a = 100;
	a = SetNumber(a, 50, 112.41);
	std::cout << a << "\n\n\n";

	/*
	int one = 10, two, three = one * 5;
	double four = 123.545
	std::cout << "������� ���� �����\n\t" << one * 3 << "\n� ������\n\t\t" << 12413 << "\n��� ������������";
	*/

	/*
	double one = 0;
	double two = 0;

	std::cout << "������� ������ ����� => ";
	std::cin >> one;
	std::cout << "������� ����� ����� => ";
	std::cin >> two;

	std::cout << "����� = " << one + two << "\n������� = " << one - two << "\n������������ = " << one * two << "\n������� = " << one / two;
	*/

	/*
	int num = 0;
	std::cout << "����� ����� �� 1 �� 2 ������������ -> ";
	std::cin >> num;
	switch (num) {
		case 1:
			std::cout << "�����";
			break;
		case 2:
			std::cout << "�����";
			break;
	}
	*/

	/*
	double one = 0;
	char sym;
	double two = 0;

	std::cout << "������� ������ ����� => ";
	std::cin >> one;
	std::cout << "�������� �������� +, -, *, / => ";
	std::cin >> sym;
	std::cout << "������� ����� ����� => ";
	std::cin >> two;

	if (two == 0 && sym == '/') {
		std::cout << "������ �� 0 ������";
	}

	switch (sym) {
		case '+':
			std::cout << "����� = " << one + two;
			break;
		case '-':
			std::cout << "������� = " << one - two;
			break;
		case '*':
			std::cout << "������������ = " << one * two;
			break;
		case '/':
			std::cout << "������� = " << one / two;
			break;
		default:
			std::cout << "error";
	}
	*/

	/*
	char star = '*';

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << " " << star;
		}
		std::cout << "\n";
	}

	std::cout << "\n";

	for (int i = -8; i < 9; i++) {
		for (int j = -8; j < 9; j++) {
			if ( (i == j || i == -j || (i > -jr) ) && i > -1) {
				std::cout << " " << star;
			}
			else {
				std::cout << " " << " ";
			}
		}
		std::cout << "\n";
	}
	*/

	/*
	char star = '*';
	int a = 0;

	do {
		std::cout << star << " ";
		a++;
	} while (a < 5);
	*/
	
	/*
	char star = '*';
	int a = 0;
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << star << " ";
	}
	*/
	
	/*
	double rub = 0.00;
	double usd = 83.35;
	double eur = 99.04;
	double cny = 11.70;
	double far = 37;
	double jpy = 56.24;
	int val;
	int con = 0;
	int com = 5;
	double res;

	while (true) {
		std::cout << "������� ���������� ������ -> ";
		std::cin >> rub;
		if (rub > 0) {
			std::cout << "�������� ������ ��� �������:\n1) USD\n2) EUR\n3) CNY\n4) FAR\n5) JPY\n������� ����� �� ������ -> ";
			std::cin >> val;
			rub = rub - rub / 100 * com;
			if (val == 1) {
				res = rub / usd;
				std::cout << "���������� " << res << " ��������\n";
				while (con != 1 || con != 2) {
					std::cout << "������ ���������� �������������� (1 - �� / 2 - ���)? -> ";
					std::cin >> con;
					if (con == 1) {
						break;
					}
					else if (con == 2) {
						exit(0);
					}
					else {
						std::cout << "�������\n";
					}
				}
			}
			else if (val == 2) {
				res = rub / eur;
				std::cout << "���������� " << res << " ����\n";
				while (con != 1 || con != 2) {
					std::cout << "������ ���������� �������������� (1 - �� / 2 - ���)? -> ";
					std::cin >> con;
					if (con == 1) {
						break;
					}
					else if (con == 2) {
						exit(0);
					}
					else {
						std::cout << "�������\n";
					}
				}
			}
			else if (val == 3) {
				res = rub / cny;
				std::cout << "���������� " << res << " �����\n";
				while (con != 1 || con != 2) {
					std::cout << "������ ���������� �������������� (1 - �� / 2 - ���)? -> ";
					std::cin >> con;
					if (con == 1) {
						break;
					}
					else if (con == 2) {
						exit(0);
					}
					else {
						std::cout << "�������\n";
					}
				}
			}
			else if (val == 4) {
				res = rub / far;
				std::cout << "���������� " << res << " �����\n";
				while (con != 1 || con != 2) {
					std::cout << "������ ���������� �������������� (1 - �� / 2 - ���)? -> ";
					std::cin >> con;
					if (con == 1) {
						break;
					}
					else if (con == 2) {
						exit(0);
					}
					else {
						std::cout << "�������\n";
					}
				}
			}
			else if (val == 5) {
				res = rub / jpy * 100;
				std::cout << "���������� " << res << " ���\n";
				while (con != 1 || con != 2) {
					std::cout << "������ ���������� �������������� (1 - �� / 2 - ���)? -> ";
					std::cin >> con;
					if (con == 1) {
						break;
					}
					else if (con == 2) {
						exit(0);
					}
					else {
						std::cout << "�������\n";
					}
				}
			}
			else {
				std::cout << "�������\n";
			}
		}
		else {
			std::cout << "�������\n";
		}
	}
	*/
	
	/*
	
		���_������ ���_�������[������_�������]
	
	int arr[6]{};
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << "������� " << i + 1 << "-� ����� -> ";
		std::cin >> arr[i];
		sum += arr[i];
	}
	std::cout << "����� = " << sum;
	*/
	
	/*
	int a;

	a = rand() % 21 - 10;
	std::cout << a;
	*/
	
	/*
	int arr[10]{};

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 29 - 15;
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < 10; i++) {
		if (arr[i] < 0) {
			std::cout << arr[i] << " ";
		}
	}
	std::cout << "\n";
	for (int i = 0; i < 10; i++) {
		if (arr[i] >= 0) {
			std::cout << arr[i] << " ";
		}
	}
	
	std::cout << "Hello World";
	*/
	
	/*
	const int col = 5;
	const int row = 3;

	int arr[row][col]{ {1,2,3,4,5},{5,6,7,8,9},{} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = 1;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";

	int arr2[row][col]{ {},{},{} };
	int sumRow = 0, sumCol1 = 0, sumCol2 = 0, sumCol3 = 0, sumCol4 = 0, sumCol5 = 0, allSum = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
		{
			arr2[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr2[i][j] << "\t";
			sumRow = sumRow + arr2[i][j];
			if (j == 0) {
				sumCol1 = sumCol1 + arr2[i][j];
			}
			else if (j == 1) {
				sumCol2 = sumCol2 + arr2[i][j];
			}
			else if (j == 2) {
				sumCol3 = sumCol3 + arr2[i][j];
			}
			else if (j == 3) {
				sumCol4 = sumCol4 + arr2[i][j];
			}
			else if (j == 4) {
				sumCol5 = sumCol5 + arr2[i][j];
			}
			allSum = allSum + arr2[i][j];
		}
		std::cout << "|\t" << sumRow;
		sumRow = 0;
		std::cout << "\n";
	}
	std::cout << "---------------------------------------------------\n";
	std::cout << sumCol1 << "\t" << sumCol2 << "\t" << sumCol3 << "\t" << sumCol4 << "\t" << sumCol5 << "\t|\t" << allSum;
	*/

	int num1, num2;
	char sym;
	std::cout << "������� ������ ����� -> ";
	std::cin >> num1;
	std::cout << "������� �������� -> ";
	std::cin >> sym;
	std::cout << "������� ������ ����� -> ";
	std::cin >> num2;

	switch (sym) {
		case '+':
			std::cout << "����� = " << Addition(num1, num2);
			break;
		case '-':
			std::cout << "�������� = " << Subtraction(num1, num2);
			break;
		case '*':
			std::cout << "������������ = " << Multiplication(num1, num2);
			break;
		case '/':
			std::cout << "������� = " << Division(num1, num2);
			break;
	}
	
	return 0;
}