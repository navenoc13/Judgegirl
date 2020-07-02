#include<stdio.h>
 
int main(){
    long long int a,b,c;
    long long int i,ans;
    int count;
    long long int d,e,f,max,min,mid;
    
    scanf("%lld%lld%lld",&a,&b,&c);
    //initialized
    max = -100000;
    min = 100000;
    count = 0;
    
    for(i = -100000; i <= 100000 && count < 3; i++){
        if((i*i*i + i*i*a + i*b + c) == 0){
            count++;//track how many answer we already get so far
            ans = i*-1;
 
            if(count == 1) d = ans;
            else if(count == 2) e = ans;
            else f = ans;
 
            //set max and min
            if(ans > max) max = ans;
            if(ans < min) min = ans;
        }
    }
 
    if(count == 2 && d == 0) mid = b/e;//if one of the answer is zero
    else if(count == 2 && e == 0) mid = b/d;//if one of the answer if zero
    else if(count == 2) mid = c/(d*e);//if only two answer we get
    else if(d == max && e == min || d == min && e == max) mid = f;
    else if(d == max && f == min || d == min && f == max) mid = e;
    else mid = d;
 
    printf("%lld %lld %lld\n",min,mid,max);
    return 0;
}
