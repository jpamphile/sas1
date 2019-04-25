#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "defs.h"
#include "Student.h"
#include "Course.h"
#include "Storage.h"

//4.3 - Storage ctor
Storage::Storage(){
    numStuInStor = 0;
}

//4.4 - Storage dtor, cleans up dynamically allocated Student objects
Storage::~Storage(){
    for(int i = 0; i < numStuInStor; i++){
        delete arrStuPtr[i];
    }
}

//4.5 - adds a new student to the end of the array
void Storage::addStu(Student* student){
    arrStuPtr[numStuInStor] = student;
    numStuInStor++;
}


//4.6 - prints out all the student info
void Storage::print(){
        
    cout << endl << endl << "STUDENT INFO: " << endl;

    for(int i = 0; i < numStuInStor; i++){
        arrStuPtr[i]->print();
    }

    cout << endl;
}
