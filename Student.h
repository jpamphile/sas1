#ifndef STUDENT_H
#define STUDENT_H

#include "defs.h"
#include "Course.h"

class Student
{
  public:
    
    //3.2 - ctor only initializes stuId (@param), numCourses in impl.
    Student(int=0);

    //3.3 - Student dtor cleans up dynamically allocated Course objects
    ~Student();


/*
    //3.6 - to be removed. No longer in use. 
    void setId(int);
    void setCourse(int, int, int);
    void setNumCourses(int);
*/

    //3.4 - addCourse() adds a course at the end of the array
    void addCourse(Course*);

    //3.5 - print() modified to work with Course ptr instead of objects
    void print();

  private:
    int     id;

    //3.1 - primitive array of Course pointers instead of Course objects
    Course* courses[MAX_NUM_COURSES];       //Course courses[MAX_NUM_COURSES];
    int     numCourses;
};

#endif
