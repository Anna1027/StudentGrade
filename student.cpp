//**********************************
// Student class
// Student.cpp file
//*********************************
#include <iostream>
#include "student.h"
#include <string>
using namespace std;


Student::Student(string n, float s )
{
  setName(n);
  setScore(s);
  assignGrade();
}

/*Student::Student()
{
}
*/
float Student::getScore()const{
  return score;
}

string Student::getName()const{
  return name;
}
char Student::getGrade()const{

  return grade;
}

void Student::setScore (float newScore){
   if (newScore >= 0 && newScore <= 100){
     score = newScore;
   }
  else{
    while (newScore < 0 || newScore > 100){
    cout<<"The score is invalid. Please reenter: " <<endl;
    cin>>newScore;
    }
    score = newScore;
   }
    assignGrade();
}

void Student::setName(string newName){
  name = newName;
}

void Student::assignGrade(){

  if (score >= 90){
  grade = 'A';
  }
  else if(score >= 80){
    grade = 'B';
  }
  else if(score >= 70){
    grade = 'C';
  }
  else if(score >= 60){
    grade = 'D';
  }
  else if (score >=  50){
    grade = 'F';
  }
}
