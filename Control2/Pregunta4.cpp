#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printArr(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void invertIter(int arr[], int tam) {
    for (int i = 0; i < tam / 2; i++) {
        swap(arr[i], arr[tam - 1 - i]);
    }
}

void invertRecFunction(int arr[], int ini, int fin) {
    if (ini >= fin) {
        return;
    }
    swap(arr[ini], arr[fin]);
    invertRecFunction(arr, ini + 1, fin - 1);
}

void invertRec(int arr[], int tam) {
    invertRecFunction(arr,0,tam-1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printArr(arr, n);
    invertIter(arr, n);
    printArr(arr, n);

    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = 5;
    printArr(arr2, n2);
    invertRec(arr2, n2);
    printArr(arr2, n2);
}
