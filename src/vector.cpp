#include "vector.h"
#include <iostream>

vector::vector(point s,point e)
{
    start=s;
    end=v.end;
}

vector::vector(vector &v)
{
    start=v.start;
    end=v.end;
}
void vector::offset(int x ,int y){
    start.offset(x,y);
    end.offset(x,y);
}
void vector::print(){
    start.print();
    std::cout << "->";
    end.print();
    std::print << std::endl;
}
