#include "SelectionSort.h"
#include "InsertionSort.h"
#include <iostream>

using namespace std;

int main()
{
  // unsorted array
  int arr[] = {64,25,12,22,11};

  // print the unsorted array to screen, for comparison sake
  cout << "Unsorted array" << endl;
  cout << arr[0] << "\t" << arr[1] << "\t" << arr[2] << "\t"<< arr[3] << "\t" << arr[4] << "\t" << endl; 
  cout << endl;

  //SelectionSort<int>(arr,5);
  InsertionSort<int>(arr,5);

  cout << "Sorted array" << endl;
  cout << arr[0] << "\t" << arr[1] << "\t" << arr[2] << "\t"<< arr[3] << "\t" << arr[4] << "\t" << endl; 
}
