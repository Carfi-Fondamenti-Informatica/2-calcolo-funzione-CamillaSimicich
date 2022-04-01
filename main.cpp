#include <iostream>
using namespace std;

int main() {
   float a, b, x, y, z,;
   std::cout << "inserisci quattro numeri reali";
   std::cin >> a >> b >> x >> y ;
   if ((x<0) && (y<=0)){
      z=((a*x)-(b*y));
   }
   else if ((x>=0) && (y<=0)){
      z=((a*x*x)-(b*y));
   }
   else{
      z= ((a*x) + (b*y*y));
   }
     
   return 0;
}
