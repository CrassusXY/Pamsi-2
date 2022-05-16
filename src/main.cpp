#include "sorts.hh"
#include <algorithm>
#include <chrono>
#include <string>
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using namespace std::chrono;

template<typename T>
void Merge(T *arr, const int & beg, const int & end)
{
  int mid = (beg+end)/2;
  int range = end - beg;
  Movie *tmp = new Movie[range+1];
  int z = 0; 
  int x = beg;
  int y = mid + 1;
  while(x<=mid && y<=end){
    if (arr->get_movie(x) < arr->get_movie(y)){
      tmp[z] = arr->get_movie(y);
      y++;
      z++;
    }
    else{
      tmp[z] = arr->get_movie(x);
      x++;
      z++;
    }
  }
  while (x <= mid)
  {
    tmp[z] = arr->get_movie(x);
    x++;
    z++;
  }

  while (y <= end)
  {
    tmp[z] = arr->get_movie(y);
    y++;
    z++;
  }

  for (int i = beg; i <= end; ++i)
  {
    arr->set_movie(i, tmp[i-beg]);
  }
}

template<typename T>
void MergeSort(T *arr, int beg, int end)
{
  if(beg<end){
    int mid = (beg+end)/2;
    MergeSort<T>(arr, beg, mid);
    MergeSort<T>(arr, mid+1, end);
    Merge<T>(arr, beg, end);
  }
}

bool sorted(MovieList *arr, int size)
{
  
  for(int i = 0; i< size; i++){
    if(arr->get_movie(i)<arr->get_movie(i+1)){
      return 0;
    }
  }
  return 1;
}




int main(){
  std::string name = "projekt2_dane.csv";
  int size = 99000;
  MovieList test(name, size);
  MergeSort<MovieList>(&test, 0, size-1);
  if(!sorted(&test, size-1)){
    cout<<"zjebany jesteś"<<endl;
  }
  else{
    cout<<"Jeszcze rok i do Tworek"<<endl;
  }
}