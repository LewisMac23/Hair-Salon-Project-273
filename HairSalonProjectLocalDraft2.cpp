// HairSalonProjectLocalDraft2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <fstream>
#include "appointment.h"
using namespace std;

struct appointment {
    string firstname;
    string surname;
    tm date_time;
};

int main()
{
    vector <appointment> appointments;

    cout << "Please enter your first name" << endl;
    string firstname;
    getline(cin, firstname);

    cout << "Please enter your surname" << endl;
    string surname;
    getline(cin, surname);

    cout << "Please enter a date for your booking(DD/MM/YYYY  HH:MM)";
    string appointment_date_time_str;
    getline(cin, appointment_date_time_str);

    tm appointment_date_time = {};


    appointment Appointment = { firstname, surname, appointment_date_time };
    appointments.push_back(Appointment);

    return 0;// into the other mob #watp #ftp #dreams never die fs10 
};

