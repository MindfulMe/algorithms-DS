#ifndef _TRUESTACK_
#define _TRUESTACK_
#include <string>

class TrueStack
{
public:
    virtual std::string pop() = 0;
    virtual void push(std::string) = 0;
    virtual bool isEmpty() = 0;
};

#endif
