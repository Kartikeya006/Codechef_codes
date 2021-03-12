#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        char id;
        cin>>id;
        if(id == 'B' || id == 'b'){
            cout<<"BattleShip"<<endl;
        }
        else if(id == 'C' || id == 'c'){
            cout<<"Cruiser"<<endl;
        }
        else if(id == 'D'|| id == 'd'){
            cout<<"Destroyer"<<endl;
        }
        else if(id == 'F'|| id == 'f'){
            cout<<"Frigate"<<endl;
        }
    }
    return 0;
}
