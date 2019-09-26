//NUMBER SYSTEM PROGRAM WRITTEN BY GAUTAM (MITRC) 

#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<sstream>
#include<string.h>
using namespace std;

//-------------------------------ALL FUNCTIONS ARE DECORAID HERE-------------------------------------------

void binTOdec(void);
void octTOdec(void);
void hexTOdec(void);
void decTObin(void);
void decTOhex(void);
void decTOoct(void);
void binTOoct(void);
void binTOhex(void);
void otlTObin(void);
void hexTObin(void);
void otlTOhex(void);
void hexTOoct(void);

//------------------------------Others to decimal choice function-------------------------------------

void OtoD()
{
  int a;
  cout<<"\n\n";
  cout<<"1.BINARY TO DECIMAL \n";
  cout<<"2.OCTAL TO DECIMAL \n";
  cout<<"3.HEXADECIMAL TO DECIMAL \n";
  cout<<"4.EXIT \n";
  cout<<"enter your choice : ";
  cin>>a;
  switch(a)
  {
    case 1:
        cout<<endl;
    		binTOdec();
        break;
    case 2:
        cout<<endl;
        octTOdec();
        break;
    case 3:
        cout<<endl;
        hexTOdec();
        break;
    case 4:
    cout<<endl;
    exit(0);
    default:
    cout<<"\n invalid input ";
  }

}

//------------------------------------decimal to other choise function----------------------------------------
void DtoO()
{
  int a;
  cout<<"\n\n";
  cout<<"1.DECIMAL TO BINARY \n";
  cout<<"2.DECIMAL TO OCTAL \n";
  cout<<"3.DECIMAL TO HEXADECIMAL \n";
  cout<<"4.EXIT \n";
  cout<<"enter your choice : ";
  cin>>a;
  switch(a)
  {
    case 1:
        cout<<endl;
	      decTObin();
        break;
    case 2:
        cout<<endl;
        decTOoct() ;
        break;
    case 3:
        cout<<endl;
        decTOhex();
        break;
    case 4:
    cout<<endl;
    exit(0);
    default:
    cout<<"\n invalid input ";
  }

}

//------------------------other conversion choise function----------------------------------------------

void OTHERS()
{
  int a;
  cout<<"\n\n";
  cout<<"1.BINARY TO HEXADECIMAL \n";
  cout<<"2.BINARY TO OCTAL \n";
  cout<<"3.HEXADECIMAL TO BINARY \n";
  cout<<"4.OCTAL TO BINARY \n";
  cout<<"5.OCTAL TO HEXADECIMAL \n";
  cout<<"6.HEXADECIMAL TO OCTAL \n";
  cout<<"7.EXIT \n";
  cout<<"enter your choice : ";
  cin>>a;
  switch(a)
  {
    case 1:
        cout<<endl;
        binTOhex();
        break;
    case 2:
        cout<<endl;
        binTOoct();
        break;
    case 3:
        cout<<endl;
        hexTObin();
        break;
    case 4:
        cout<<endl;
        otlTObin();
        break;
    case 5:
        cout<<endl;
        otlTOhex();
        break;
    case 6:
        cout<<endl;
        hexTOoct();
        break;
    case 7:
    cout<<endl;
    exit(0);
    default:
    cout<<"\n invalid input ";
  }
}

//--------------------------------------------------------------------------------------------------------------

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
  void convert(void)
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

 void binTOdec()
 {
  BIN_DEC obj;
  obj.getdata();
  obj.convert();
 }

//----------------------------------------------------------------------------------------------------------------------------

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
  void convert(void)
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
void octTOdec()
{
  OTL_DEC obj;
  obj.getdata();
  obj.convert();
}

//---------------------------------------------------------------------------------------------------------------------------

class HEX_DEC
{
  string s;
  public:
  void getdata (void)
  {
    cout<<"\n enter a hexadecimal number : ";
    cin>>s;
  }

  void convert(void)
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
void hexTOdec()
{
  HEX_DEC obj;
  obj.getdata();
  obj.convert();
}

//---------------------------------------------------------------------------------------------------------------------------

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

void decTObin()
{
  DEC_BIN obj;
  obj.getdata();
  obj.count1();
  obj.convert();
}

//--------------------------------------------------------------------------------------------------------------------------

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

void decTOoct()
{
  DEC_OCT obj;
  obj.getdata();
  obj.count1();
  obj.convert();
}

//--------------------------------------------------------------------------------------------------------------------------

void decTOhex()
{
    int num, temp, i = 1, j, r;
    char *p;
    p= new(nothrow) char[50];
    cout << " Enter a decimal number : ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        r = temp % 16;
        if (r < 10)
            p[i++] = r + 48;
        else
            p[i++] = r + 55;
        temp = temp / 16;
    }
    cout << "\nHexadecimal is : ";
    for (j = i; j > 0; j--)
	{
	  cout << p[j];
	}
	delete[] p;
}

//------------------------------------------------------------------------------------------------------------------------

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
 void binTOoct()
{
  BIN_OCT obj;
  obj.getdata();
  obj.check();
  obj.convert1();
  obj.count1();
  obj.convert2();
}

//-------------------------------------------------------------------------------------------------------------------------

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

};

void binTOhex()
{
  BIN_HEX obj;
  obj.getdata();
  obj.convert1();
  obj.convert2();
}

//---------------------------------------------------------------------------------------------------------------------------
class OTL_BIN
{
  string s;
  int cou=1,sum=0;
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
  void convert1(void)
  {
    int i,j=0,k,power;
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
   // cout<<"\n DECIMAL is= "<<sum;
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
	cout<<"\n BINARY OF OCTAL is \n\n";
	for(i=i-1;i>=0;i--)
	{
	  cout<<p[i];
	}

   }
   delete[] p;
   cout<<"\n";
  }
};

void otlTObin()
{
  OTL_BIN obj;
  obj.getdata();
  obj.convert1();
  obj.count1();
  obj.convert2();
}

//--------------------------------------------------------------------------------------------------------------------------

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

void hexTObin()
{
  HEX_BIN obj;
  obj.getdata();
  obj.convert1();
  obj.count1();
  obj.convert2();
}

//--------------------------------------------------------------------------------------------------------------------------

class HEX_OCT
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

void hexTOoct()
{
  HEX_OCT obj;
  obj.getdata();
  obj.convert1();
  obj.count1();
  obj.convert2();
}
//---------------------------------------------------------------------------------------------------------------------------
class OTL_HEX
{
  string s;
  int sum=0;
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
  void convert1(void)
  {
    int i,j=0,k,power;
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

    void convert2(void)
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
};
void otlTOhex()
{
  OTL_HEX obj;
  obj.getdata();
  obj.convert1();
  obj.convert2();
}

//----------------------------------------------------------------------------------------------------------------------------

int main()
{
 int a;
 cout<<"1.OTHERS TO DECIMAL \n";
 cout<<"2.DECIMAL TO OTHERS \n";
 cout<<"3.OTHER CONVERSION \n";
 cout<<"4.EXIT \n";
 cout<<" Enter your choice : ";
 cin>>a;
 switch(a)
 {
    case 1:
        OtoD();
        break;
    case 2:
        DtoO();
        break;
    case 3:
        OTHERS();
        break;
    case 4:
    exit(0);
    default:
    cout<<"\n invalid input ";
 }
 cout<<"\n \n";

 return 0;
}
//---------------------------------------------------------------------------------------------------------------------------
