#include <iostream>
using namespace std;


class Animal {
public:
    virtual void hacerSonido() {  
        cout << "El animal hace un sonido genérico." << endl;
    }
};


class Perro : public Animal {
public:
    void hacerSonido() override {
        cout << "El perro dice: ¡Guau guau!" << endl;
    }
};


class Gato : public Animal {
public:
    void hacerSonido() override {  
        cout << "El gato dice: ¡Miau miau!" << endl;
    }
};

int main() {
    Animal* animal;  

    Perro perro;
    Gato gato;

    animal = &perro; 
    animal->hacerSonido();  

    animal = &gato;  
    animal->hacerSonido();  

    return 0;
}

