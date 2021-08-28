// Find the Length of a String without Using strlen() Function | FACE Prep

#include <iostream>
using namespace std;
int main()
{
    string st;
    getline(cin,st);
    int count=0;
    int i=0;
  while(st[i]!='\0')
  {
      count++;
      i++;
  }
  cout<<count<<endl;


}