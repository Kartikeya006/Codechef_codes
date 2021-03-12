#include<bits/stdc++.h>
#define arrlen 200000000
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
 int *a=new int[arrlen],size=1,carry=0,num;
	a[0]=1;
cin>>num;
	for( int i=1;i<=num;i++)
	{
		for(int j=0;j<size;j++)
		{  
			a[j]=a[j]*i+carry;
			carry=a[j]/10;
			a[j]=a[j]%10;
		}
			while(carry>0)
			{	a[size]=carry%10;
				carry=carry/10;
				size++;	
			}
	}
	for(int i=size-1;i>=0;i--)
	cout<<a[i];
	cout<<"\n";
    }
	return 0;
}
