#include <iostream>
#include <cstdlib>
#include <cmath>
#define maxLim 1000000       //change the max limit to find bigger pairs
using namespace std;      //don't overdo it the code is slower than a sea turtle with 2 legs on land
int main(){
    int x=1,y=1,xc,yc;
    for(int i=1 ; i<maxLim ; i++){
        for(int j=1 ; j<i ; j++){
                xc=1;
                yc=1;
                if(i!=j){
                for(x=sqrt(i)+1 ; x>1 ; x--){
                    if(i%x==0&&x!=(i/x)){
                        xc+= (i/x);
                        xc+=x;
                    }
                    else if(i%x==0&&x==(i/x)){
                        xc+=x;
                    }
                }
                for(y=sqrt(j)+1 ; y>1 ; y--){
                    if(j%y==0&&y!=(j/y)){
                        yc+= (j/y);
                        yc+=y;
                    }
                    else if(j%y==0&&y==(j/y)){
                        yc+=y;
                    }
                }
                if(yc==i&&xc==j) {cout << i << " and " << j << " are friends"<< endl;}
            }
            else break;
        }
    }

}
