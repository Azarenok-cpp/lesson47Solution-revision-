#include "logic.h"
#define SIZE 15
int find_max_index(int* array, int size) {
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(array + i) > * (array + max)) {
			max = i;
		}
	}
	return max;
}

int find_min_index(int* array, int size) {
	int min = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(array + i) > * (array + min)) {
			min = i;
		}
	}
	return min;
}
int main() {
	int* array = new int[SIZE];

	int from_index = find_min_index(array, SIZE);
	int to_index = find_min_index(array, SIZE);

	if (from_index > to_index) {
		swap(from_index, to_index);
	}
	int sum = 0;
	for (int i = from_index; i < to_index; i++)
	{
		sum += *(array + i);
	}

	delete[] array;
	return 0;
}