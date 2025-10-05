#include<iostream>
using namespace std;

int main()
{
    int n;
    cout <<"enter the number of elements";
    cin >>n;

    int x;
    int smallest,largest;
    int sum=0;
    for(int i=1;i<=n;i++){
        cout <<"enter x" <<i <<":";
        cin >>x;

        if(i==1){
            smallest=x;
            largest=x;
        }else{
            if(x<smallest)
                smallest=x;
            if(x>largest)
                largest=x;
        }
        sum+=x;
    }

    double average=(double)sum/n;
    cout <<"\nsmallest:" <<smallest;
    cout <<"\nlargest:" <<largest;
    cout <<"\naverage:" <<average;

    return 0;
}
