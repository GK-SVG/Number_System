#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<sstream>
using namespace std;
class DEC_BIN
{
  int a,cou=1;
  public:
   void getdata(void)
   {
     cout<<"\n enter a DECIMAL number: ";
     cin>>a;
   }

   void count1(void)
   {
     int i,j;
    // j=a;
	 for(i=a;i>1;i=j)
    {
        j=i/2;
        cou++;
    }
    //cout<<"\n cou = "<<cou;
   }

   void convert(void)
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
    for(i=0;a>0;i++)
    {
	   p[i]=a%2;
	   j=a/2;
	   a=j;
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
  DEC_BIN obj;
  obj.getdata();
  obj.count1();
  obj.convert();
  return 0;
}
