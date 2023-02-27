#pragma once
#include <string>
using namespace std;

class services {
private:
	string drycut;
	double costDryCut;
	string wetcut;
	double costWetCut;
	string highlights;
	double costHighlights;
	string dye;
	double costDye;
	string wash;
	double costWash;
	string beardcut;
	double costBeardCut;
public:
	void selectService();
	void serviceCost();
	void serviceDuration();
};