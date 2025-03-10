#include "logic.h"
#include "util.h"

#define SIZE 10



int main() {
	srand(time(0));

	int* array = new int[] { -1, 2, -3, 4, -5, 6, -7, 8, -9, 10};
	//{7,5,1};

	for (int i = 0; i < SIZE; i++) {
		cout << *(array + i) << " ";
	}
	
	cout << "\n\n" << sum_elems_between_max_and_min(array, SIZE);
	delete[] array;
	return 0;
}