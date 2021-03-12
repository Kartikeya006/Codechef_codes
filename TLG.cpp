#include<math.h>
#include<iostream>
using namespace std;
int main()
    {
    int t;
    cin>>t;
    int max=-1,val=0,flag=0;
    while(t--)
        {
        int a,b;
        cin>>a>>b;
        val+=(a-b);
        if(max<abs(val))
        {
            max=abs(val);
            flag=val<0?1:0;   
        }        
    }
        if(flag)
            cout<<"2 "<<max;
        else
            cout<<"1 "<<max;
    return 0;
}
