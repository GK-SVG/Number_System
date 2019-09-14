#include<iostream>
#include<cmath>
#include<sstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class HEX_DEC
{
  string s;
  public:
  void getdata (void)
  {
    cout<<"\n enter a hexadecimal number : ";
    cin>>s;
  }

  void change(void)
  {
    int i,j=0,k,power,sum=0;
    string s1;
    char l;
    for(i=0;i<=s.length()-1;i++)
    {
      s1=s.at(i);
      if(s.at(i)=='A' || s.at(i)=='B' || s.at(i)=='C' || s.at(i)=='D' || s.at(i)=='E' || s.at(i)=='F' )
      {
        stringstream ss(s1);
        ss>>l;
        j=(int)l-55;
       for(k=s.length()-(1+i);k<=s.length()-(1+i);k++)
       {
        power=pow(16,k)*j;
        sum=sum+power;
       }
      }
      else
      {
        stringstream ss(s1);
        ss>>j;
        for(k=s.length()-(1+i);k<=s.length()-(1+i);k++)
        {
          power=pow(16,k)*j;
          sum=sum+power;
        }
      }
    }
    cout<<"\n DECIMAL is= "<<sum;
  }
};
int main()
{
  HEX_DEC obj;
  obj.getdata();
  obj.change();
  return 0;
}