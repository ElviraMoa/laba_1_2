#include "Sign.hpp"

Sign::Sign(CRSTR name, CRSTR surname, CRSTR, int * date) :
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

Sign::Sign(CRSIGN s) :
	name(s.name), surname(s.surname), sign(s.sign) {
	date[0] = s.date[0];
	date[1] = s.date[1];
	date[2] = s.date[2];
	std::cout << "\n����������� ����������� Sign";
}

Sign::~Sign() { std::cout << "\n���������� Sign"; }

Sign& Sign::operator=(CRSIGN s) {
	name = s.name;
	surname = s.surname;
	sign = s.sign;
	date[0] = s.date[0];
	date[1] = s.date[1];
	date[2] = s.date[2];
	return *this;
}

CRSTR Sign::Name()const { return name; }
CRSTR Sign::Surname()const { return surname; }
CRSTR Sign::SSign()const { return sign; }
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

void Sign::SSign(CRSTR sign) {
	this->sign = sign;
}

void Sign::Name(CRSTR name) {
	this->name = name;
}

void Sign::Surname(CRSTR surname) {
	this->surname = surname;
}

std::istream& operator>>(std::istream& in, Sign& s) {
	if (!(in >> s.name >> s.surname >> s.sign >> s.date[0] >> s.date[1] >> s.date[2])) {
		throw Exception("������������ ����");
	}
	return in;
}

std::ostream& operator<<(std::ostream& out, CRSIGN s) {
	out << "���: " << s.name
		<< "\n�������: " << s.surname
		<< "\n����: " << s.sign
		<< "\n����: " << s.date[0] << '/' << s.date[1] << '/' << s.date[2];
	return out;
}

