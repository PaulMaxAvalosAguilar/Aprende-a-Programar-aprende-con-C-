#ifndef TV_H
#define TV_H


class ToV
{
    friend void seti(ToV &, int);

public:
    ToV();

private:
    int i;
};

#endif // TV_H
