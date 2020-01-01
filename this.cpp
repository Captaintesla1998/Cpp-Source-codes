//in main file 

include<iostream>
include "tanya.h"

using namespace std;
int main(){
  tanya ob1;
  ob1.print()
}

//in tanya header file
class tanya{
  public:
    tanya(int);
    void print();
  private:
    int tan;
}


//in cpp tanya 
include "tanya.h"
include<iostream>
using namespace std;

tanya::tanya(int x)
:tan(x)
{
}

void tanya::print(){
  cout << "h = " << h << endl;
  cout << "this->h = " << this->h << endl;
  cout << "(*this).h = " << (*this).h << endl;
}
