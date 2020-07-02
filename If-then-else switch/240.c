#include <stdio.h>
 
int main (){
    int n;
    int a,b,c,d,e,f,g,h;
    int side12, side13, side14, side23, side24, side34;
    scanf ("%d",&n);
    for (int i = 0 ;i<n;i++){
        scanf ("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
        int side12 = (c-a)*(c-a)+(b-d)*(b-d);
        int side13 = (e-a)*(e-a)+(f-b)*(f-b);
        int side14 = (g-a)*(g-a)+(h-b)*(h-b);
        int side23 = (e-c)*(e-c)+(f-d)*(f-d);
        int side24 = (g-c)*(g-c)+(h-d)*(h-d);
        int side34 = (g-e)*(g-e)+(h-f)*(h-f);
//1        
        if (side12==side13 && side12==side34 &&side12==side24 &&side13==side34 &&side13==side24 &&side24==side34){
            if (side14==side13+side34 &&side23 ==side24+side34)printf("square\n");
            else printf ("diamond\n");
        }
        else if (side12==side34 &&side13==side24 &&side12!=side13 &&side12!=side24 &&side12!=side23 &&side12!=side14 &&side34!=side13 &&side34!=side24&&side34!=side23&&side34!=side14 &&side14==side13+side34 &&side23==side24+side34){
            printf ("rectangle\n");
        }
//2
        else if (side13 ==side14 &&side13==side24 &&side13==side23 &&side14 ==side23 &&side14==side24 &&side23==side24){
            if(side12==side14+side24 && side34==side23 +side24)printf ("square\n");
            else printf ("diamond\n");
        }
        else if (side13==side24 &&side14==side23 &&side13!=side14 &&side13!=side23 &&side13!=side34 &&side13!=side12 &&side24!=side14 &&side24!=side23 &&side24!=side12 &&side24!=side34 &&side12 ==side14 +side24 &&side34==side24 +side34){
            printf ("rectangle\n");
        }
//3
        else if (side14 ==side12 &&side14 ==side23 &&side14 ==side34 &&side12 ==side34 &&side12 ==side23 &&side34 ==side23){
            if(side13==side12 +side23 &&side24 ==side34 +side23)printf ("square\n");
            else printf ("diamond\n");
        }
        else if (side14 == side23 &&side12==side34 &&side14!=side12 &&side14!=side34 &&side14!=side24 &&side14!=side13 &&side23!=side12 &&side23!=side34 &&side23!=side13 &&side23!=side24 &&side24==side23+side34 &&side13 ==side12 +side23){
            printf ("rectangle\n");
        }
        else printf ("other\n");
    }
    return 0;
}
