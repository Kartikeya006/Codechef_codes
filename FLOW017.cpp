#include<iostream>
using namespace std;
int main(){
    long n,a,b,c,lar,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a>b && a>c){
             lar=b>c?b:c;
            }
        else if(b>a && b>c){
            lar=a>c?a:c;
            }
        else if(c>a && c>b){
            lar=a>b?a:b;
            }
        cout<<lar<<endl;
    } 
    return 0;
}