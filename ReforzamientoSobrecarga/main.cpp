#include <iostream>

using namespace std;

class Entero {
private:
    int n;
public:
    Entero(int n) {
        this->n = n;
    }

    Entero operator=(int _n) {
        n = _n;
        return *this;
    }

    Entero operator+(Entero &entero2) const {
        int suma = n + entero2.n;
        return Entero(suma);
    }

    Entero operator+(float x) const {
        int suma = n + x;
        return Entero(suma);
    }

    Entero operator+(string x) const {
        int suma = n + 8;
        return Entero(suma);
    }

    friend ostream& operator<<(ostream &os, const Entero entero) {
        os << "Valor: " << entero.n;
        return os;
    }

};

int main() {
    Entero a = 1;
    Entero b = 2;
    string f = "2.0";
    Entero z(a + f);
    cout << z << endl;

    int _a = 1;
    int _b = 2;
    int _z(_a + _b);
    cout << _z << endl;
}
