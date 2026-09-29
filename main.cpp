#include <iostream>
using namespace std;

int main() {

     float m1,m2,m3,m4,average;
     cout<<"Enter the marks of first subject: ";
     cin>>m1;
     cout<<"Enter the marks of 2nd subject: ";
    cin>>m2;
    cout<<"Enter the marks of 3rd subject: ";
    cin>>m3;
     cout<<"Enter the marks of 4th subject: ";
     cin>>m4;
     average =  (m1+m2+m3+m4 )/4;
     cout<<"average marks=" <<average;
     if (average < 50) {
        cout<<"fail";
        }
        else
        {
            cout<<"pass";
        }
    return 0;
    }