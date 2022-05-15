#include "MovieList.hh"
#include <algorithm>
#include <chrono>
#include <string>
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using namespace std::chrono;

int main(){
  std::string name = "test.csv";
  MovieList test(name, 2);
  
  Movie A = test.get_movie(0);
  Movie B = test.get_movie(1);

  bool tmp = A.is_bigger(B);
  if(tmp){
    cout << A.get_title() << " " << A.get_rating() << endl;
    cout << B.get_title() << " " << B.get_rating() << endl;
  }
  else if(!tmp){
    cout << B.get_title() << " " << B.get_rating() << endl;
    cout << A.get_title() << " " << A.get_rating() << endl;
  }
}



