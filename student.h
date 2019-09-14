//*****************************
// Student class
// the Student.h header file
//****************************
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student{

public:

//consturctors takes two parameters 
Student(string n = " " , float s= 0);

//Student();

float getScore() const;
void setScore(float);
string getName() const;
void setName(string);
char getGrade()const;


private:

 string name;
 float score; 
 char grade;
 void assignGrade();

};

#endif 


