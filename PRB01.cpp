#include<iostream>
#include<math.h>
using namespace std;
int prime(long unsigned n);
int main(void)
{
	int test_cases,f=0;
	long unsigned i,p;
	cin>>test_cases;
	while(test_cases--)
	{
		cin>>p;
		f=prime(p);
		if(f==1){
            cout<<"yes"<<endl;
        }
		else{
            cout<<"no"<<endl;
            f = 0;
        }
	}
	return 0;
}
int prime(long unsigned n)
{
	if(n==2)
	return 1;
	if((n==1)||(n%2==0))
	return 0;
	long unsigned limit = (long unsigned)sqrt(n);
	int i;
	for(i=3;i<=limit;i=i+2)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
