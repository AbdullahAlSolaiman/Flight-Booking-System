// Specification file for the Date class
#ifndef DATE_H
#define DATE_H

class Date {
private:
	int _Day, _Month, _Year;
public:
	Date(int day=0, int month=0, int year=0);
	~Date();
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);

	int GetDay()const;
	int GetMonth()const;
	int GetDay()const;
	void test();
	void test1();
};

#endif
