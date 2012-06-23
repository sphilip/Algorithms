#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H 

template<class Type>
void Insert(Type selected, const unsigned int selectedPosition)
{
  for (unsigned int j=selectedPosition-1; j>=0; j--)
  {
    
  }
}

template<class Type>
void InsertionSort(Type array[], const unsigned int arraySize)
{
  if (arraySize > 1)
  {
    for (unsigned int i=0; i<arraySize; i++)
    {
      // *************************
      // instead of writing a new function, the Insert operation will
      //   be embedded here
      // **************************
      // save new element since it will be overwritten
      Type selectedElement = array[i];
      int emptySpot = i;

      // keep shifting elements upwards while those elements are larger
      //   than the element currently being sorted
      while (emptySpot>0 && array[emptySpot-1]>selectedElement)
      {
        array[emptySpot] = array[emptySpot-1];
        emptySpot--;
      }

      // when the loop breaks, the current location is where the element
      //   belongs in the sorted array
      array[emptySpot] = selectedElement;
    }
  }

  else printf("You haven't implemented this yet\n");
}

#endif
