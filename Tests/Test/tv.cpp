#include "tv.h"
#include <iostream>

void seti( ToV &s,int v)
{
    s.i = v;
    std::cout<< s.i <<std::endl;
}

ToV::ToV()
{

}
