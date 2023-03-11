#include <stdlib.h>  //очистка консоли
#include <unistd.h>

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BeginPlay {
 private:
  vector<string> map_;

 public:
  void CreateMap() {
    string L_cash(15, '.');

    for (int i = 15; i > 0; --i) {
      map_.push_back(L_cash);
    }
  }
  void PrintMap() {
    for (auto it : map_) {
      for (auto it2 : it) {
        cout << it2;
      }
      cout << endl;
    }
  }
};

class Inputs {
 private:
 public:
};

int main() {
  // Inputs inputs;
  BeginPlay begin_play;
  begin_play.CreateMap();
  while (true) {
    system("cls");  // очистка консоли
    begin_play.PrintMap();
    sleep(1);
  }
}