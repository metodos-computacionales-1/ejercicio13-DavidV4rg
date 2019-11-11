#include <iostream>
int resta(int a, int b)
{
    int s;
    s=a-b;
    return s;
}
int main(void)
{
    int q=12,s=4,r;
    r=resta(9,3);
    std::cout<< "Primer resutado: " <<r<<"\n";
    std::cout<< "Ubicación de la memoria:" <<&r<<std::endl;
    std::cout<< "segundo resutado: " <<resta(9,3)<<"\n";
    
    std::cout<< "Tercer resultado " <<rest(q,s)<<"\n";
    return 0;
}