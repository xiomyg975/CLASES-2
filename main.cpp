#include <iostream>
#include "vector.h"
using namespace std;
void swap(point &a,point &b){
    point temp=a;
    a=b;
    b=temp;
}
void swap (point *a,point *b){
    point temp=*a;
    *a=*b;
    *b=temp;
    }
int main()
{
    vector v;
    v.print();
    return 0;
}
