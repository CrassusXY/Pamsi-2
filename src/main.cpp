#include "sorts.hh"

using namespace std::chrono;



int main(){
  int n;
  char choice;
  std::string name = "projekt2_dane.csv";

  cout<<"Program realizujacy sortowanie tablicy zawierajacej ranking filmow."<<endl;
  cout<<"Ile filmow chcesz wczytac: ";
  cin>>n;
  MovieList test(name, n);
  cout<<endl<<"Jakiej metody sortowania chcesz uzyc?"<<endl;
  cout<<"QuickSort -> q"<<endl;
  cout<<"BucketSort -> b"<<endl;
  cout<<"MergeSort -> m"<<endl;
  cin>>choice;

  if(choice == 'q'){
    auto start = high_resolution_clock::now();
    quicksort(&test);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    float time = duration.count();
    time = time/1000;
    cout<<"Posortowane, zajęło to: "<<time<<"sekund."<<endl;
    sorted(&test);
  }
  else if(choice == 'b'){
    auto start = high_resolution_clock::now();
    bucketsort(&test);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    float time = duration.count();
    time = time/1000;
    cout<<"Posortowane, zajęło to: "<<time<<"sekund."<<endl;
    sorted(&test);
  }
  else if(choice == 'm'){
    auto start = high_resolution_clock::now();
    mergesort(&test);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    float time = duration.count();
    time = time/1000;
    cout<<"Posortowane, zajęło to: "<<time<<"sekund."<<endl;
    sorted(&test);
  }
  else{
    cout<<"Brak takiej opcji!"<<endl;
  }

}