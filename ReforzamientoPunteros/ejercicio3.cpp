#include <iostream>

using namespace std;

void editArr(int arr1[]){
    arr1[0] = 8;
}

int main() {
    int lista[4] = {1, 2, 3, 4};
    int *i = lista;
    editArr(lista);
    cout << "hola como estas" << endl;
}
