#include <iostream>
#include "DinamicArray.h"

using namespace std;
int main() {
    Array arr1(3);

    cin>>arr1;
    cout<<arr1<<endl;

    arr1+=4;
    cout<<arr1<<endl;
    arr1+=12;
    cout<<arr1<<endl;

    cout<<arr1--<<endl;

    cout<<arr1<<endl;

}