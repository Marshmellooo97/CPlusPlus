//
// Created by justi on 11.05.2023.
//
#include <iostream>

template<typename T1, typename T2>
T1 produkt(T1 a, T2 b) {
    return a * b;
}

int produkt(int a, int b) {
    return a * b;
}

double produkt(double a, double b) {
    return a * b;
}

double produkt(double a, int b) {
    return a * b;
}

double produkt(int a, double b){
    return a * b;
}

int main(){
    std::cout << "Generische Funktion" << std::endl;
    std::cout << "Produkt von Int Int: " << produkt(5, 4) <<std::endl;
    std::cout << "Produkt von Int double: " << produkt(5, 2.5) <<std::endl;
    std::cout << "Produkt von Double Int: " << produkt(3.5 , 5) << std::endl;
    std::cout << "Produkt von Double Double: " << produkt(3.5 , 2.5) << std::endl;
    return 0;
}