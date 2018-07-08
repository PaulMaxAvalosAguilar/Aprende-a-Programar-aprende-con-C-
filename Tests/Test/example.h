#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <string>
#include <memory>

class Example
{
public:
    Example();

    std::unique_ptr<std::string> getA() ;
    void setA(std::unique_ptr<std::string> value);
    void printAgain();

private:
    std::unique_ptr<std::string> a;

};

#endif // EXAMPLE_H
