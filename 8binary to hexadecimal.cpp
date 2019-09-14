#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
using namespace std;
class BIN_HEX
{
  string s;
  int sum=0;
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
     cout<<"\n";
  }

  void convert2(void)
  {
    {
    int temp, i = 1, j, r;
    char *p;
    p= new(nothrow) char[50];
    temp = sum;
    while (temp != 0)
    {
        r = temp % 16;
        if (r < 10)
            p[i++] = r + 48;
        else
            p[i++] = r + 55;
        temp = temp / 16;
    }
    cout << "\nHexadecimalof binary is : ";
    for (j = i; j > 0; j--)
	{
	  cout << p[j];
	}
	delete[] p;
	cout<<"\n";
  }
 }
};

int main()
{
  BIN_HEX obj;
  obj.getdata();
  obj.convert1();
  obj.convert2();
  return 0;
}