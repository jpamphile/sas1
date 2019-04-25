#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "defs.h"
#include "Student.h"
#include "Course.h"

//3.2 - ctor modified: course array not initialized. Initializes other members
Student::Student(int i)
{
  id = i;
  numCourses = 0;

  //for (int i=0; i<MAX_NUM_COURSES; ++i) {
  //  courses[i].setCode(0);
  //  courses[i].setGrade(0);
  //}
}


//3.3 - dtor created to clean up the dynamically allocated Course objects
Student::~Student()
{
    for(int i = 0; i <= numCourses; i++){
        delete courses[i];
    }
}

/*
//3.6 - Following funcs no longer useful.  TO BE REMOVED.
//NOT NEEDED - to be removed
void Student::setId(int i)
{
  id = i;
}

//NOT NEEDED - to be removed
void Student::setNumCourses(int n)
{
  numCourses = n;
}

//NOT NEEDED - to be removed
void Student::setCourse(int index, int code, int grade)
{
  courses[index].setCode(code);
  courses[index].setGrade(grade);
}
*/



//3.5 - print() to work with Course pointers instead of objects
void Student::print()
{
  cout<< endl << "Id: " << id << endl;

  for (int i=0; i < numCourses; i++)
    courses[i]->print();
}


//3.4 - addCourse() adds a course to the end of the array
void Student::addCourse(Course* aCourse)
{

    courses[numCourses] = aCourse;
    numCourses++;

    return;
}
