#include <iostream>
double FibonacciRecursivo(double n)
{
    if (n == 1)
        return 1;
    else if( n == 2)
        return 1;
    else
        return FibonacciRecursivo(n-1) + FibonacciRecursivo(n-2);
}
double Fibonacci(double n)
{
    double a = 1;
    double b = 1;
    double x=0;
    for(int i=0; i<n-2; i++){
        x = a + b;
        b = a;
        a = x;
    }
    return x;
}
int main(void)
{
    int valor=60;
    std::cout<<"De forma recursiva para "<<valor<<": " <<FibonacciRecursivo(valor)<<"\n";
    std::cout<<"De forma no recursiva para "<<valor<<": " <<Fibonacci(valor)<<"\n";
    return 0;
}