#include <iostream>

using namespace std;

//Convierta la clase Polygon a clase abstracta haciendo que el metodo area sea virtual pura.

//Implemente clases que hereden de la clase Polygon: Rectangle, Triangle;
// cada una con sus variables y funciones miembro particulares.

//En la funcion principal, crear un arreglo de punteros de tipo Polygon,
//cada elemento del vector debe contener Rectangles y Triangles. Cambie y/o adicione
//codigo a la clase Polygon de ser necesario.

//Implemente una funcion que recorra el arreglo de punteros e imprima el
//́area de cada elemento(Rectangles y Triangles).

class Polygon {
protected:
    int width, height;
public:
    Polygon(int a, int b) : width(a), height(b) {}

    virtual int area() = 0;

    void printarea() {
        cout << this->area() << '\n';
    }
};

class Rectangle : public Polygon {
public:
    Rectangle(int a, int b) : Polygon(a, b) {}

    int area() override {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    Triangle(int a, int b) : Polygon(a, b) {}

    int area() override {
        return (width * height) / 2;
    }
};


int main() {
    Polygon *lista[3];

    lista[0] = new Triangle(10, 10);
    lista[1] = new Rectangle(5, 6);
    lista[2] = new Triangle(1, 8);

    for (int i = 0; i < 3; i++) {
        lista[i]->printarea();
    }

}
