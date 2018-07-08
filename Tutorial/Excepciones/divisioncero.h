#ifndef DIVISIONCERO_H
#define DIVISIONCERO_H

#include <stdexcept>


class DivisionCero : public std::runtime_error
{
public:
    DivisionCero();
};

#endif // DIVISIONCERO_H
