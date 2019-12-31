#include<iostream>
using namespace std;

class Avengers{
  public:
    Avengers(){
      IronMan=0;
    }
  private:
    int IronMan;
friend void AvengersEnemy(Avengers obj);
};

void AvengersEnemy(Avengers obj){
  Avengers Endgame;
  Endgame.IronMan = 3000;
  cout << Endgame.IronMan << endl;
}

int main(void){
  Avengers Cap;
  AvengersEnemy(Cap);
}
