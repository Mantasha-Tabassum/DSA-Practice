/*  *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    *        */


// CODE OF THE PATTERN

#include <iostream>
using namespace std;

 int main()
 {
     int n;
     cin >> n;
     
     for(int i=1; i<=2*n-1; i++)
     {
         int stars = i;
         if(i > n) stars = 2*n - i;
         for(int j=1; j<=stars; j++)
         {
             cout << " * ";
         }
         cout << endl;
     }
     return 0;
 }

 // ANOTHER WAY TO PRINT THE SAME PATTERN

 #include <iostream>
using namespace std;

void print1 (int n)
 {
     for(int i=1; i<=2*n-1; i++)
     {
         int stars = i;
         if(i > n) stars = 2*n - i;
         for(int j=1; j<=stars; j++)
         {
             cout << " * ";
         }
         cout << endl;
     }
 }
 
 int main()
{
   int n;
   cin >> n;
   print1(n);

}