#pragma once
#include <string>
using namespace std;

class appointment {
public:
	string getName(string firstname, string surname);
	void getDate();
	void checkTimes();
	void addAppointment();
	void cancelAppointment();
private:
	bool a;
	string name 
};