#include <iostream>
#include <cstdlib>

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

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

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
	
	return 0;
}