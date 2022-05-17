#include "sorts.hh"
#include <algorithm>
#include <chrono>
#include <string>
#include <iostream>
#include <fstream>

using namespace std::chrono;







int main(){
  std::string name = "projekt2_dane.csv";
  int size = 900000;
  MovieList test(name, size);

  auto start = high_resolution_clock::now();
  //----------------------------------------------------
  //mergesort<MovieList>(&test);
  //quicksort<MovieList>(&test, 0, test.get_len()-1);
  bucketsort(&test);
  //----------------------------------------------------
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  float time = duration.count();
  time = time/1000;
  cout<<"Posortowaned, zajęło to: "<<time<<"sekund."<<endl;


}