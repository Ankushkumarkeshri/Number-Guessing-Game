// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
int main() {
    // Write C++ code here

    cout<<"==========================================================================================================================="<<endl;
    cout<<"==================================================== Guessing a Number ===================================================="<<endl;
    cout<<"==========================================================================================================================="<<endl<<endl;
    
    srand(time(0));
    int a;
    int s;
    cout<<"enter 1 for easy mode,2 for normal mode and 3 for hard mode and any other key to quit"<<endl;
    cin>>s;
    while(s==1 || s==2 || s==3){
        if(s==1){
            a=rand()%10+1;
            cout<<"you are playing easy mode, numbers range from 1 to 10"<<endl;
        }
        else if(s==2){
            a=rand()%100+1;
            cout<<"you are playing normal mode, numbers range from 1 to 100"<<endl;
        }
        else{
            a=rand()%1000+1;
            cout<<"you are playing hard mode, numbers range from 1 to 1000"<<endl;
        }
        
        int n;
        cout<<"choose a number ";cin>>n;
    
        while(n!=a){
            if(n<a){
                cout<<"your guess is low"<<endl;
            }
            else{
                cout<<"your guess is high"<<endl;
            }
            cout<<"choose again ";
            cin>>n;
        }
        cout<<"you got it, number is : "<<a<<endl;
        
        cout<<"enter 1 for easy mode,2 for normal mode and 3 for hard mode and any other key to quit"<<endl;
        cin>>s;
    }
    
    return 0;
}