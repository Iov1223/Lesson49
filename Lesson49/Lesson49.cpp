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
	string position = "�����������";
	int salary = 50000;
};

void printPerson(person &P) {
	cout << P.name << " - " << P.position << endl;
	cout << "���� ��������: " << P.birthday.day << "." << P.birthday.month << "." << P.birthday.year << endl;
	cout << "��������: " << P.salary << endl << endl;
}

person inputPerson() {
	person newP;
	cout << "������� ���: ";
	getline(cin, newP.name);
	cout << "������� ����: ";
	cin >> newP.birthday.day;
	cout << "������� �����: ";
	cin >> newP.birthday.month;
	cout << "������� ���: ";
	cin >> newP.birthday.year;
	cin.ignore();
	cout << "������� ���������: ";
	getline(cin, newP.position);
	cout << "������� �/�: ";
	cin >> newP.salary;
	cin.ignore();
	return newP;
}

void fillPerson(person& P) {
	cout << "������� ���: ";
	getline(cin, P.name);
	cout << "������� ����: ";
	cin >> P.birthday.day;
	cout << "������� �����: ";
	cin >> P.birthday.month;
	cout << "������� ���: ";
	cin >> P.birthday.year;
	cin.ignore();
	cout << "������� ���������: ";
	getline(cin, P.position);
	cout << "������� �/�: ";
	cin >> P.salary;
	cin.ignore();
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// ��������� date � 4 ������
	struct date { // ������� ��������� date � 4 ������
		int day;  // ����, �������� ����
		int month;// ����, �������� �����
		int year; // ����, �������� ���
		string note; // ���� � ������� ������� 
	} birthday, saleDay = { 18, 4, 2022, "���� ������"}; // ���������� � ������������� �������� ���������
	// ������ ������������ ��������� ����� ������� birthday
	birthday.day = 1;
	birthday.month = 5;
	birthday.year = 1970;
	//birthday.note = "���� �������� ���������.\n";
	birthday = { 1,5,1970,"���� �������� ���������." }; //���������� ���������� ����� ������� birthday
	//saleDay = birthday; // ������������ ����� ������� saleDay �������� ����� ������� birthday

	// ����� ����� birthday
	cout << birthday.day << "." << birthday.month << "." << birthday.year << " - " << birthday.note << endl;
	// ����� ����� saleDay
	cout << saleDay.day << "." << saleDay.month << "." << saleDay.year << " - " << saleDay.note << endl;

	date yesterday = { 17, 4, 2022, "��������� ����" }; //�������������� ������ �������� ������� ���������
	// ����� ����� yesterday
	cout << yesterday.day << "." << yesterday.month << "." << yesterday.year << " - " << yesterday.note << endl;

	
	person Tom = {"��� ����"};
	//Tom.birthday.day = 1;
	//Tom.birthday.month = 5;
	//Tom.birthday.year = 1985;
	Tom.birthday = { 1, 5, 1985 };
	person Bob = { "��� �������", {15, 12, 1970} ,"��������", 120000 };

	printPerson(Tom);
	printPerson(Bob);

	cout << Tom.name << " - " << Tom.position << endl;
	cout << "���� ��������: " << Tom.birthday.day << "." << Tom.birthday.month << "." << Tom.birthday.year << endl;
	cout << "��������: " << Tom.salary << endl << endl;

	cout << Bob.name << " - " << Bob.position << endl;
	cout << "���� ��������: " << Bob.birthday.day << "." << Bob.birthday.month << "." << Bob.birthday.year << endl;
	cout << "��������: " << Bob.salary << endl;

	person* pTom = &Tom;
	cout << "���: " << pTom->name << endl;
	cout << "��� ��������: " << pTom->birthday.year << endl;
	pTom->salary += 10000;
	cout << "����� ��������: " << pTom->salary << endl << endl; 

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