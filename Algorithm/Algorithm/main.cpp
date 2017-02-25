#include "utils.h"
#include "Sort/HeapSort.h"
#include "Sort/QuickSort.h"
#include "Sort/MergeSort.h"

using namespace std;

int main() {
    const int len = 2;
	//int arr[len] = {3,21,2,45,3,64,32,1,4,6,6,23,12,34,23,124,46};
    int arr[len] = {21, 2};
	vector<int> array;
	for (int i = 0; i < len; i++) {
		array.push_back(arr[i]);
	}
	printArray(array, 0, array.size() - 1);
	// heapSort(array);
	// quickSort(array, 0, array.size() - 1);
    // mergeSortRecursive(array, 0, array.size());
    mergeSortNonRecursive(array);
    printArray(array, 0, array.size() - 1);
	getchar();
	return 0;
}