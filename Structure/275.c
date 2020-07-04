#include <stdio.h>
typedef unsigned long long Set;
void init(Set *set){
    *set = (long long)0;
}
void add(Set *set, int i){
    *set = *set | ((long long)1 << (i-1));
}
void has(Set set, int i){
    if(set & ((long long)1 <<(i-1)))printf("set has %d\n",i);
    else printf ("set does not have %d\n",i);
}
Set setUnion(Set a, Set b){
    return a|b;
}
Set setIntersect(Set a, Set b){
    return a&b;
}
Set setDifference(Set a, Set b){
    return a^b;
}
