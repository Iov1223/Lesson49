#include <iostream>
#include <string>
using namespace std;

struct date {
	int day;
	int month;
	int year;
};
struct person {
	string name;
	date birthday;
	string position = "программист";
	int salary = 50000;
};

void printPerson(person &P) {
	cout << P.name << " - " << P.position << endl;
	cout << "Дата рождения: " << P.birthday.day << "." << P.birthday.month << "." << P.birthday.year << endl;
	cout << "Зарплата: " << P.salary << endl << endl;
}

person inputPerson() {
	person newP;
	cout << "Введите имя: ";
	getline(cin, newP.name);
	cout << "Введите день: ";
	cin >> newP.birthday.day;
	cout << "Введите месяц: ";
	cin >> newP.birthday.month;
	cout << "Введите год: ";
	cin >> newP.birthday.year;
	cin.ignore();
	cout << "Введите должность: ";
	getline(cin, newP.position);
	cout << "Введите з/п: ";
	cin >> newP.salary;
	cin.ignore();
	return newP;
}

void fillPerson(person& P) {
	cout << "Введите имя: ";
	getline(cin, P.name);
	cout << "Введите день: ";
	cin >> P.birthday.day;
	cout << "Введите месяц: ";
	cin >> P.birthday.month;
	cout << "Введите год: ";
	cin >> P.birthday.year;
	cin.ignore();
	cout << "Введите должность: ";
	getline(cin, P.position);
	cout << "Введите з/п: ";
	cin >> P.salary;
	cin.ignore();
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// структура date с 4 полями
	struct date { // создаем структуру date с 4 полями
		int day;  // поле, хранящее день
		int month;// поле, хранящее месяц
		int year; // поле, хранящее год
		string note; // поле с записью события 
	} birthday, saleDay = { 18, 4, 2022, "День продаж"}; // объявление и инициализация объектов структуры
	// Прямое присваивание значенией полям объекта birthday
	birthday.day = 1;
	birthday.month = 5;
	birthday.year = 1970;
	//birthday.note = "День рождения Чебурашки.\n";
	birthday = { 1,5,1970,"День рождения Чебурашки." }; //мгновенное заполнение полей объекта birthday
	//saleDay = birthday; // присваивание полям объекта saleDay значений полей объекта birthday

	// Вывод полей birthday
	cout << birthday.day << "." << birthday.month << "." << birthday.year << " - " << birthday.note << endl;
	// Вывод полей saleDay
	cout << saleDay.day << "." << saleDay.month << "." << saleDay.year << " - " << saleDay.note << endl;

	date yesterday = { 17, 4, 2022, "Вчерашняя дата" }; //альтернативный способ создания объекта структуры
	// Вывод полей yesterday
	cout << yesterday.day << "." << yesterday.month << "." << yesterday.year << " - " << yesterday.note << endl;

	
	person Tom = {"Том Смит"};
	//Tom.birthday.day = 1;
	//Tom.birthday.month = 5;
	//Tom.birthday.year = 1985;
	Tom.birthday = { 1, 5, 1985 };
	person Bob = { "Боб Томпсон", {15, 12, 1970} ,"директор", 120000 };

	printPerson(Tom);
	printPerson(Bob);

	cout << Tom.name << " - " << Tom.position << endl;
	cout << "Дата рождения: " << Tom.birthday.day << "." << Tom.birthday.month << "." << Tom.birthday.year << endl;
	cout << "Зарплата: " << Tom.salary << endl << endl;

	cout << Bob.name << " - " << Bob.position << endl;
	cout << "Дата рождения: " << Bob.birthday.day << "." << Bob.birthday.month << "." << Bob.birthday.year << endl;
	cout << "Зарплата: " << Bob.salary << endl;

	person* pTom = &Tom;
	cout << "Имя: " << pTom->name << endl;
	cout << "Год рождения: " << pTom->birthday.year << endl;
	pTom->salary += 10000;
	cout << "Новая зарплата: " << pTom->salary << endl << endl; 

	cout << "\n============================\n";
	person myPerson = inputPerson();
	printPerson(myPerson);

	cout << "\n============================\n";
	person badGay;
	fillPerson(badGay);
	printPerson(badGay);

	struct point {
		int arr[];
	};
	point A = { {1, 5, 2, 6,} };

	return 0;
}