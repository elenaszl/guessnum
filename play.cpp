#include <iostream>
using namespace std;

void split(int n,int N[])
{
    N[0] = n / 1000;
    N[1] = (n / 100) % 10;
    N[2]= (n / 10) % 10;
    N[3] = n % 10;
}
bool haszero(int n)
{
    int N[4];
    split(n, N);
    if (N[0] * N[1] * N[2] * N[3] == 0)
        return true;
    else
        return false;
}
bool delete(int n)
{
    if(N[0]==N[1]||N[0]==N[2]||N[0]==N[3]||N[1]==N[2]||N[1]==N[3]||N[2]==N[3])
       return true;
    else 
       return false;
}
int main()
{
  
  cout<<"1102012"<<endl;
  cout<<"宋梓菱"<<endl;
  //-----------------------
  cout<<"demo"<<endl;
  return 1;
}
