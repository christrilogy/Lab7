#include<iostream>
#include<fstream>
using namespace std;


int main (){
int n = 9, px=n, py=n;
  
  
  for(int x=1; x<=n; x++)
  {
    for(int y=1; y<n*2; y++)
      {
      if(y ==px || y==py)
        printf("*");
        else
        printf(" ");
      }
    px--;
    py++;
    printf("\n");
    
  }

  return 0;
}
