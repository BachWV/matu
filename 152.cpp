//
// Created by Charon on 2020/12/14.
//
/*实现RoundTable类（C++）
通过课程进入	题 号:	152	实现RoundTable类（C++）	语言要求：	C++
定义一个Table类和Circle类，
Table类有高度high属性，Circle类有半径 radius属性，类型都为float。
Circle类有GetArea()方法，返回圆的面积。
Table类有GetHigh方法，返回Table的高度。

实现一个RoundTable类，它由Table类和Circle类共同派生出，并拥有color属性
同时实现 char* GetColor方法，返回color的值。

本题中圆周率请取为3.14

最终RoundTable类的使用方法如下所示,在你的代码中除了实现以上三个类，还需加入如下main函数：
int main(){
    float radius,high;
	char color[20];
	cin>>radius>>high>>color;

	RoundTable RT(radius,high,color);
	cout<<"Area:"<<RT.GetArea()<<endl;
	cout<<"High:"<<RT.GetHigh()<<endl;
	cout<<"Color:"<<RT.GetColor()<<endl;
	return 0;
}*/
#include <iostream>
#include <string.h>
#define PI 3.14

using namespace std;
class Table{
public:
    Table(float h){
        high=h;
    }

    float high;

    float GetHigh(){
        return high;
    }
};
class Circle{
public:
    Circle(float r){
        radius=r;
    }

    float radius;

    float GetArea(){
        return radius*radius*PI;
    }
};
class RoundTable: public Circle, public Table{
public:
    char color[100];
    char *GetColor(){
        return color;
    }
    RoundTable(float r,float h,char *c):Table(h),Circle(r){
        strcpy(this->color,c);
    }

};
int main(){
    float radius,high;
    char color[20];
    cin>>radius>>high>>color;

    RoundTable RT(radius,high,color);
    cout<<"Area:"<<RT.GetArea()<<endl;
    cout<<"High:"<<RT.GetHigh()<<endl;
    cout<<"Color:"<<RT.GetColor()<<endl;
    return 0;
}

