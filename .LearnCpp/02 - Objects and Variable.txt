include <iostream>

int main() 
{
//An integer is a number that can be written without a fractional component, such as 4, 27, 0, -2, or -12. For short, we can say that x is an integer variable.

    int x; // definition of variable x

    int a, int b; // wrong (compiler error)

    int a, b; // correct

    int a, double b; // wrong (compiler error)

    int a; double b; // correct (but not recommended)

    // correct and recommended (easier to read)
    int a;
    double b;
    return 0;
}
