#include<iostream>
using namespace std;

int main() {
    //TEMPERATURE DATA
    int temperatures[]={55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 78, 82, 88, 91, 92, 90, 83, 87, 80, 78, 72, 69, 61, 59};
    
    int size = sizeof(temperatures)/sizeof(temperatures[0]);
    int hotDays = 0;
    int pleasantDays = 0;
    int coldDays = 0;
    int sum = 0;
    cout << "DAILY TEMPERATURE CATEGORIES" << endl;
    for(int i=0; i < size; i++){
        int temp = temperatures[i];
        sum += temp;
        cout << "Day" << (i+1) << ": " << temp << " degrees: ";
        if(temp >= 85){
            cout << "Hot day!" << endl;
            hotDays++;
        }
        else if(temp >= 60 && temp < 85){
            cout << "Pleasant day!" << endl;
            pleasantDays++;
        }
        else{
            cout << "Cold day!" << endl;
            coldDays++;
        }
    }
    
    double average = static_cast<double>(sum)/size;
    //DISPLAY SUMMARY
    cout << "\nSUMMARY\n";
    cout << "Hot days: " << hotDays << endl;
    cout << "Pleasant days: " << pleasantDays << endl;
    cout << "Cold days: " << coldDays << endl;
    cout << "Average temperature: " << average << " degrees\n";
    
    return 0;
}
