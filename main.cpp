#include <iostream>

using namespace std;
class Rect
{
    public:
    int x,y,w,h;
    Rect (int x1,int y1,int w1,int h1);
    bool intersect(Rect r);
};

Rect::Rect(int x1,int y1,int w1,int h)
{
    x=x1; y=y1; w=w1;
    this->h=h;
}

bool Rect::intersect(Rect r)
{
       bool th(true);
     if (r.x>w+x) th=false;
     if (y>r.y+r.h) th=false;
     if (r.x+r.w<x) th=false;
     if(y+h<r.y) th=false;
     return th;
}

int main()
{
Rect r1(0,0,6,5),r2(0,7,4,3);
bool b1 = r1.intersect(r2);
 cout << "peresechenie" << b1 <<endl;
bool b2 = r2.intersect(r1);


    cout << "peresechenie" << b2 <<endl;
    return 0;
}
