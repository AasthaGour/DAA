#include<iostream>
using namespace std;
int main()
{
	string s;
	int c3=0;
	int c5=0;
	for(int i=1;i<=100;i++)
		{
			c3++;
			c5++;
			s="";
			if(c3==3) 
				{
					s += "fizz";
					c3=0;
				}

			if(c5==5)
			{
				s += "buzz";
				c5=0;
			}
				if(s =="")
					{
						cout<<i<<endl;
					}
					else
						{
							cout<<s<<endl;
						}
		}
		return 0;

}

