/*     *
      * * 
     * * *
    * * * *    */


// CODE OF THE PATTERN

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
	for(int i=0; i<n; i++)
	{
	  for(int j=0; j<n-i-1; j++)
	    {
	        cout << " ";
	    }
	    for(int j=0; j<2*i+1; j++)
	    {
	        cout << "*";
	    }
	    for(int j=0; j<n-i-1; j++)
	    {
	        cout << " ";
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
   for (int i=0; i<n; i++)
   {
      for (int j=0; j<n-i-1; j++)
      {
         cout << " ";
      }
      for(int j=0; j<2*i+1; j++)
      {
          cout << "*";
      }
      for(int j=0; j<n-i-1; j++)
      {
          cout << " ";
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
   for (int i=0; i<n; i++)
   {
      for (int j=0; j<n-i-1; j++)
      {
         cout << " ";
      }
      for(int j=0; j<2*i+1; j++)
      {
          cout << "*";
      }
      for(int j=0; j<n-i-1; j++)
      {
          cout << " ";
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