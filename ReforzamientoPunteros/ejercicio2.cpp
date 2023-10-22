#include <iostream>

using namespace std;

void editNumber(int *_a){
    *_a+=1;
}

int main() {
    int a = 10;
    int *ptr_a = &a;

    cout<<a<<endl;
    editNumber(ptr_a);
    cout<<a<<endl;
}