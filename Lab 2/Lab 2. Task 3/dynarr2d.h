#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr2d
{
     private:
        int **data;
        int rows, columns;
     public:
        dynArr2d();
        dynArr2d(int, int);
        ~dynArr2d();
        void setValue(int, int, int);
        int getValue(int, int);
};
#endif // DYNARR2D_H_INCLUDED
