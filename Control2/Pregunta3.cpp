#include <iostream>

using namespace std;

int fiboRec(int n) {
    if (n <= 1) {
        return 1;
    }
    return fiboRec(n - 1) + fiboRec(n - 2);
}

int fiboIter(int n) {
    int n0 = 1;
    int n1 = 1;
    for (int i = 0; i < n - 1; i++) {
        int temp = n0 + n1;
        n0 = n1;
        n1 = temp;
    }
    return n1;
}

int main() {
    cout<<fiboRec(8)<<endl;
    cout<<fiboIter(8)<<endl;
}