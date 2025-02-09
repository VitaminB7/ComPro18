#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a,Rect b){
    double w=0,h=0,area=0;

    w = min(a.x+a.w,b.x+b.w) - max(a.x,b.x);
    h = min(a.y,b.y) - max(a.y-a.h,b.y-b.h);
    
    area = w*h;
    
    if(area <0) return 0;
    else return area;
}
