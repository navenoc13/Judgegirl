#include <stdio.h>
#include <string.h>
 
char food_name[101][65]={};
char ingredients[101][12][65]={};
int ingre_num[101]={};
char similar[101][65]={};
 
 
int main(){
    int n;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%s",food_name[i]);
        scanf ("%d",&ingre_num[i]);
        for (int j=0;j<ingre_num[i];j++){
            scanf ("%s",ingredients[i][j]);
        }
    }
    int m,id1,id2,index,ans;
    char food1[65],food2[65];
    scanf ("%d",&m);
    for (int i=0;i<m;i++){
        ans=0,index=0;
        scanf ("%s%s",food1,food2);
        //get the id of each food
        for (int j=0;j<n;j++){
            if (!strcmp(food1,food_name[j]))id1=j;
            if (!strcmp(food2,food_name[j]))id2=j;
        }
        for (int j=0;j<ingre_num[id1];j++){
            for (int k =0;k<ingre_num[id2];k++){
                if (!strcmp(ingredients[id1][j],ingredients[id2][k])){
                    strcpy(similar[index],ingredients[id1][j]);
                    index++;
                    ans=1;
                }
            }
        }
        //no similar, no need sort, print nothing, return 0
        if (ans==0){
            printf ("nothing\n");
            continue;
        }
        //sorting
        else{
            //bubble sort
            char temp[65];
              for (int x=index-2;x>=0;x--){
                  for (int y=0;y<=x;y++){
                     if (strcmp(similar[y],similar[y+1])>0){
                        strcpy(temp,similar[y]);
                        strcpy(similar[y],similar[y+1]);
                          strcpy(similar[y+1],temp);
                       }
                  }
               }
            for (int j=0;j<index;j++){
                printf ("%s",similar[j]); 
                if (j!=index-1)printf (" ");
                else printf ("\n");
            }    
        }
    }
    return 0;
}
