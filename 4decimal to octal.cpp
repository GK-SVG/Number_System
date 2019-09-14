#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<sstream>
using namespace std;
class DEC_OCT
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
        j=i/8;
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
	   p[i]=a%8;
	   j=a/8;
	   a=j;
	}
	cout<<"\n OCTAL OF DECIMAL is \n\n";
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
  DEC_OCT obj;
  obj.getdata();
  obj.count1();
  obj.convert();
  return 0;
}
