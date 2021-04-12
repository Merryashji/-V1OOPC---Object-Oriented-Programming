#ifndef MEUBELS_HPP
#define MEUBELS_HPP
#include <iostream>
using namespace std;

class stool {
private:
    int n_legs;
    int n_seats;

public:
    stool(int n_legs, int n_seats  ):
    n_legs(n_legs) , n_seats(n_seats){
    }
    void print();
    int poot();
};

class table {
private:
    int   n_legs;
    float length;
    float width;
    
public:
    table( int n_legs , float length , float width ):
    n_legs (n_legs) ,length (length) ,width (width){}
    void print();
    int maak_tafel(int poot1 , int poot2 , int poot3 , int poot4);
};

#endif // MEUBELS_HPP