#ifndef SORTS_HH
#define SORTS_HH
#include "movielist.hh"



#endif


//    else{
//      tmp[z] = arr[x];
//      x++;
//      z++;
//    }
//  }
//  while (x <= mid)
//  {
//    tmp[z] = arr[x];
//    x++;
//    z++;
//  }
//
//  while (y <= end)
//  {
//    tmp[z] = arr[y];
//    y++;
//    z++;
//  }
//
//  //sorted(arr, range);
//  for (int i = beg; i <= end; ++i)
//  {
//    arr[i] = tmp[i - beg];
//  }
//}
//
//void MergeSort(MovieList *arr, int beg, int end)
//{
//  if(beg<end){
//    int mid = (beg+end)/2;
//    MergeSort(arr, beg, mid);
//    MergeSort(arr, mid+1, end);
//    Merge(arr, beg, end);
//  }
//}
//
//bool sorted(MovieList *arr, int size)
//{
//  cout<<"--------------------------"<<endl;
//  for(int i = 0; i< size; i++){
//    cout<<arr[i].get_rating()<<endl;
//  }
//  return 1;
//}