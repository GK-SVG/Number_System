#include<iostream>
#include<cmath>
#include<sstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class OTL_DEC
{
  string s;
  public:
  void getdata (void)
  {
    cout<<"\n enter a octal number : ";
    cin>>s;
  }
  void check (void)
  {
    int i,j=0;
    string s1;
    for(i=0;i<=s.length()-1;i++)
	 {
        s1=s.at(i);
        stringstream ss(s1);
        ss>>j;
        if(j<0 || j>7)
		{
		 cout<<"\n number is not octal \n";
		 exit(0);
        }
      }
  }
  void change(void)
  {
    int i,j=0,k,power,sum=0;
    string s1;
    check();
    for(i=0;i<=s.length()-1;i++)
    {
      s1=s.at(i);
      stringstream ss(s1);
      ss>>j;
      for(k=s.length()-(1+i);k<=s.length()-(1+i);k++)
      {
        power=pow(8,k)*j;
        sum=sum+power;
      }
    }
    cout<<"\n DECIMAL is= "<<sum;
  }
};
int main()
{
  OTL_DEC obj;
  obj.getdata();
  obj.change();
  return 0;
}