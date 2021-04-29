#define _USE_MATH_DEFINES // for C++


#include <iostream>
#include <cmath>

using namespace std;



int main()
{
const auto x = 0.335;
const auto y = 0.025;


const auto a = (1+x+(pow(x,2)/2)+(pow(x,3)/3)+(pow(x,4)/4));
const auto b =(x*(cos(pow(x,3)+cos(pow(y,2)))));

cout << "x=" << x << ", y=" << y ;
cout <<"a="<< a << ", b=" << b ;

return 0;
}
