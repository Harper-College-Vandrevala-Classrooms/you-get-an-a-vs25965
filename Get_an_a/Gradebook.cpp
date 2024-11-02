#include "Records.h"
#include <vector>
#include <iostream>
using namespace std;


int main()
{
    
    Records student1;
   //adding Students
    student1.addStudent("Vargas","Sarah", "123");
    student1.addStudent("Varg", "Sara", "456");
    student1.addStudent("Var", "Sar", "789");
    student1.addStudent("Va", "Sa", "987");
    student1.addStudent("V", "S", "654");

    //adding Assigment
    student1.addTask("quiz1", 100);
    student1.addTask("quiz", 100);

    //Adding Grades
    student1.addGrade("Sarah Vargas", 20, "quiz1");
    student1.addGrade("Sa Va", 10, "quiz1");

    //adding a second grade to an existing assigment and existing student
    student1.addGrade("Sarah Vargas", 60, "quiz");

    //Display students in the course and displaying students with grades
    student1.displayList();
   
    //Demostration if trying to add a grade for a student that does not exist 
    student1.addGrade("sol v", 60, "quiz");
    //Demostration if trying to add a grade for a student that does not exist 
    student1.addGrade("Sarah Vargas", 60, "quiz3");
  

    return 0;
}

