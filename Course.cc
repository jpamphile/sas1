#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Course.h"

//#include "Storage.h"
//#include "Student.h"

//Course::Course(int c, int g)
//{
//  code  = c;
//  grade = g;
//}

//2.2 ctor modified to initialize the new data members from parameters
Course::Course(int c, int g, int t, string ci)
{
    code        = c;
    grade       = g;
    term        = t;
    courseIns   = ci;
}

//Course dtor
Course::~Course()
{
}


/*
//2.4 - following funcs to be removed. No longer in use because Course objects
//      dynamically allocated.
//TO BE REMOVED
void Course::setCode(int c)
{
  code = c;
}

//TO BE REMOVED
void Course::setGrade(int g)
{
  grade = g;
}
*/


//2.3 - print() to print out the new data members
void Course::print()
{
  string str;

/*
  cout << "-- COMP " << code << ":  ";
  cout << right << setw(2)  << grade    << "  ";
  cout << term  << setw(2)  << courseIns;
*/

  cout << "-- COMP "        << code     << ":  ";
  cout << right << setw(2)  << term     << "   ";
  cout << right << setw(2)  << grade    << "   ";

  getGradeStr(str);

  cout << left  << setw(4)  << str;
  cout << left  << setw(15) << courseIns<< " " << endl;

}



void Course::getGradeStr(string& gradeStr)
{
  string gradeStrings[] = {
    "WDN", "F", "D-", "D", "D+", "C-", "C", "C+", 
    "B-", "B", "B+", "A-", "A", "A+" };

  if ( grade >= -1 && grade <= 12 )
    gradeStr = gradeStrings[grade+1];
  else
    gradeStr = "Unknown";
}

