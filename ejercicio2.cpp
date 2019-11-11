#include <iostream>
int suma(const int &a, int b)
{
    int s;
    s=a+b;
    a=s;
    return s;
}

int main(void)
{
    
    int x,y,z;
    x=5;
    y=3;
    z=suma(x,y);
    std::cout<< "Resultado: " <<z<<"\n";
    std::cout<< "x es: " <<x<<"\n";
    return 0;
}