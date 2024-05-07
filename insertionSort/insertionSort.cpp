#include <iostream>
using namespace std;



void insertionSort(int arr[],int arrSize);
void displayArr(int arr[], int arrSize);

int main(void) {

	int myArr[] = { 7, 9 , 5, 2, 1 };
	int arrSize = sizeof(myArr) / sizeof(int);

	displayArr(myArr, arrSize);
	
	insertionSort(myArr, arrSize);

	displayArr(myArr, arrSize);



	return 0;

}

void displayArr(int arr[], int arrSize) {
	cout << "\n";
	for (int i = 0; i < arrSize; i++) {

		cout << arr[i] << ", ";

	}

	cout << "\b\b";
}

void insertionSort(int arr[], int arrSize) {
	int key;

	for (int j = 1; j < arrSize; j++) {
		key = arr[j];

		int i = j - 1;

		while (i >= 0 && arr[i] > key) {
			arr[i + 1] = arr[i];
			i--;

		}

		arr[i + 1] = key;

	}


}
