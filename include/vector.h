#ifndef VECTOR_H
#define VECTOR_H


class vector
{
    public:
        vector();
        vector(vector &o);
        vector(point s,point e);
        void offset(int,int);
        void print();
    private:
        point start,end;

};

#endif // VECTOR_H
