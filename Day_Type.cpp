#include<iostream>
using namespace std;

int main() {

    //TEMPERATURE DATA
    int temperatures[]={65,62,68,74,59,45,41,50,60,67,65,78,82,88,91,92,90,93,87,80,78,79,72,68,61,59};

    int size=sizeof(temperatures)/sizeof(temperatures[0]);
    int hotdays=0;
    int pleasantdays=0;
    int colddays=0;

    cout<<"DAILY TEMPERATURE CATEGORIES\n";
    for(int i=0;i<size;i++){
        int temp = temperatures[i];
        cout<<"day "<<(i+1)<<": "<<temp<<" degrees: ";
        if(temp>=85){
            cout<<"hot day\n";
            hotdays++;
        }
        else if(temp>=60 && temp<=84){
            cout<<"pleasant day\n";
            pleasantdays++;
        }
        else{
            cout<<"cold day\n";
            colddays++;
        }
    }

    //DISPLAY SUMMARY
    cout<<"\nSUMMARY:";
    cout<<"\nhot days: "<<hotdays;
    cout<<"\npleasant days: "<<pleasantdays;
    cout<<"\ncold days: "<<colddays;

    return 0;
}
