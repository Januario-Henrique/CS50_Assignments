#include <stdio.h>

int main() {
    char names[5][50]; // Array to store names of 5 students (max 50 characters per name)
    float subj1[5], subj2[5], subj3[5]; // Arrays to store grades for 3 subjects for each student
    char grades[5]; // Array to store letter grades (A, B, C, etc.)
    float averages[5]; // Array to store the average of each student

    // Input student data
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]s", names[i]); // Read name with spaces

        printf("Enter grade for subject 1: ");
        scanf("%f", &subj1[i]);

        printf("Enter grade for subject 2: ");
        scanf("%f", &subj2[i]);

        printf("Enter grade for subject 3: ");
        scanf("%f", &subj3[i]);

        // Calculate average
        averages[i] = (subj1[i] + subj2[i] + subj3[i]) / 3.0;

        // Assign letter grade (example logic, adjust as needed)
        if (averages[i] >= 90) {
            grades[i] = 'A';
        } else if (averages[i] >= 80) {
            grades[i] = 'B';
        } else if (averages[i] >= 70) {
            grades[i] = 'C';
        } else if (averages[i] >= 60) {
            grades[i] = 'D';
        } else {
            grades[i] = 'F';
        }
    }

    // Display student data and averages
    printf("\nStudent Grades and Averages:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", names[i]);
        printf("Subject 1: %.2f\n", subj1[i]);
        printf("Subject 2: %.2f\n", subj2[i]);
        printf("Subject 3: %.2f\n", subj3[i]);
        printf("Average: %.2f\n", averages[i]);
        printf("Grade: %c\n", grades[i]);
        printf("----------------------\n");
    }

    return 0;
}
 
