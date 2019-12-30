//(in main file)
#include <iostream>
#include "people.h"

#include "Birthday.h"
using namespace std;

//int arr[row][col]
int main(void){
    Birthday birthObj(12,12,1998);
    //birthObj.printDate();

    people buckyRoberts("bucky" , birthObj);
    buckyRoberts.printSomethingOut();
}
 
  
//in Birthday header file
#ifndef BIRTHDAY_H
#define BIRTHDAY_H
  
class Birthday{
  public:
    Birthday(int m, int d, int y);
    void printDate();
  private:
    int month;
    int day;
    int year;
}
#endif //BIRTHDAY_H

  
//in Birthday.cpp
#include<iostream>
#include "Birthday.h"

using namespace std;

Birthday::Birthday(int m, int d, int y){
  month = m;
  day = d;
  year = y;
}
  
void Birthday::printDate(){
  cout << month << "/" << day << "/" << year << endl;
}
  
  
//in people header file
#ifndef PEOPLE_H
#define PEOPLE_H
#include<stream>
#include "Birthday.h"

using namespace std;

class people
{
    public:
        people(string x, Birthday bo);
        void printSomethingOut();
    private:
        string name;
        Birthday dateOfBirth;
};

#endif // PEOPLE_H
  
//in people header file
#include "people.h"
#include<iostream>
#include "Birthday.h"
using namespace std;

people::people(string x, Birthday bo):
name(x),dateOfBirth(bo)
{
}

void people::printSomethingOut(){
    cout << name << " was born on ";
    dateOfBirth.printDate();
}
