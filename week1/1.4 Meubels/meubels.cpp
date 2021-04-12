#include "meubels.hpp"
#include "furniture.hpp"
using namespace std;

void stool::print(){
    cout << n_legs << " aantal legs "
    << n_seats << " aantal seats " << endl;
}

int stool::poot(){
    n_legs = n_legs -1 ; 
    return 1;
}

void table::print(){
    cout << n_legs << " aantal legs "
    << length << " length " << width << " witdth "<< endl;
}

int table::maak_tafel(int poot1 , int poot2 , int poot3 , int poot4){
    int sum = poot1 + poot2 + poot3 + poot4 ;
    return sum;
}
int furniture::makeMoreHipster(){
    int x = stoel1.poot();
    int y = stoel2.poot();
    int z = stoel3.poot();
    int w = stoel4.poot();
    int res = tafel.maak_tafel( x , y , z , w);
    return res; 
}

void furniture::print(){
    stoel1.print();
    stoel2.print();
    stoel3.print();
    stoel4.print();
    tafel.print();
}


