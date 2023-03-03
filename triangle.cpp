#include <iostream>
using namespace std;

int main() {

  int n = 9;
  
  for(int x=1; x<=n; x++)
  {
    for(int y= n - x; y>0; y--)
      {
   cout << " ";
      }
    for (int z=1; z<=x; z++)
      { 
        cout << "* ";
        }
    cout << endl;
  }
    return 0;
 }
