#include <iostream>

using namespace std;


int main() {
    int a = 10;
    int b = 5;

    int *ptr_a = &a;
    int *ptr_b = &b;

    cout<<*ptr_a<<" "<<*ptr_b<<endl;

    int *ptr_temp = ptr_a;
    ptr_a = ptr_b;
    ptr_b = ptr_temp;

    cout<<*ptr_a<<" "<<*ptr_b<<endl;
}
