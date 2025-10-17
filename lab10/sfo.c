#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char name[61], surname[61], sex[10], id[13];
    int age;
    float gpa;
} Student;

void input(Student *s) {
    scanf("%s %s %s %d %s %f", s->name, s->surname, s->sex, &s->age, s->id, &s->gpa);
}

void print(Student *s) {
    printf("%s %c %s (%d) ID: %s GPA %.2f\n",
           strcmp(s->sex, "Male") == 0 ? "Mr" : "Miss",
           s->name[0], s->surname, s->age, s->id, s->gpa);
}

int cmp(Student *a, Student *b, char type[]) {
    if (tolower(type[0]) == 'n') return strcmp(a->name, b->name) > 0;
    if (tolower(type[0]) == 's') return strcmp(a->surname, b->surname) > 0;
    return strcmp(a->id, b->id) > 0;
}

void sort(Student s[], char type[]) {
    for (int i = 0; i < 20; i++)
        for (int j = i + 1; j < 20; j++)
            if (cmp(&s[i], &s[j], type)) {
                Student t = s[i]; s[i] = s[j]; s[j] = t;
            }
}

int main() {
    Student *s = malloc(20 * sizeof(Student));
    for (int i = 0; i < 20; i++) input(&s[i]);
    char type[10]; scanf("%s", type);
    sort(s, type);
    for (int i = 0; i < 20; i++) print(&s[i]);
    free(s);
}