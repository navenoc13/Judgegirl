#include <stdio.h>
 
int abs (int x){
    if (x<0)return -x;
    return x;
}
 
int gcf(int x,int y){
    int k;
    while (x%y!=0){
        k=x%y;
        x = y;
        y = k;
    }
    return y;
}

int lcm(int x,int y){
    int fpb = gcf(x,y);
    return x*y/fpb;
}
 
int main (){
    int a,b,c,d,e,f;
    int cmd;
    int denum1,denum2,num1,num2;
    scanf ("%d %d %d %d %d %d %d",&a,&b,&c,&cmd,&d,&e,&f);
 
    if (a<0)num1 =c*a-b;
    else num1 = c*a+b;
    denum1 = c;
    if (d<0)num2 = d*f-e;
    else num2 = d*f+e;
    denum2 = f;
 
    int up,down,left;
    if (cmd==0){//addition
        if (denum1==denum2){
            up = num1+num2;
            down = denum2;
        }
        else{
            int kpk = lcm(denum1,denum2);
            num1 = kpk/denum1*num1;
            num2 = kpk/denum2*num2;
            up = num1+num2;
            down = kpk;
        }
        left=0;
        if(abs(up)>down){
            left = up/down;
            up = abs(up)%down;
        }
        while (down>up &&up!=1 &&up!=-1){
            int temp= gcf(up,down);
            if (down%temp!=0 || up%temp!=0||temp==1)break;
            down = down/temp;
            up = up/temp;
        }
        if (up/down==1 || up/down==-1){
            if (up/down==1)left=1;
            else if (up/down==-1)left=-1;
            up = 0;
            down = 1;
        }
    }
    else if (cmd==1){//subtraction
        if (denum1==denum2){
            up = num1-num2;
            down = denum2;
        }
        else{
            int kpk = lcm(denum1,denum2);
            num1 = kpk/denum1*num1;
            num2 = kpk/denum2*num2;
            up = num1-num2;
            down = kpk;
        }
        left=0;
        if(abs(up)>down){
            left = up/down;
            up = abs(up)%down;
        }
        while (down>up &&up!=1 &&up!=-1){
            int temp= gcf(up,down);
            if (down%temp!=0 || up%temp!=0||temp==1)break;
            down = down/temp;
            up = up/temp;
        }
        if (up/down==1 || up/down==-1){
            if (up/down==1)left=1;
            else if (up/down==-1)left=-1;
            up = 0;
            down = 1;
        }
    }
    else if (cmd==2){//multiplication
        up = num1*num2;
        down = denum1*denum2;
        left=0;
        if(abs(up)>down){
            left = up/down;
            up = abs(up)%down;
        }
        while (down>up &&up!=1 &&up!=-1){
            int temp= gcf(up,down);
            if (down%temp!=0 || up%temp!=0 || temp==1)break;
            down = down/temp;
            up = up/temp;
        }
        if (up/down==1 || up/down==-1){
            if (up/down==1)left=1;
            else if (up/down==-1)left=-1;
            up = 0;
            down = 1;
        }
    }
    else if (cmd==3){//division
        up = num1*denum2;
        down = denum1*num2;
        if (down<0){
            down*=-1;
            up*=-1;
        }
        left=0;
        if(abs(up)>down){
            left = up/down;
            up = abs(up)%down;
        }
        while (down>up &&up!=1 &&up!=-1){
            int temp= gcf(up,down);
            if (down%temp!=0 || up%temp!=0 || temp==1)break;
            down = down/temp;
            up = up/temp;
        }
        if (up/down==1 || up/down==-1){
            if (up/down==1)left=1;
            else if (up/down==-1)left=-1;
            up = 0;
            down = 1;
        }
    }
    printf ("%d\n%d\n%d\n",left,up,down);
    return 0;
}
