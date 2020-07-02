#include <stdio.h>
 
int main ()
{
    int X,Y,x1,y1,x2,y2,dx1,dy1,dx2,dy2,s;
    int i;
    scanf ("%d %d %d %d %d %d %d %d %d %d %d",&X,&Y,&x1,&y1,&x2,&y2,&dx1,&dy1,&dx2,&dy2,&s);
    int a=x1,b=y1;
    int c=x2,d=y2;
    for (i=0;i<s;i++){
        //check same (bounce back) [inside boundary, not bounce top left right bottom]
        if (a == c && b==d && a!=X && a!=1 && b!=Y && b!=1 && c!=X && c!=1 && d!=Y && d!=1){
            int tmp = dx1;
            dx1 = dx2;
            dx2 = tmp;
 
            tmp = dy1;
            dy1 = dy2;
            dy2 = tmp;
 
            a+=dx1;
            b+=dy1;
            c+=dx2;
            d+=dy2;
            continue;
//            printf ("first 1\n");
        }
        if (a == c && b==d){
            //mantul bawah
            if (b==1){
                if (dx1==1 && dy1==-1 && dx2==-1 && dy2==-1){
                    dx1=-1;
                    dy1=1;
                    a+=dx1;
                    b+=dy1;
                    dx2=1;
                    dy2=1;
                    c+=dx2;
                    d+=dy2;
                    continue;
                }
                else if (dx1==-1 && dy1==-1 && dx2==1 && dy2==-1){
                    dx1=1;
                    dy1=1;
                    a+=dx1;
                    b+=dy1;
                    dx2=-1;
                    dy2=1;
                    c+=dx2;
                    d+=dy2;
                    continue;
                }
            }
            //mantul kanan
            else if (a==X){
                if (dx1==1 && dy1==-1 && dx2==1 && dy2==1){
                    dx1=-1;
                    dy1=1;
                    a+=dx1;
                    b+=dy1;
                    dx2=-1;
                    dy2=-1;
                    c+=dx2;
                    d+=dy2;
                    continue;
                }
                else if (dx1==1 && dy1==1 && dx2==1 && dy2==-1){
                    dx1=-1;
                    dy1=-1;
                    a+=dx1;
                    b+=dy1;
                    dx2=-1;
                    dy2=1;
                    c+=dx2;
                    d+=dy2;
                    continue;
                }
            }
            //mantul atas
            else if (b==Y){
                if (dx1==-1 && dy1==1 && dx2==1 && dy2==1){
                    dx1=1;
                    dy1=-1;
                    a+=dx1;
                    b+=dy1;
                    dx2=-1;
                    dy2=-1;
                    c+=dx2;
                    d+=dy2;
                    continue;
                }
                else if (dx1==1 && dy1==1 && dx2==-1 && dy2==1){
                    dx1=-1;
                    dy1=-1;
                    a+=dx1;
                    b+=dy1;
                    dx2=1;
                    dy2=-1;
                    c+=dx2;
                    d+=dy2;
                    continue;
                }
            }
            //mantul kiri
            else if (a==1){
                if (dx1==-1 && dy1==1 && dx2==-1 && dy2==-1){
                    dx1=1;
                    dy1=-1;
                    a+=dx1;
                    b+=dy1;
                    dx2=1;
                    dy2=1;
                    c+=dx2;
                    d+=dy2;
                    continue;
                }
                else if (dx1==-1 && dy1==-1 && dx2==-1 && dy2==1){
                    dx1=1;
                    dy1=1;
                    a+=dx1;
                    b+=dy1;
                    dx2=1;
                    dy2=-1;
                    c+=dx2;
                    d+=dy2;
                    continue;
                }
            }
        }
    // first ball
        //1 1
        else if (dx1==1 && dy1==1){
            if (a==X && b==Y){
                dx1=-1,dy1=-1;
                a+=dx1;
                b+=dy1;
            }
            else if (a+1<=X && b+1<=Y){
                a+=dx1;
                b+=dy1;
            }
            else if (b+1>Y){
                dy1=-1;
                a+=dx1;
                b+=dy1;
            }
            else if (a+1>X){
                dx1=-1;
                a+=dx1;
                b+=dy1;
            }
        }
        //-1 1
        else if (dx1==-1 && dy1==1){
            if (a==1 && b==Y){
                dx1=1,dy1=-1;
                a+=dx1;
                b+=dy1;
            }
            else if (a-1>=1 && b+1<=Y){
                a+=dx1;
                b+=dy1;
//                printf ("first 2\n");
            }
            else if (a-1<1){
                dx1=1;
                a+=dx1;
                b+=dy1;
            }
            else if (b+1>Y){
                dy1=-1;
                a+=dx1;
                b+=dy1;
            }
        }
        //1 -1
        else if (dx1==1 && dy1==-1){
//            printf ("first 3\n");
            if (a==X && b==1){
                dx1=-1,dy1=1;
                a+=dx1;
                b+=dy1;
            }
            else if (a+1<=X && b-1>=1){
                a+=dx1;
                b+=dy1;
            }
            else if (b-1<1){
                dy1=1;
                a+=dx1;
                b+=dy1;
            }
            else if (a+1>X){
                dx1=-1;
                a+=dx1;
                b+=dy1;
            }
 
        }
        //-1 -1
        else if (dx1==-1 && dy1==-1){
//            printf ("first 4\n");
            if (a==1 && b==1){
                dx1=1,dy1=1;
                a+=dx1;
                b+=dy1;
            }
            else if (a-1>=1 && b-1>=1){
                a+=dx1;
                b+=dy1;
            }
            else if (a-1<1){
                dx1=1;
                a+=dx1;
                b+=dy1;
            }
            else if (b-1<1){
                dy1=1;
                a+=dx1;
                b+=dy1;
            }
        }
    //second ball
    //1 1
        if (dx2==1 && dy2==1){
            if (c==X && d==Y){
                dx2=-1,dy2=-1;
                c+=dx2;
                d+=dy2;
            }
            else if (c+1<=X && d+1<=Y){
                c+=dx2;
                d+=dy2;
            }
            else if (d+1>Y){
                dy2=-1;
                c+=dx2;
                d+=dy2;
            }
            else if (c+1>X){
                dx2=-1;
                c+=dx2;
                d+=dy2;
            }    
        }
        //-1 1
        else if (dx2==-1 && dy2==1){
            if (c==1 && d==Y){
                dx2=1,dy2=-1;
                c+=dx2;
                d+=dy2;
            }
            else if (c-1>=1 && d+1<=Y){
                c+=dx2;
                d+=dy2;
            }
            else if (c-1<1){
                dx2=1;
                c+=dx2;
                d+=dy2;
            }
            else if (d+1>Y){
                dy2=-1;
                c+=dx2;
                d+=dy2;
            }
 
        }
        //1 -1
        else if (dx2==1 && dy2==-1){
            if (c==X && d==1){
                dx2=-1,dy2=1;
                c+=dx2;
                d+=dy2;
            }
            else if (c+1<=X && d-1>=1){
                c+=dx2;
                d+=dy2;
            }
            else if (d-1<1){
                dy2=1;
                c+=dx2;
                d+=dy2;
            }
            else if (c+1>X){
                dx2=-1;
                c+=dx2;
                d+=dy2;
            }
 
        }
        //-1 -1
        else if (dx2==-1 && dy2==-1){
            if (c==1 && d==1){
                dx2=1,dy2=1;
                c+=dx2;
                d+=dy2;
            }
            else if (c-1>=1 && d-1>=1){
                c+=dx2;
                d+=dy2;
            }
            else if (c-1<1){
                dx2=1;
                c+=dx2;
                d+=dy2;
            }
            else if (d-1<1){
                dy2=1;
                c+=dx2;
                d+=dy2;
            }
        }
 
//        printf ("[%d] dx1=%d dy1=%d a=%d b=%d\n",i,dx1,dy1,a,b);
//        printf ("[%d] dx2=%d dy2=%d c=%d d=%d\n",i,dx2,dy2,c,d);    
    }
    printf ("%d\n%d\n",a,b);
    printf ("%d\n%d\n",c,d);
    return 0;
}
