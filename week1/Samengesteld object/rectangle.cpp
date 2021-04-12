// example:
// definition of the functions of a rectangle object

#include "rectangle.hpp"


void filled_rectangle::print() {
    for(  int i = y_start ; i < end_y + 1  ; i++){
        for(  int j = x_start ; j < end_x + 1  ; j++){
            w.write(hwlib::xy(i,j),hwlib::color(0 , 0 , 0 ));
        }
    }
    w.flush();
}
