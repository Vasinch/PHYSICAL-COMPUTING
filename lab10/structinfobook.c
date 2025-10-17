#include <stdio.h>

struct student_info{
    char name[60];
    char surname[60];
    char sex[6];
    int age;
    char id[12];
    double gpa;
};

int main(){
    struct student_info s;
    scanf("%s",s.name);
    scanf("%s",s.surname);
    scanf("%s",s.sex);
    scanf("%d",&s.age);
    scanf("%s",s.id);
    scanf("%lf",&s.gpa);
    if (s.sex[0] == 'M'){
        printf("Mr %c %s (%d) ID: %s GPA %.2lf",s.name[0],s.surname,s.age,s.id,s.gpa);
    }
    else {
        printf("Miss %c %s (%d) ID: %s GPA %.2lf",s.name[0],s.surname,s.age,s.id,s.gpa);
    }
    return 0;
}