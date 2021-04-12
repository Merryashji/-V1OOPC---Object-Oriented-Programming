#include "hwlib.hpp"
#include "rectangle.hpp"
#include "object.hpp"


int main(){

   hwlib::target::window w ( hwlib::xy( 128 , 128 )); 
   hwlib::target::window w1( hwlib::xy( 128 , 128 ));
 
   object object1( w ,12); 
   object object2( w1 ,1);
   
   object1.print();
   object2.print();

   for(;;){w.poll(); w1.poll(); }    
}
 