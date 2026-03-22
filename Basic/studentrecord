#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define FILE_NAME "students.dat"
struct Student {
    int roll;
    char name[50];
    char course[50];
    float marks;
};
struct Student students[MAX];
int count = 0;
void saveToFile();
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void sortStudents();

void pressEnter();

/* ----------------------- MAIN FUNCTION ----------------------- */
int main() {
    int choice;

    loadFromFile();

    while (1) {
        printf("\n========================================\n");
        printf("        STUDENT MANAGEMENT SYSTEM        \n");
        printf("========================================\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Sort Students by Marks\n");
        printf("7. Save & Exit\n");
        printf("----------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                sortStudents();
                break;

            case 7:
                saveToFile();
                printf("\nData saved successfully.\n");
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }

    return 0;
}

/* ----------------------- LOAD FROM FILE ----------------------- */
void loadFromFile() {
    FILE *fp = fopen(FILE_NAME, "rb");

    if (fp == NULL) {
        count = 0;
        return;
    }

    fread(&count, sizeof(int), 1, fp);
    fread(students, sizeof(struct Student), count, fp);

    fclose(fp);
}

/* ----------------------- SAVE TO FILE ----------------------- */
void saveToFile() {
    FILE *fp = fopen(FILE_NAME, "wb");

    if (fp == NULL) {
        printf("Error saving file!\n");
        return;
    }

    fwrite(&count, sizeof(int), 1, fp);
    fwrite(students, sizeof(struct Student), count, fp);

    fclose(fp);
}

/* ----------------------- ADD STUDENT ----------------------- */
void addStudent() {
    if (count >= MAX) {
        printf("\nStudent limit reached!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &students[count].roll);

    printf("Enter Name: ");
    getchar();
    fgets(students[count].name, 50, stdin);
    students[count].name[strcspn(students[count].name, "\n")] = 0;

    printf("Enter Course: ");
    fgets(students[count].course, 50, stdin);
    students[count].course[strcspn(students[count].course, "\n")] = 0;

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    count++;

    printf("\nStudent added successfully!\n");
    pressEnter();
}

/* ----------------------- DISPLAY STUDENTS ----------------------- */
void displayStudents() {
    if (count == 0) {
        printf("\nNo students to display.\n");
        pressEnter();
        return;
    }

    printf("\n----------------------------------------\n");
    printf("Roll\tName\t\tCourse\t\tMarks\n");
    printf("----------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s\t%-10s\t%.2f\n",
               students[i].roll,
               students[i].name,
               students[i].course,
               students[i].marks);
    }

    pressEnter();
}

/* ----------------------- SEARCH STUDENT ----------------------- */
void searchStudent() {
    int roll;
    int found = 0;

    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("\nStudent Found!\n");
            printf("Name   : %s\n", students[i].name);
            printf("Course : %s\n", students[i].course);
            printf("Marks  : %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent not found!\n");
    }

    pressEnter();
}

/* ----------------------- UPDATE STUDENT ----------------------- */
void updateStudent() {
    int roll;
    int found = 0;

    printf("\nEnter roll number to update: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("\nEnter new name: ");
            getchar();
            fgets(students[i].name, 50, stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0;

            printf("Enter new course: ");
            fgets(students[i].course, 50, stdin);
            students[i].course[strcspn(students[i].course, "\n")] = 0;

            printf("Enter new marks: ");
            scanf("%f", &students[i].marks);

            printf("\nStudent updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent not found!\n");
    }

    pressEnter();
}

/* ----------------------- DELETE STUDENT ----------------------- */
void deleteStudent() {
    int roll;
    int found = 0;

    printf("\nEnter roll number to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            printf("\nStudent deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent not found!\n");
    }

    pressEnter();
}

/* ----------------------- SORT STUDENTS ----------------------- */
void sortStudents() {
    struct Student temp;

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (students[i].marks < students[j].marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudents sorted by marks (descending).\n");
    pressEnter();
}

/* ----------------------- PRESS ENTER ----------------------- */
void pressEnter() {
    printf("\nPress Enter to continue...");
    getchar();
    getchar();
}
