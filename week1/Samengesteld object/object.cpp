#include "hwlib.hpp"
#include "object.hpp"
#include "rectangle.hpp"


void object::print_size(){
    for (int i = 0; i < size; i++){
        v[i].print();
    }
}
    

void object::print(){
   H.print();
   M.print();
   c.draw(w);
   r.print();
   print_size();
}
