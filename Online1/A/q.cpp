#include <iostream>
using namespace std;
int main()
{
   int i;
   int h=0;
   int f=0;
   for(int n=0;n<3;n++)
   {
       cin>>i;
       if(i%2==0)
       {
           h++;
       }
      else{
        f++;
      }

   }
   cout<<h<<" "<<f;
}
