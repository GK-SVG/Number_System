  //Binary to decimal converter

#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
using namespace std;
class BIN_DEC
{
  string s;
  public:
  void getdata()
  {
     cout<<"enter a binary(1,0) no:";
     cin>>s;
  }
  void check(void)
  {
    int i;
    for(i=0;i<s.length();i++)
    {
      if(s.at(i)!='0' && s.at(i)!='1')
      {
        cout<<"\n number is not binary\n"<<endl;
        exit(0);
      }
    }
  }
  void convert1(void)
  {
     int i,power,sum=0,j;
     check();
     for(i=0;i<=s.length()-1;i++)
     {
        if(s.at(i)=='1')
		{
		  for(j=s.length()-(i+1);j<=s.length()-(i+1);j++)
		  {
		    power= pow(2,j);
		  }
		}
		else
		{
		 power=0;
		}
		sum= power+sum;
     }
     cout<<"\n Decimal of binary is= "<<sum;
  }
};

int main()
{
  BIN_DEC obj;
  obj.getdata();
  obj.convert1();
  return 0;
}
