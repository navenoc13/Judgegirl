#include <stdio.h>
#include <assert.h>
 
typedef struct {
    char name[20];
    int id;
    char phone[10];
    float grade[4];
    int birth_year;
    int birth_month;
    int birth_day;
} Student;
 
int main(){
    Student a;
    char file1[80],file2[80];
 
    scanf ("%s %s",file1,file2);
    FILE *fin = fopen (file1,"rb");
    FILE *fout = fopen (file2,"w");
    assert(fin!=NULL);
    assert(fout!=NULL);
    fprintf (fout,"<table border=\"1\">\n");
    fprintf (fout,"<tbody>\n");
    while(fread(&a,sizeof(Student),1,fin)){
        fprintf (fout,"<tr>\n");
        fprintf (fout,"<td>%s</td>\n",a.name);
        fprintf (fout,"<td>%d</td>\n",a.id);
        fprintf (fout,"<td>%s</td>\n",a.phone);
        fprintf (fout,"<td>%f, %f, %f, %f</td>\n",a.grade[0],a.grade[1],a.grade[2],a.grade[3]);
        fprintf (fout,"<td>%d, %d, %d</td>\n",a.birth_year,a.birth_month,a.birth_day);
        fprintf (fout,"</tr>\n");
    }
    fprintf (fout,"</tbody>\n");
    fprintf (fout,"</table>\n");
    fclose(fin);
    fclose(fout);
    return 0;
}