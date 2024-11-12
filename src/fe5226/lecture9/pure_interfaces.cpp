struct IShape
{
    virtual double foo() const = 0;
};

/*
A class containing only pure virtual methods and nothing
else (no methods with a body, no data members) is said to
be a pure interface
*/