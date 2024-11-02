#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Records
{
public:
	void addStudent (const string& lastname, const string& name, const  string& Id);
	void addTask( const string& nameTask, const int& totalPoints);
	int addGrade(const string& name, const int& earnedPoints, const string& namedTask);
	void displayList() const;

	 vector <string> studentList;
	 vector <string> studentNamesList;
	 vector <string> AssigmentList;
	 vector <int>    TotalPoints;
	 map<string, map<string, int> > grades;
};

