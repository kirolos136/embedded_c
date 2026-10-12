#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

typedef struct{
    char first_name[50];
    char last_name[50];
    int age;
    int total_marks;
} Student;

void printStudents(Student* s,int size){
    for(int i=0;i<size;i++){
        printf("student name: %s %s\n",s[i].first_name,s[i].last_name);
        printf("age: %i\n",s[i].age);
        printf("total marks:%d\n\n",s[i].total_marks);
    }
}

void printAverage(Student* s,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=s[i].total_marks;
    }
    printf("Average mark is : %g\n\n",(float)sum/size);
}

void TopHighestmarks(Student* s,int size,int topX){
    if (s == NULL || topX <= 0 || topX > size){
        printf("TopX can't be bigger than size");
        return;
    }

    int max;
    int max_index;
    int* sorted_indices = (int *) malloc(size * sizeof(int));
    int* taken = (int *) calloc(size,sizeof(int)); //to be initialized with zeroes

    for(int i=0;i<size;i++){
        max = INT_MIN;
        max_index = -1;
        for(int j=0;j<size;j++){
            if(s[j].total_marks > max && !taken[j]){
                max = s[j].total_marks;
                max_index = j;
            }
        }
        sorted_indices[i] = max_index;
        taken[max_index] = 1;
    }

    printf("Highest student grades :\n");
    for(int i=0;i<topX;i++){
        printf("student name: %s %s\n",s[sorted_indices[i]].first_name,s[sorted_indices[i]].last_name);
        printf("age: %i\n",s[sorted_indices[i]].age);
        printf("total marks:%d\n\n",s[sorted_indices[i]].total_marks);
    }

    free(sorted_indices);
    free(taken);
}

int main(){
    Student students[5] = {
        {"kirolos", "michel",  23, 80},
        {"mariam",  "adel",    21, 92},
        {"youssef", "samir",   22, 75},
        {"nour",    "hassan",  20, 88},
        {"mina",    "fawzy",   24, 69}
    };

    printStudents(students,5);
    printAverage(students,5);
    TopHighestmarks(students,5,3);

}