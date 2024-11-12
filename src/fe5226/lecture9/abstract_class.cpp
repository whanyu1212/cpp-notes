struct Shape
{
    virtual double foo() const = 0;
    virtual ~Shape() {} // virtual destructor
};
int main()
{
    Shape a; // compile error: can’t instantiate abstract class
}