#include <iostream>
using namespace std;
#include <string>

//defs.h has MAX_NUM_STU & MAX_NUM_COURSES
#include "defs.h"
#include "Student.h"
#include "Course.h"
#include "Storage.h"

int  mainMenu();

//5.7 - The printStorage() global func no longer needed. MUST REMOVE.
//void printStorage(Student stuArr[MAX_NUM_STU], int);


int main()
{
  //5.1 - array of Student objects not needed anymore. Storage inStorage
  //    declared instead.
  //Student students[MAX_NUM_STU];
  Storage   inStorage;
  int       numStu = 0;
  int       numCourses;
  int       stuId, courseCode, grade, term;
  int       menuSelection;
  string    courseIns;

  while (1) {
    menuSelection = mainMenu();

    if (menuSelection == 0) 
      break;

    else if (menuSelection == 1) {

      cout << "student id:   ";
      cin  >> stuId;
    //EVERYTHING BELOW THIS LINE AND BEFORE WHILE LOOP TO INSERT IN LOOP
/*     
     cout << "course code:  ";
      cin  >> courseCode;

      cout << "grade";
      cin  >> grade;

      cout << "term (YYYYTT):   ";
      cin  >> term;

      cout << "course instructor:   ";
      cin.ignore();
      getline(cin, courseIns);

      //TO BE REMOVED students[numStu].setId(stuId);
*/
      //#5.2 - dynamically allocates a new Student object with user data
      Student* aStudent = new Student(stuId);
/*
      //#5.3.1 - dynamically allocates a new Course object with user dat
      Course* aCourse = new Course(courseCode, grade, term, courseIns);
*/
      numCourses = 0;
/*
      //#5.3.2 - adds the new course to Student object using existing funcs
      aStudent->addCourse(aCourse);
      numCourses++;

      //#5.4 - adds Student to Storage with funcs implemented in previous step
      inStorage.addStu(aStudent);     
*/
      while (1) {
        
        //User inputs course code here or 0 to break/end inputting.
        cout << "course code <0 to end>:  ";
        cin  >> courseCode;
        cout << endl;
        if (courseCode == 0)
          break;

        //User inputs number grade here.
        cout << "grade:                   ";
        cin  >> grade;
        cout << endl;

        //User inputs term info here.
        cout << "term (YYYYTT):           ";
        cin  >> term;
        cout << endl;

        //User inputs course instructors name here.
        cout << "course Ins.:             ";
        cin.ignore();
        getline(cin, courseIns);
        cout << endl;

        //Creating a course with inputs
        Course* aCourse = new Course(courseCode, grade, term, courseIns);
        //TO BE REMOVED - students[numStu].setCourse(numCourses, courseCode, grade);

        //Adding the course to student "profile"
        aStudent->addCourse(aCourse);

        //Number of courses for this student
        ++numCourses;
      }

      //TO BE REMOVED - students[numStu].setNumCourses(numCourses);
      ++numStu;
      inStorage.addStu(aStudent);
    }
  }

  //5.5 - prints the content of inStorage using member funcs from Storage
  if (numStu > 0)

    //TO BE REMOVED - printStorage(students, numStu);
    inStorage.print();

  return 0;
}

/****end of main()********************************************************/

//MENU INTERFACE
int mainMenu()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add student" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}



//5.6 - main() no longer manipulating students or its array. Storage object 
//      and its member funcs will be used instead.
//5.7 - The printStorage() global func is no longer needed. MUST BE REMOVED
/*
void printStorage(Student stuArr[MAX_NUM_STU], int numStu)
{
  cout << endl << endl << "STUDENT INFO: " << endl;

  for (int i=0; i<numStu; ++i)
    stuArr[i].print();

  cout << endl;
}
*/
