//main.cpp
#include <iostream>
#include "idnumber.h"
#include "people.h"
using namespace std;

int main()
{
    idnumber firstId(2345);

    people Emp1("Anuj Laddha", firstId);
    Emp1.printdata();
}

//in idnumber header file
#include <iostream>
#include "idnumber.h"
#include "people.h"
using namespace std;

int main()
{
    idnumber firstId(2345);

    people Emp1("Anuj Laddha", firstId);
    Emp1.printdata();
}


//in idnumber source file
#include <iostream>
#include "idnumber.h"
using namespace std;
idnumber::idnumber(int x)
{
    id_num = x;
}
void idnumber::printIdNum(){
    cout << id_num << endl;
}


//inside people header file
#ifndef PEOPLE_H
#define PEOPLE_H
#include<string>
#include "idnumber.h"
using namespace std;

class people
{
    public:
        people(string n, idnumber id);
        void printdata();
    private:
        string name;
        idnumber Id;

};

#endif // PEOPLE_H

//in people source file
#include <iostream>
#include "people.h"
#include<string>
#include "idnumber.h"

using namespace std;
people::people(string n, idnumber id)
:name(n),Id(id)
{
}
void people::printdata(){
    cout << name << " has an id number : " ;
    Id.printIdNum();
}
