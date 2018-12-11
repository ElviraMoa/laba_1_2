#include "Sign.hpp"

Sign::Sign(const std::string& name, const std::string& surname, const std::string&, int * date) :
	name(name), surname(surname), sign(sign) {
	if (date != nullptr) {
		this->date[0] = date[0];
		this->date[1] = date[1];
		this->date[2] = date[2];
	}
	else {
		this->date[0] = 0;
		this->date[1] = 0;
		this->date[2] = 0;
	}
	std::cout << "\n����������� Sign";
}

Sign::Sign(const Sign& s) :
	name(s.name), surname(s.surname), sign(s.sign) {
	date[0] = s.date[0];
	date[1] = s.date[1];
	date[2] = s.date[2];
	std::cout << "\n����������� ����������� Sign";
}

Sign::~Sign() { std::cout << "\n���������� Sign"; }

Sign& Sign::operator=(const Sign& s) { //�������� ������������
	name = s.name;
	surname = s.surname;
	sign = s.sign;
	date[0] = s.date[0];
	date[1] = s.date[1];
	date[2] = s.date[2];
	return *this;
}
//������� � �������
const std::string& Sign::Name()const { return name; }
const std::string& Sign::Surname()const { return surname; }
const std::string& Sign::SSign()const { return sign; }
int* Sign::Date() {
	return date;
}

void Sign::Date(int *date) {
	if (date != nullptr) {
		this->date[0] = date[0];
		this->date[1] = date[1];
		this->date[2] = date[2];
	}
	else {
		this->date[0] = 0;
		this->date[1] = 0;
		this->date[2] = 0;
	}
}

void Sign::SSign(const std::string& sign) {
	this->sign = sign;
}

void Sign::Name(const std::string& name) {
	this->name = name;
}

void Sign::Surname(const std::string& surname) {
	this->surname = surname;
}

std::istream& operator>>(std::istream& in, Sign& s) { //�������� �����
	if (!(in >> s.name >> s.surname >> s.sign >> s.date[0] >> s.date[1] >> s.date[2])) {
		throw Exception("������������ ����");
	}
	return in;
}

std::ostream& operator<<(std::ostream& out, const Sign& s) { //�������� ������
	out << "���: " << s.name
		<< "\n�������: " << s.surname
		<< "\n����: " << s.sign
		<< "\n����: " << s.date[0] << '/' << s.date[1] << '/' << s.date[2];
	return out;
}

