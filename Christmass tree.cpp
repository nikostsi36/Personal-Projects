#include <iostream>
#include <cstdlib>
#include <windows.h>
#include<ctime>
#define s 40 //size of tree
using namespace std;

int main(){
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int i,j=0,x,y,l=0,m=0,a,b,c,d;
    int sab = (s+1)*2; //stars at bottom
    srand(time(0));
    SetConsoleTextAttribute(hConsole, 14);
    for(b=0; b<s ; b++){
        cout << " ";
    }
    cout << "*\n";
    for(d=0; d<s-1 ; d++){
        cout << " ";
    }
    cout << "***\n";

    for(i=0 ; i < s ; i++){
            if(i==0){
                for(c=0; c<s-2 ; c++) {cout << " ";}
                cout << "*****                 ";
            }
            if(i>1) SetConsoleTextAttribute(hConsole, 10);
        for(x=s; x>i; x--){
            cout << " ";
        }

        for(j=0 ; j < i ; j++){

            a = rand()%10;
            if(j==1 && i==2){
                SetConsoleTextAttribute(hConsole, 14);
                cout << "*";
                SetConsoleTextAttribute(hConsole, 10);
                cout << "*";
            }
            else if(a==0 && i>1){
                SetConsoleTextAttribute(hConsole, 12);
                cout << "o";
                SetConsoleTextAttribute(hConsole, 10);
                cout << "*";
            }
            else if(a==1 && i>1){
                SetConsoleTextAttribute(hConsole, 15);
                cout << "o";
                SetConsoleTextAttribute(hConsole, 10);
                cout << "*";
            }
            else if(a==2||a==3||a==4 && i>1){
                SetConsoleTextAttribute(hConsole, 14);
                cout << "*";
                SetConsoleTextAttribute(hConsole, 10);
                cout << "*";
            }
            else cout << "**";

        }
        cout << "*\n";
    }

    while(l<5){
         SetConsoleTextAttribute(hConsole, 4);
        for(y=1 ; y<=sab ; y++){
            if(y >= 0.4*sab && y<0.6*sab){
                cout << "#";
            }
            else cout << " ";
        }
    cout << "\n";
    l++;
    }
    SetConsoleTextAttribute(hConsole, 15);
}
