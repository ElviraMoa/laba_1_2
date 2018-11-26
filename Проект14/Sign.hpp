#pragma once
#include "Exception.hpp"
#include <iostream>
#define CRSTR const std::string&
#define STR std::string
#define CRSIGN const Sign&

class Sign {
private:
	STR name;
	STR surname;
	STR sign;
	int date[3];
public:
	Sign(CRSTR name = "", CRSTR surname = "", CRSTR sign = "", int* date = nullptr);
	Sign(CRSIGN s);
	~Sign();
	Sign& operator=(CRSIGN s);
							  
	CRSTR Name() const;
	void Name(CRSTR name);
	CRSTR Surname()const;
	void Surname(CRSTR surname);
	CRSTR SSign()const;
	void SSign(CRSTR sign);
	void Date(int *date);
	int* Date();
