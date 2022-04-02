#include <iostream>
using namespace std;

int main() {
   float a, b, x, y, z,;
   cout << "inserisci quattro valori reali: a, b, x, y" << endl;
   cin >> a >> b >> x >> y ;
   
   if ((x<0) && (y>0)){
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
