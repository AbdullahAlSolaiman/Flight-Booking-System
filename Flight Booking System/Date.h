// Specification file for the Date class
#ifndef DATE_H
#define DATE_H

class Date {
	private:
		int _Day, _Month, _Year;
	public:
		Date(int, int, int);
		Date();
		void SetDay(int);
		int GetDay() const;
		void SetMonth(int);
		int GetMonth() const;
		void SetYear(int);
		int GetYear() const;
};

#endif
