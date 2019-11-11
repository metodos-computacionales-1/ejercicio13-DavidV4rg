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
    
    std::cout<< "Tercer resultado " <<resta(q,s)<<"\n";
    
    r=4+resta(q,s);
    std::cout<< "TUbicación de la memoria de r es" <<&r<<std::endl;
    std::cout<< "Ubicación de la memoria de q es" <<&q<<std::endl;
    std::cout<< "Ubicación de la memoria s es" <<&s<<std::endl;
    std::cout<< "El caurto resultado es " <<r<<"\n";
    std::cout<< "Ubicación de la memoria r de nuevo es" <<&r<<std::endl;
    return 0;
}