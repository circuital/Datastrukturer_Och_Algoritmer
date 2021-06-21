#include <array>
#include <iostream>
#include <stdlib.h>
#include <vector>

// 1 Bubble
void bubbleSort(std::array<int, 1000> &a) {

  // with 2 for-loops
  int i, j;
  for (i = 0; i < a.size() - 1; i++) {
    for (j = 0; j < a.size() - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        std::swap(a[j], a[j + 1]);
      }
    }
  }

  // with while-loop
  bool swapped;
  while (true) {
    swapped = false;
    for (int i = 0; i < a.size() - 1; i++) {
      if (a[i] > a[i + 1]) {
        std::swap(a[i], a[i + 1]);
        swapped = true;
      }
    }
    if (!swapped) {
      break;
    }
  }
}

// 2 merge
void merge(std::array<int, 1000> &array, int left, int middle, int right) {
  // size of left array
  int left_size = middle - left + 1;
  // size of right array
  int right_size = right - middle;

  // temp left array
  int left_array[left_size];
  //std::array<int, left_size> left_array;

  // temp right array
  int right_array[right_size];
  //std::array<int, right_size> right_array;

  // Copy data to temp arrays a1 and a2
  for (int i = 0; i < left_size; i++)
    left_array[i] = array[left + i];
  for (int j = 0; j < right_size; j++)
    right_array[j] = array[middle + 1 + j];

  // Merge the temp arrays back into a[l..r]

  // Initial index of first subarray
  int i = 0;

  // Initial index of second subarray
  int j = 0;

  // Initial index of merged subarray
  int k = left;

  while (i < left_size && j < right_size) {
    if (left_array[i] <= right_array[j]) {
      array[k] = left_array[i];
      i++;
    } else {
      array[k] = right_array[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of a1, if there are any
  while (i < left_size) {
    array[k] = left_array[i];
    i++;
    k++;
  }

  // Copy the remaining elements of a2, if there are any
  while (j < right_size) {
    array[k] = right_array[j];
    j++;
    k++;
  }
}

void mergeSort(std::array<int, 1000> &array, int left, int right) {
  if (left >= right) {
    return;
  }
  int middle = left + (right - left) / 2;
  mergeSort(array, left, middle);
  mergeSort(array, middle + 1, right);
  merge(array, left, middle, right);
}

// 3 quick
int partition (std::array<int, 1000> &array, int low, int high)
{
  int pivot = array[high]; // pivot
  int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

  for (int j = low; j <= high - 1; j++)
  {
    // If current element is smaller than the pivot
    if (array[j] < pivot)
    {
      i++; // increment index of smaller element
      std::swap(array[i], array[j]);
    }
  }
  std::swap(array[i + 1], array[high]);
  return (i + 1);
}

void quickSort(std::array<int, 1000> &array, int low, int high)
{
  if (low < high)
  {
    /* pi is partitioning index, arr[p] is now
    at right place */
    int pi = partition(array, low, high);

    // Separately sort elements before
    // partition and after partition
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

// 4 insertion
void insertionSort(std::array<int, 1000> &array){
  int i, key, j;
  for (i = 1; i < array.size(); i++)
  {
    key = array[i];
    j = i - 1;
    while (j >= 0 && array[j] > key)
    {
      array[j + 1] = array[j];
      j = j - 1;
    }
    array[j + 1] = key;
  }
}

// 5 shell
void shellSort(std::array<int, 1000> &array){
  // Start with a big gap, then reduce the gap
  for (int gap = array.size()/2; gap > 0; gap /= 2)
  {
    // Do a gapped insertion sort for this gap size.
    // The first gap elements a[0..gap-1] are already in gapped order
    // keep adding one more element until the entire array is
    // gap sorted
    for (int i = gap; i < array.size(); i += 1)
    {
      // add a[i] to the elements that have been gap sorted
      // save a[i] in temp and make a hole at position i
      int temp = array[i];

      // shift earlier gap-sorted elements up until the correct
      // location for a[i] is found
      int j;
      for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
        array[j] = array[j - gap];

      //  put temp (the original a[i]) in its correct location
      array[j] = temp;
    }
  }
}

// 6 selection
void selectionSort(std::array<int, 1000> &array){
  int i, j, min_idx;

  // One by one move boundary of unsorted subarray
  for (i = 0; i < array.size()-1; i++)
  {
    // Find the minimum element in unsorted array
    min_idx = i;
    for (j = i+1; j < array.size(); j++)
      if (array[j] < array[min_idx])
        min_idx = j;

    // Swap the found minimum element with the first element
    std::swap(array[min_idx], array[i]);
  }
}

int main() {
  std::array<int, 1000> a{};
  for (int i = 0; i < 1000; i++) {
    a[i] = ((rand() % 1000) + 1);
  }

  //bubbleSort(a);
  //mergeSort(a, 0, a.size() -1);
  //quickSort(a, 0, a.size() -1);
  insertionSort(a);
  //shellSort(a);
  //selectionSort(a);

  for (int i : a) {
    std::cout << i << std::endl;
  }
}