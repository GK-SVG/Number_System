#include<iostream>
#include<cmath>
#include<sstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class HEX_BIN
{
  string s;
  int sum=0,cou=1;
  public:
  void getdata (void)
  {
    cout<<"\n enter a hexadecimal number : ";
    cin>>s;
  }

  void convert1(void)
  {
    int i,j=0,k,power;
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

   void count1(void)
   {
     int i,j;
    // j=a;
	 for(i=sum;i>1;i=j)
    {
        j=i/2;
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
	   p[i]=sum%2;
	   j=sum/2;
	   sum=j;
	}
	cout<<"\n BINARY OF DECIMAL is \n\n";
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
  HEX_BIN obj;
  obj.getdata();
  obj.convert1();
  obj.count1();
  obj.convert2();
  return 0;
}