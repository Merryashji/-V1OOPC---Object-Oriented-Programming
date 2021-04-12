// example:
// declaration of a rectangle object that is contains four line objects

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "line.hpp"
#include "hwlib.hpp"


class filled_rectangle {
private:
    hwlib::window & w;
    int x_start;
    int y_start;
    int end_x;
    int end_y;
    
public:
    filled_rectangle(hwlib::window & w , int x_start , int y_start , int end_x , int end_y):
    w(w), x_start(x_start) , y_start(y_start) , end_x(end_x) , end_y (end_y){}
    
    void print();


};

#endif // RECTANGLE_HPP
