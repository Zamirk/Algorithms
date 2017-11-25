//X00110033
//Samir Kahvedzic
//IDE Clion 1.2.4

#include <iostream>

using namespace std;

int quickSortDivide(int arrayOfNumbers[], int leftLimit, int rightLimit) {
    int tmp = 0;
    int z = leftLimit;
    int n = rightLimit;

    int pivot = arrayOfNumbers[(leftLimit + rightLimit) / 2];

    //Partitioning the array
    while (z <= n) {
        while (arrayOfNumbers[z] < pivot)
            z++;
        while (arrayOfNumbers[n] > pivot)
            n--;
        if (z <= n) {
            tmp = arrayOfNumbers[z];
            arrayOfNumbers[z] = arrayOfNumbers[n];
            arrayOfNumbers[n] = tmp;
            n--;
            z++;
        }
    };
    return z;
}

void quickSort(int arrayOfNumbers[], int leftLimit, int rightLimit) {
    int pos = quickSortDivide(arrayOfNumbers, leftLimit, rightLimit);
    if (leftLimit < pos - 1) {
        quickSort(arrayOfNumbers, leftLimit, pos - 1);
    }
    if (pos < rightLimit) {
        quickSort(arrayOfNumbers, pos, rightLimit);
    }
}

void merge(int arraySortedInTwoHalves[], int startIndex, int upperBound, int length){
    int z, j, k;

    int indexOne = length - startIndex + 1;
    int indexTwo = upperBound - length;

    //2 Temp arrays
    int* arrayOne = new int[indexOne];
    int* arrayTwo = new int[indexTwo];

    for (z = 0; z < indexOne; z++) {
        arrayOne[z] = arraySortedInTwoHalves[startIndex + z];
    }
    for (j = 0; j < indexTwo; j++) {
        arrayTwo[j] = arraySortedInTwoHalves[length + 1 + j];
    }

    z = 0;
    j = 0;
    k = startIndex;

    while (z < indexOne && j < indexTwo) {
        if (arrayOne[z] <= arrayTwo[j]) {
            arraySortedInTwoHalves[k++] = arrayOne[z++];
        } else {
            arraySortedInTwoHalves[k++] = arrayTwo[j++];
        }
    }

    while (z < indexOne) {
        arraySortedInTwoHalves[k++] = arrayOne[z++];
    }

    //Copying elements from one array to the other
    while (j < indexTwo) {
        arraySortedInTwoHalves[k++] = arrayTwo[j++];
    }

    //Deleting temporary arrays
    delete [] arrayOne, arrayTwo;
}

void mergeSort(int arrayToSort[], int beginning, int length) {
    int num = 0;

    if (length > beginning) {
        num = (beginning + length) / 2;
        mergeSort(arrayToSort, beginning, num);
        mergeSort(arrayToSort, num + 1, length);
        merge(arrayToSort, beginning, length, num);
    }
}

void printArray(int arrayOfNumbers[]){
    cout << "Data: ";
    for(int i=0;i<8;i++) {
        cout << "[" << arrayOfNumbers[i] << "]";
    }
}

int main() {
    int arrayOfNumbers[] = {2, 4, 20, 11 , 1, 9, 14, 4};
    int arrayOfNumbers2[] = {2, 4, 20, 11 , 1, 9, 14, 4};
    cout << "Merge-sort " << endl;
    //Initial
    printArray(arrayOfNumbers);
    cout << endl;
    //Merge Sort
    mergeSort(arrayOfNumbers, 0, 7);
    //After Sort
    printArray(arrayOfNumbers);
    cout << endl;

    cout << "Quick-sort " << endl;
    printArray(arrayOfNumbers2);
    cout << endl;
    quickSort(arrayOfNumbers2 ,0 ,8);
    printArray(arrayOfNumbers2);
    cout << endl;

    system("pause");
    return 0;
}