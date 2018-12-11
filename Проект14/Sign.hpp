#pragma once
#include "Exception.hpp"
#include <iostream>

class Sign {
private:
	std::string name; //���
	std::string surname; //�������
	std::string sign; //���� �������
	int date[3]; //���� ��������
public:
	Sign(const std::string& name = "", const std::string& surname = "", const std::string& sign = "", int* date = nullptr);
	Sign(const Sign& s);
	~Sign();
	Sign& operator=(const Sign& s); // �������� ������������
	 //������� � �������						  
	const std::string& Name() const;
	void Name(const std::string& name);
	const std::string& Surname()const;
	void Surname(const std::string& surname);
	const std::string& SSign()const;
	void SSign(const std::string& sign);
	void Date(int *date);
	int* Date();

	friend std::istream& operator>>(std::istream& in, Sign& s); // �������� �����
	friend std::ostream& operator<<(std::ostream& out, const Sign& s); //�������� ������
};
