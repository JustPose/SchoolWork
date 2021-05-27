#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string svardai[4] = {"senelis ", "mama ", "tetis ", "mociute "};
string sjungtukai[3] = {"ir ", "su ", "kartu "};
string sbudvardziai[3] = {"grazus ", "protingas ", "greitas "};
string sdraugai[3] = {"draugu ", "dukra ", "sunus "};

int ivardai = rand() % 4;
int ijungtukai = rand() % 3;
int ibudvardziai = rand() % 3;
int idraugai = rand() % 3;

int main() {
  srand(time(NULL));

  int ivardai = rand() % 4;
  int ijungtukai = rand() % 3;
  int ibudvardziai = rand() % 3;
  int idraugai = rand() % 3;

  cout << svardai[ivardai] << sjungtukai[ijungtukai] << sdraugai[idraugai]
       << sbudvardziai[ibudvardziai] << endl;
}
