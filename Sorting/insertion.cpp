#include <iostream>
#include <vector>

using namespace std;

// insertion sort works by starting at the second item in the array
// and checking if it is bigger than the previous item
// if so then switch and keep switching until its not bigger than
// the previous item

void insertionSort(int *array, int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = array[i];
        j = i;
        do
        {
            array[j] = array[j - 1];
            j--;
        } while (j > 0 && array[j - 1] > key)
            array[j] = key;
    }
}
