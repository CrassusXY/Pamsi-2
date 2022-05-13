#include "queue.hh"
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
    Priority_queue test;
    std::string message;
    cout<<endl<<"Co Jan napisał do Ani: ";
    std::getline(cin, message);

    int len=message.length();

    int *randArray = new int[len];
    int *priorityArray = new int[len];

    for(int i=0; i<len; i++){
      randArray[i]=i;
      priorityArray[i]=i;
    }

    std::random_shuffle(randArray, randArray+len);
    cout<<endl;

    cout<<"Co otrzymała Ania: ";
    for(int i=0; i<len; i++){
        int j=randArray[i];
        test.push(priorityArray[j], message[j]);
        cout<<message[j];
    }


    cout<<endl<<endl<<"Po transkrypcji: ";
    test.pop_all();
    cout<<endl;
    return 0;
}



