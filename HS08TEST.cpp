#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int tran;
	float bal;
	int n;
	cin>>tran>>bal;
	n=tran%5;
	if((tran+0.5)<=bal){
        if(n==0){
		    bal=bal-tran-0.5;
	    }
	}
	cout<<fixed<<setprecision(2)<<bal;
	return 0;
}
