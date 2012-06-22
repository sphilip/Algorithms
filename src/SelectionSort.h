#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

template <class Type>
void SelectionSort(Type array[], unsigned int arraySize)
{
  if (arraySize > 2)
  {

    // Find the minimum value in the array in each iteration
    for (unsigned int i=0; i<arraySize; i++) 
    {
      Type min_value = array[i];
      unsigned int min_index = i;
      for (unsigned int j=i+1; j<arraySize; j++)
      {
        if (array[j] < min_value)
        {
          min_value = array[j];
          min_index = j;
        }
      }

      // Swap the min and current values
      array[min_index] = array[i];
      array[i] = min_value;
    }
  }
}
#endif
