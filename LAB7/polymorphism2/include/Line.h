#ifndef LINE_H
#define LINE_H
#include "Point.h"

class Line : public Shape {
    Point p1;
    Point p2;
    int color;

public:

    Line ( ){
    }
// ------ overloading-------------//

 void set_p1(int _x,int _y){
        p1.setxy(_x,_y);
    }
     void set_p2(int _x,int _y){
        p2.setxy(_x,_y);
    }
    int get_x1(){
    return p1.get_x();
    }
    int get_x2(){
    return p2.get_x();
    }
     int get_y1(){
    return p1.get_y();
    }
    int get_y2(){
    return p2.get_y();
    }
    void setColor(int _color)
    {
        if(color >=0 && color <=15)
        {
            color = _color;
        }
    }
    int getcolor()
    {
        return color;
    }
    void draw(){
        setcolor(getcolor());

	    line(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());

	}
	~Line(){
    }
}; // end line class

#endif // LINE_H
