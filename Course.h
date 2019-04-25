#ifndef COURSE_H
#define COURSE_H

class Course
{
  public:
    
    //2.2 - ctor modified to initialize the new members from parameters
    //Course(int=0, int=0);
    Course(int=0, int=0, int=0, string=" ");

    //Course dtor
    ~Course();
    
/*TO BE REMOVED
    void setCode(int);
    void setGrade(int);
*/

    //2.3 - print() modified to print out new data members
    void print();

  private:
    int code;	    // Course code, for example 2404 for COMP2404
    int grade;	    // Numeric grade from 0 (F) to 12 (A+), with -1 for WDN
    
    //2.1 - adding 2 data members : term & courseIns
    //2.1.1 - YYYYTT: YYYY (4-digit year), TT (terms 10 = W, 20 = S, 30 = F)
    int term;

    //2.1.2 - course instructor represented as a string
    string courseIns;

    void getGradeStr(string&);
};

#endif
