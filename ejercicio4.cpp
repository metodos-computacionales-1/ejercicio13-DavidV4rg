#include <iostream>
#include <cmath>

int getMax(int a, int b);
double getMax(double x, double y);

int getMax(int a, int b) {
   int resultado;
   if (a > b){
      resultado = a;
}
   else{
      resultado = b;
}
   return resultado; 
}
double getMax(double x, double y){
   double result;
   if (x > y){
   result=x;
}
   else {
   result=y;
}
   return result;
}
int main () {
   int a = 24;
   int b = 12;
   double  x= 34.0;
   double  y=55.34;
   int ja = getMax(a,b);
   double je = getMax(x,y);
   std::cout<<"El valor entero máximo es :" <<ja<<std::endl;
   std::cout<<"El valor double máximo es :"<<je<<std::endl;
   return 0;
}