#include<iostream>
using namespace std;
int main ()
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
    return 0;
}