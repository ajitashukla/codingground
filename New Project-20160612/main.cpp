//Implementing the Euclidian Algorithm for GCD of two numbers 

#include<iostream>
using namespace std;

int GCD(int divident, int divisor);
int main()
{
	int a,b;
	cout<<"\nEnter the two numbers: ";
	cin>>a>>b;
	if(a<b)
	{ int t=a;
	  a=b;
	  b=t;
	}
	
	cout<<"\nThe GCD of the two numbers is "<<GCD(a,b)<<"\n";
	
	return 0;
}

int GCD(int divident, int divisor)
{
	int q1, r1, r2;
	q1=divident/divisor;
	r1=divident%divisor;
	if (r1==0)
	{return divisor;
	}
	
	else
	{   
	    r2=r1; 
		while(r1!=0)
		{ 
		   divident=divisor;
		   divisor=r1;
		   q1=divident/divisor;
		   r1=divident%divisor;
		   if (r1!=0)
		   { r2=r1;
		     continue;
		   }
		}
		
		return r2;
		
	}
}


