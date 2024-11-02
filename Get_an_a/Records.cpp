#include "Records.h"
#include <string>
#include <iostream>
#include <map>
void Records::addStudent(const string& lastname, const string& name, const string& Id)
{
	string studentNamesCheck = name + " " + lastname;
	studentNamesList.push_back(studentNamesCheck);
	string student = name + " " + lastname + ", " + Id;
	studentList.push_back(student);
}
void Records::addTask( const string& nameTask, const int& totalPoints)
{
	AssigmentList.push_back(nameTask);
    TotalPoints.push_back(totalPoints);
}

void Records::displayList() const
{
    cout << "This is all Students in the course:" << endl;
    cout << "Name  , ID" << endl;
	for (const string& eachstudent : studentList)
	{
		cout << eachstudent << endl;
	}
    cout << "\n\nThis are the students with grades:" << endl;
    for (const auto& student : grades)
    {
        cout << student.first << ": ";
        for (const auto& task : student.second)
        {
            std::cout << task.first << " - " << task.second << " ";
        }
        cout << std::endl;
    }
}

int Records::addGrade(const string& name, const int& earnedPoints, const string& namedTask)
{
    // Linear search to check existence of student
    bool studentExists = false;
    bool taskExists = false;

    for (const auto& studentName : studentNamesList)
    {
        if (name == studentName)
        {
            studentExists = true;
            break;
        }
    }

    // Linear search to check existence of task
    for (const auto& task : AssigmentList)
    {
        if (namedTask == task)
        {
            taskExists = true;
            break;
        }
    }

    if (studentExists && taskExists)
    {
        grades[name][namedTask] = earnedPoints;
        return 1;
    }
    else if(!studentExists)
    {
        cout <<  "\n***No student with name:" << name << " found***\n" << endl;
        return -1;
    }
    else
    {
        cout << "\n***No assigment with name:" << namedTask << " found***\n" << endl;
        return -2;
    }
    
       
    
}
