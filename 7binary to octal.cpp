#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<sstream>
#include<cmath>
using namespace std;
class BIN_OCT
{
  string s;
  int sum=0;
  int cou=1;
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
     int i,power,j;
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
    // cout<<"\n Decimal of binary is= "<<sum;
  }

  void count1(void)
   {
     int i,j;
    // j=a;
	 for(i=sum;i>1;i=j)
    {
        j=i/8;
        cou++;
    }
    //cout<<"\n cou = "<<cou;
   }
    void convert2(void)
  {
    int i,j;
    int *p;
    p= new (nothrow) int[cou];
    if(p==NULL)
    {
      cout<<"\n memory not allocated \n";
    }
    else
   {
    for(i=0;sum>0;i++)
    {
	   p[i]=sum%8;
	   j=sum/8;
	   sum=j;
	}
	cout<<"\n OCTAL OF BINARY is \n\n";
	for(i=i-1;i>=0;i--)
	{
	  cout<<p[i];
	}
	delete[] p;
   }
   cout<<"\n";
  }
};


int main()
{
  BIN_OCT obj;
  obj.getdata();
  obj.check();
  obj.convert1();
  obj.count1();
  obj.convert2();
  return 0;
}