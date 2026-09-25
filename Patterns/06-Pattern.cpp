/* 1 2 3 4
   1 2 3
   1 2
   1   */

   // CODE OF THE PATTERN
   
 #include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
	for(int i=1; i<=n; i++)
	{
	  for(int j=1; j<=n-i+1; j++)
	    {
	        cout << j << " ";
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
   for (int i=1; i<=n; i++)
   {
      for (int j=1; j<=n-i+1; j++)
      {
         cout << j << " ";
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

// ANOTHER WAY TO PRINT THE SAME PATTERN FOR MULTIPLE TEST CASES

#include <iostream>
using namespace std;

void print1 (int n)
{
   for (int i=1; i<=n; i++)
   {
     for (int j=1; j<=n-i+1; j++)
     {
       cout << j << " ";
     }
       cout << endl;
    }
}
int main()
{
   int t;
   cin >> t;
   for (int i=0; i<t; i++)
   {
      int n;
      cin >> n;
      print1(n);
   }
}