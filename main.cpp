//********************************************
// a program to test the grade class
//*******************************************
#include <iostream>
#include <iomanip>
#include "student.h"
using namespace std;

int main() 
{
 int location = 0;
 const int size = 50;
 Student list[size];
 string name;
 float score;

 char answer = 'y';
 cout<<"Would you like to enter data? (y for yes, n for no ) " <<endl;
 cin>>answer;

 while(answer == 'y' && location < size){

 cout << "Enter student name please : " <<endl;
 cin >> name;
 cout<<"Enter student test score please: "<<endl;;
 cin >> score;
 list[location].setName(name);
 list[location].setScore(score);
 location++;
 cout<<"Would you still like to enter data? " << endl;
 cin>>answer;
 
}

float max = 0, min = 100, sum = 0;

cout<< setw(8)<< " Name: "<<setw(8)<<" Score: "<<setw(8)<< "Grades:"<<endl;
for(int i= 0; i < location; i++){
  cout<<setw(6)<<list[i].getName()<<setw(6)
  <<list[i].getScore()<<setw(6)
  <<list[i].getGrade()<<endl;

 sum += list[i].getScore();

 if(list[i].getScore() > max){
   max = list[i].getScore();
 }
 if(list[i].getScore() < min)
  min = list[i].getScore();
}

cout<<"==================Class Statistics=================="<<endl;
 if(location > 0){
   cout<<"The number of student is " << location << endl;
   cout<<"The max score is " << max<< endl;
   cout<<"The min score is " << min<< endl;
   cout<<"The avrage of the student score is " << sum / location << endl;
}
 else{
   cout<<"Thers is no students"<< endl;

 }
 
}


