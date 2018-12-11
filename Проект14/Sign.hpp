#pragma once
#include "Exception.hpp"
#include <iostream>

class Sign {
private:
	std::string name; //имя
	std::string surname; //фамилия
	std::string sign; //знак зодиака
	int date[3]; //дата рождения
public:
	Sign(const std::string& name = "", const std::string& surname = "", const std::string& sign = "", int* date = nullptr);
	Sign(const Sign& s);
	~Sign();
	Sign& operator=(const Sign& s); // оператор присваивания
	 //геттеры и сеттеры						  
	const std::string& Name() const;
	void Name(const std::string& name);
	const std::string& Surname()const;
	void Surname(const std::string& surname);
	const std::string& SSign()const;
	void SSign(const std::string& sign);
	void Date(int *date);
	int* Date();

	friend std::istream& operator>>(std::istream& in, Sign& s); // оператор ввода
	friend std::ostream& operator<<(std::ostream& out, const Sign& s); //оператор вывода
};
