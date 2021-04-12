#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "hwlib.hpp"
#include "rectangle.hpp"
#include<iostream>
#include<vector>

using namespace std;


class object{

private:
    hwlib::window & w;
    int size; 
    line l1 ;
    line l2 ;
    line l3 ;
    line l4 ;
    line l5 ;
    line l6 ;
    line l7 ;
    line l8 ;
    line l9 ;
    line l10 ;
    line l11 ;
    line l12 ;
    line H ;
    line M ;
    hwlib::circle c;
    filled_rectangle r;
    vector <line>  v {l12, l6 , l3 , l9 , l1, l2 , l4, l5, l7, l8, l10, l11 }; 
    
    
    
public:
    object(hwlib::window & w , int size):
    w  (w),
    size(size),
    l1 (  w, 75, 4 , 70, 10  ),
    l2 (  w, 86, 15, 81, 21  ),
    l3 (  w, 90, 30, 85, 30  ),
    l4 (  w, 86, 45, 81, 41  ),
    l5 (  w, 75, 56, 70, 51  ),
    l6 (  w, 60, 60, 60, 55  ),
    l7 (  w, 45, 56, 50, 50  ),
    l8 (  w, 34, 45, 39, 39  ),
    l9 (  w, 30, 30, 35, 30  ),
    l10(  w, 34, 15, 40, 20  ),
    l11(  w, 45, 4 , 50, 10  ),
    l12(  w, 60, 0 , 60, 5   ),
    H  (  w, 59, 29, 47, 22  ),
    M  (  w, 62, 32, 67, 45  ),
    c  ( hwlib::xy(60, 30),30),
    r  (  w, 30, 59, 33, 62  )
    
{}
    
    void print();
    void print_size (); 
    
};



#endif