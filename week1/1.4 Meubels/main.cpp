#include "meubels.hpp"
#include "furniture.hpp"

int main(){
    stool s1 (4,1);
    stool s2 (4,1);
    stool s3 (4,1);
    stool s4 (4,1);
    table t (4, 5.8, 2.2);
    furniture f (s1 , s2 , s3 , s4 , t);
    f.print(); 
    cout << f.makeMoreHipster() << endl;
    f.print(); 
    cout << f.makeMoreHipster() << endl;
    f.print();

} 
