#include<stdio.h>
#include<string.h>
struct structure{
    int reg;
    char name[50];
    float marks;
};
int main(){
    struct structure stru1;
    
    stru1.reg=1;
    strcpy(stru1.name,"eswar");
    stru1.marks=456;
    printf("Student reg=%d\n",stru1.reg);
    printf("Student name=%s\n",stru1.name);
    printf("Student mark=%f\n",stru1.marks);
    return 0;
}