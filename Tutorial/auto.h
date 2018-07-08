#ifndef AUTO_H
#define AUTO_H


class Auto
{
public:
    Auto();
    void acelera();

    int getVelocidad() const;
    void setVelocidad(int value);

private:
    int velocidad;
};

#endif // AUTO_H
