#include <math.h>
#include <string.h>

int calculate_expression(char e[]){
    int a=0, b=0,c=0;
    if (e[0]==45||e[0]==43) b=-1;
    for (int i=0; i<strlen(e); i++){
        if (e[i]!=45&&e[i]!=43){
            c=(c*10)+(e[i]-48);
            if (i==strlen(e)-1 || (e[i+1]==45||e[i+1]==43)){
                if (b==0|| b==2){
                    a+=c;
                    c=0;
                }
                else if(b==1||b==3){
                    a-=c;
                    c=0;
                }
            }
        if (c==0){
            b=-1;
        }
        else if (b==0 || b==2) b=2;
        else if (b==1 || b==3) b=3;
        }
        else{
            if (b==-1){
                if (e[i]==45) b=1;
                else b=0;
            }
            else return -1;
        }
    }
    return a;
}
