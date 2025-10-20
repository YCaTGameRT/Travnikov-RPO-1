#include <iostream>
#include <cstdlib>
#include <Windows.h>

/*
	Типы данных
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

	Операторы

	математические:	+ - * / = % ++ --
	сравнительные:	< > <= >= != == <=>
	логические:		&&	||	!

*/

/*
тип_возврата имя_функции(фргументы_функции) {
	тело_функции
}
*/

void PrintHelloWorld() {
	std::cout << "Hello World\n";
}

double Sum(double num1, double num2) {
	return num1 + num2;
}

float Sum(float num1, float num2) {
	return num1 + num2;
}


double Addition(double first, double secound);
double Subtraction(double first, double secound);
double Multiplication(double first, double secound);
double Division(double first, double secound);
void PrintArr(int arr[], int size);
void PrintArr(char arr[], int size);
void PrintArr(bool arr[], int size);
void SetArr(int arr[], int size);
void SetArr(char arr[], int size);
void SetArr(bool arr[], int size);
int NoMult(int num1, int num2);
void MakeMore(int* num);
void MakeM(int& num);
void MySwap(int& a, int& b);

template<typename T, typename B> B Sum(T first, B name) {
	return (B)(first + name);
}

void ShortArr(short* arr) {
	for (int i = 0; i < 5; i++) {
		*(arr + i) = rand() % 10;
		std::cout << *(arr + i) << "\t" << arr + i << "\n";
	}
}

int main() {
	// setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	PrintHelloWorld();
	/*
	int a = 2;
	int* ptr = &a;
	// std::cout << a << "\n" << &a << "\n" << ptr << "\n" << &ptr << "\n" << *ptr << "\n";
	MakeMore(ptr);
	MakeM(a);
	std::cout << a << "\n";
	*/

	short arr[5];

	ShortArr(arr);




	return 0;
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
void Revert(int arr1[], int arr2[], int size) {
	int num = 0;
	for (int i = 0; i < size; i++)
	{
		num = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = num;
	}
}
void PrintArr(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}
void PrintArr(char arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}
void PrintArr(bool arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}
void SetArr(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
void SetArr(char arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 59 + 68;
	}
}
void SetArr(bool arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 2;
	}
}
int NoMult(int num1, int num2) {
	return (num2 == 0) ? 0 : num1 + NoMult(num1, num2 - 1);
}
void MakeMore(int* num) {
	*num += 2;
}
void MakeM(int& num) {
	num += 2;
}
void MySwap(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
/*
int one = 10, two, three = one * 5;
double four = 123.545
std::cout << "который пьёт Фарит\n\t" << one * 3 << "\nу Фарита\n\t\t" << 12413 << "\nдля апокалипсиса";
*/
/*
double one = 0;
double two = 0;

std::cout << "введите первое число => ";
std::cin >> one;
std::cout << "введите втрое число => ";
std::cin >> two;

std::cout << "сумма = " << one + two << "\nразница = " << one - two << "\nпроизведение = " << one * two << "\nчастное = " << one / two;
*/
/*
int num = 0;
std::cout << "Введи число от 1 до 2 включительно -> ";
std::cin >> num;
switch (num) {
	case 1:
		std::cout << "Фарит";
		break;
	case 2:
		std::cout << "Игорь";
		break;
}
*/
/*
double one = 0;
char sym;
double two = 0;

std::cout << "введите первое число => ";
std::cin >> one;
std::cout << "выберите операцию +, -, *, / => ";
std::cin >> sym;
std::cout << "введите втрое число => ";
std::cin >> two;

if (two == 0 && sym == '/') {
	std::cout << "делить на 0 нельзя";
}

switch (sym) {
	case '+':
		std::cout << "сумма = " << one + two;
		break;
	case '-':
		std::cout << "разница = " << one - two;
		break;
	case '*':
		std::cout << "произведение = " << one * two;
		break;
	case '/':
		std::cout << "частное = " << one / two;
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
	std::cout << "введите количество рублей -> ";
	std::cin >> rub;
	if (rub > 0) {
		std::cout << "выберите валюту для покупки:\n1) USD\n2) EUR\n3) CNY\n4) FAR\n5) JPY\nвведите цыфру из списка -> ";
		std::cin >> val;
		rub = rub - rub / 100 * com;
		if (val == 1) {
			res = rub / usd;
			std::cout << "получилось " << res << " долларов\n";
			while (con != 1 || con != 2) {
				std::cout << "хотите продолжить конвертировать (1 - да / 2 - нет)? -> ";
				std::cin >> con;
				if (con == 1) {
					break;
				}
				else if (con == 2) {
					exit(0);
				}
				else {
					std::cout << "неверно\n";
				}
			}
		}
		else if (val == 2) {
			res = rub / eur;
			std::cout << "получилось " << res << " евро\n";
			while (con != 1 || con != 2) {
				std::cout << "хотите продолжить конвертировать (1 - да / 2 - нет)? -> ";
				std::cin >> con;
				if (con == 1) {
					break;
				}
				else if (con == 2) {
					exit(0);
				}
				else {
					std::cout << "неверно\n";
				}
			}
		}
		else if (val == 3) {
			res = rub / cny;
			std::cout << "получилось " << res << " юаней\n";
			while (con != 1 || con != 2) {
				std::cout << "хотите продолжить конвертировать (1 - да / 2 - нет)? -> ";
				std::cin >> con;
				if (con == 1) {
					break;
				}
				else if (con == 2) {
					exit(0);
				}
				else {
					std::cout << "неверно\n";
				}
			}
		}
		else if (val == 4) {
			res = rub / far;
			std::cout << "получилось " << res << " фарит\n";
			while (con != 1 || con != 2) {
				std::cout << "хотите продолжить конвертировать (1 - да / 2 - нет)? -> ";
				std::cin >> con;
				if (con == 1) {
					break;
				}
				else if (con == 2) {
					exit(0);
				}
				else {
					std::cout << "неверно\n";
				}
			}
		}
		else if (val == 5) {
			res = rub / jpy * 100;
			std::cout << "получилось " << res << " иен\n";
			while (con != 1 || con != 2) {
				std::cout << "хотите продолжить конвертировать (1 - да / 2 - нет)? -> ";
				std::cin >> con;
				if (con == 1) {
					break;
				}
				else if (con == 2) {
					exit(0);
				}
				else {
					std::cout << "неверно\n";
				}
			}
		}
		else {
			std::cout << "неверно\n";
		}
	}
	else {
		std::cout << "неверно\n";
	}
}
*/
/*

	тип_данных имя_массива[размер_массива]

int arr[6]{};
int sum = 0;

for (int i = 0; i < 5; i++) {
	std::cout << "введите " << i + 1 << "-е число -> ";
	std::cin >> arr[i];
	sum += arr[i];
}
std::cout << "сумма = " << sum;
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
/*
	double num1, num2;
	char sym;
	std::cout << "Введите первое число -> ";
	std::cin >> num1;
	std::cout << "Введите оператор -> ";
	std::cin >> sym;
	std::cout << "Введите второе число -> ";
	std::cin >> num2;

	if (sym == '/' && num2 == 0) {
		std::cout << "Делить на ноль нельзя";
	}
	else {
		switch (sym) {
		case '+':
			std::cout << "Сумма = " << Addition(num1, num2);
			break;
		case '-':
			std::cout << "Разность = " << Subtraction(num1, num2);
			break;
		case '*':
			std::cout << "Произведение = " << Multiplication(num1, num2);
			break;
		case '/':
			std::cout << "Частное = " << Division(num1, num2);
			break;
		}
	}
	*/
/*
		const int size = 5;
		int arr1[size]{};
		char arr2[size];
		bool arr3[size];
		SetArr(arr1, size);
		SetArr(arr2, size);
		SetArr(arr3, size);
		PrintArr(arr1, size);
		PrintArr(arr2, size);
		PrintArr(arr3, size);
		*/
/*
		int num1, num2;
		std::cout << "Введите первое число -> ";
		std::cin >> num1;
		std::cout << "Введите второе число -> ";
		std::cin >> num2;
		std::cout << NoMult(num1, num2);
		*/
/*
		const int price[3][4]{ {100, 120, 200, 200}, {150, 300, 280, 0}, {320, 350, 0, 0} };
		int value[3][4]{ {}, {}, {} }, cat = 0, prod = 0, sum = 0, sell3 = 0, sell1 = 0;
		bool sell2 = false;
		std::cout << "Выберите товар:\n1 .Фруктовые:\n1. яблочный - " << price[0][0] << " р.\n2. апельсиновый - " << price[0][1] << " р.\n3. абрикосовый - " << price[0][2] << " р.\n4. грушевый - " << price[0][3] << " р.\n\n2. Овощные:\n1. томатный - " << price[1][0] << " р.\n2. луковый - " << price[1][1] << " р.\n3. огуречный - " << price[1][2] << " р.\n\n3. Чай:\n1. чесночный - " << price[2][0] << " р.\n2. петрушковый - " << price[2][1] << " р.\n\n";
		do {
			std::cout << "Выберите категорию, для выхода введите 0  -> ";
			std::cin >> cat;
			std::cout << "Выберите продукт, для выхода введите 0  -> ";
			std::cin >> prod;
			cat--;
			prod--;
			std::cout << "Введите количество продукта, для выхода введите 0 -> ";
			std::cin >> value[cat][prod];
			if (value[cat][prod] > 0) {
				sum += price[cat][prod] * value[cat][prod];
				std::cout << "\n";
			}
			else if (value[cat][prod] < 0) {
				std::cout << "Ошибка! Количество меньше нуля";
			}
		} while (value[cat][prod] != 0);
		if (value[2][1] == 3) {
			sell1 = price[2][1] - price[2][1] * 5 / 100;
			sum = sum - sell1;
		}
		if (sum > 400) {
			sum = sum - sum * 13 / 100;
			sell2 = true;
		}
		if (value[1][1] > 3) {
			sell3 = price[1][1] * (value[1][1] - value[1][1] / 4);
			sum = sum - sell3;
		}

		std::cout << "\n";
		if (sell1 > 0) {
			std::cout << "Была скидка №1 " << sell1 << " р.\n";
		}
		if (sell2 == true) {
			std::cout << "Была скидка №2\n";
		}
		if (sell3 > 0) {
			std::cout << "Была скидка №3 " << sell3 << " р.\n";
		}
		std::cout << "Сумма покупки: " << sum;
		*/