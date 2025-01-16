#include <stdio.h>

int main(){
    // Variables
    char name[] = "Sammy Bouchoucha";
    int course_id = 2271;
    int student_id = 9270;
    int difference = student_id - course_id;

    printf("Name: %s\nCourse ID: %d\nStudent ID: %d\nStudent ID - Course ID is: %d\n", name, course_id, student_id, difference);

    return 0;
}