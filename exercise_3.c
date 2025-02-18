#include <stdio.h>

#define NUM_STUDENTS 5

// Structure to store student data
struct Student {
    char name[50];
    float subj1;
    float subj2;
    float subj3;
    char grade;
};

int main() {
    struct Student students[NUM_STUDENTS];  // Array to store data of 5 students
    float average;

    // Input data for 5 students
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf(" %[^\n]s", students[i].name);  // Reads the whole name including spaces

        printf("Enter the grade for subject 1 (float): ");
        scanf("%f", &students[i].subj1);

        printf("Enter the grade for subject 2 (float): ");
        scanf("%f", &students[i].subj2);

        printf("Enter the grade for subject 3 (float): ");
        scanf("%f", &students[i].subj3);

        // Calculate average
        average = (students[i].subj1 + students[i].subj2 + students[i].subj3) / 3.0;

        // Determine the grade based on average
        if (average >= 90) {
            students[i].grade = 'A';
        } else if (average >= 80) {
            students[i].grade = 'B';
        } else if (average >= 70) {
            students[i].grade = 'C';
        } else if (average >= 60) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }

        printf("\n");
    }

    // Display the data for each student
    printf("\nStudent Information and Averages:\n");
    printf("Name\t\t\tSubject 1\tSubject 2\tSubject 3\tAverage\tGrade\n");
    printf("---------------------------------------------------------------------\n");

    for (int i = 0; i < NUM_STUDENTS; i++) {
        average = (students[i].subj1 + students[i].subj2 + students[i].subj3) / 3.0;
        printf("%-15s\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t%c\n",
               students[i].name, students[i].subj1, students[i].subj2, students[i].subj3, average, students[i].grade);
    }

    return 0;
}
 
