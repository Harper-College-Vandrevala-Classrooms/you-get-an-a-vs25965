You-get-an-a Lab 

**Program organization:
There are two classes 
  Gradebook class where implements all four parts of the Problem Statement. 
  Records class where there are Four methods:
1) void addStudent (const string& lastname, const string& name, const  string& Id);
   This method is in charge of adding students to the list of students in the class.
   The list is stored in a vector called: studentList.
2) void addTask( const string& nameTask, const int& totalPoints);
   This method is in charge of adding 'nameTask' to the AssigmentList vector and 'totalPoints' to the TotalPoints vectors.
   (they are stored independently for direct and easy access to each of them when required)
4) int addGrade(const string& name, const int& earnedPoints, const string& namedTask);
   - This method does a linear search to make sure there a student with that 'name' and to make sure there is a assigment name like the 'namedTask' value.
   - If student and assignment where found then it will send the name of the student, the namedTask and the earnedpoints to a map (Called grades) to format it nicely.
   - if student or assignment are not found there will be a displayed message in the console respectively.
5) void displayList() const;
    There are two list display in the console:
     - studentList: it will show all students added, name and id.
     - grades map : t will show just the students that have an assignment and a grade related to their name.
       
**Get things set up:
  TO be able to run the program, clone this reposotory in your local machine. 
