#include <stdio.h>
int absolute (int x){
    if (x<0)return -x;
    else return x;
}
int min (int x,int y){
    if (x>=y)return y;
    else return x;
}
 
int max (int x,int y){
    if (x>=y)return x;
    else return y;
}
 
//Checking Overlap or Not
int check (int l1,int b1, int r1,int t1,int l2,int b2,int r2,int t2){
    if (l1 > r2 || l2 > r1)
        return 0;
    // If one rectangle is above other
    if (b1 > t2 || b2 > t1)
        return 0;
    return 1;
}
 
int main ()
{
    //in the form of (left,bot,right,up)
    int l1,b1,r1,t1;
    int l2,b2,r2,t2;
    int l3,b3,r3,t3;
 
    scanf ("%d %d %d %d",&l1,&b1,&r1,&t1);
    scanf ("%d %d %d %d",&l2,&b2,&r2,&t2);
    scanf ("%d %d %d %d",&l3,&b3,&r3,&t3);
 
    int area1 = absolute (r1-l1) * absolute (t1-b1);
    int area2 = absolute (r2-l2) * absolute (t2-b2);
    int area3 = absolute (r3-l3) * absolute (t3-b3);
//    printf ("area1 = %d\n",area1);
//    printf ("area2 = %d\n",area2);
//    printf ("area3 = %d\n",area3);
 
    int maxl,maxb,minr,mint;
 
    //Intersection rect1 and rect3
    maxl = max(l1,l3);
    maxb = max(b1,b3);
    minr = min(r1,r3);
    mint = min(t1,t3);
    int area13 = absolute(minr - maxl) * absolute (maxb - mint);
    if (check(l1,b1,r1,t1,l3,b3,r3,t3) == 0)area13=0;
//    printf ("area13 = %d\n",area13);
 
    //Intersection rect2 and rect3
    maxl = max(l2,l3);
    maxb = max(b2,b3);
    minr = min(r2,r3);
    mint = min(t2,t3);
    int area23 = absolute(minr - maxl) * absolute (maxb - mint);
    if (check(l2,b2,r2,t2,l3,b3,r3,t3) == 0)area23=0;
//    printf ("area23 = %d\n",area23);
 
    //Inteserction rect1 and rect2
    maxl = max(l1,l2);
    maxb = max(b1,b2);
    minr = min(r1,r2);
    mint = min(t1,t2);
    int area12 = absolute(minr - maxl) * absolute (maxb - mint);
    if (check(l1,b1,r1,t1,l2,b2,r2,t2) == 0)area12=0;
//    printf ("area12 = %d\n",area12);
 
    maxl = max(maxl,l3);
    maxb = max(maxb,b3);
    minr = min(minr,r3);
    mint = min(mint,t3);
 
    //Total Intersection Area (3 Rect intersect)
    int all_area = absolute(minr - maxl) * absolute (maxb - mint);
    if (area12 == 0 || area23 ==0 || area13 ==0)all_area=0;
//    printf ("Total intersection Area = %d\n",all_area);
 
    int netarea = area1 + area2 + area3 - area12 - area13 -area23 + all_area;
//    printf ("Net area = %d\n",netarea);
 
    printf ("%d\n",netarea);
 
    return 0;
}
