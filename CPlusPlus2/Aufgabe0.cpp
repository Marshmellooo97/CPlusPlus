//
// Created by justi on 11.05.2023.
//

#include <iostream>

class Zahl {
private:
    int zahl1;
    int zahl2;

public:
    Zahl(int zahl1, int zahl2) {
        set_zahl1(zahl1);
        set_zahl2(zahl2);
        std::cout << "Die Klasse Zahl wurde mit den Folgenden Werten erstellt: Zahl 1: " << zahl1 << " Zahl 2: " << zahl2 << std::endl;

    };
    ~Zahl(){
        std::cout << "Die Klasse Zahl wurde mit den Folgenden Werten zerstört: Zahl 1: " << zahl1 << " Zahl 2: " << zahl2 << std::endl;
    }
    void set_zahl1(int z){
        zahl1 = z;
    }
    void set_zahl2(int z){
        zahl2 = z;
    }
    int get_zahl1(){
        return zahl1;
    }
    int get_zahl2(){
        return zahl2;
    }
    int get_summe(){
        return zahl1 + zahl2;
    }
    int get_produkt(){
        return zahl1 * zahl2;
    }
};

int main() {
    Zahl z(2, 7);
    std::cout << "Summe: " << z.get_summe() << std::endl;
    std::cout << "Produkt: " << z.get_produkt() << std::endl;

    z.set_zahl1(33);
    z.set_zahl2(12);

    std::cout << "Summe: " << z.get_summe() << std::endl;
    std::cout << "Produkt: " << z.get_produkt() << std::endl;

    std::cout << "Zahl1 hat den Wert: " << z.get_zahl1() << std::endl;
    std::cout << "Zahl2 hat den Wert: " << z.get_zahl2() << std::endl;
    return 0;
}