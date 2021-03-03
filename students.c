#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 struct Student {
	 int rollNumber;
	 char name[100];
 };


int numberOfStudents = 0;


void displayStudent(struct Student sp) {
	printf("\nStudents Name: %s", sp.name);
	printf("\nStudents Roll NUmber: %d\n", sp.rollNumber);
}


void displayAllStudents(struct Student students[]) {
	printf("\nThese are the all students registered in this school.");
	for (int i = 0; i < numberOfStudents; i++) {
		struct Student student = students[i];
		displayStudent(student);
	}
}


void getStudent(struct Student students[]) {
	struct Student newStudent;
	printf("\nEnter students details:\n");
	printf("\nEnter students name: ");
	fgets(newStudent.name, 100, stdin);
	
	newStudent.name[strlen(newStudent.name) - 1] = ' ';

	printf("\nEnter roll number of the student: ");
	scanf("%d", &(newStudent.rollNumber));

	students[numberOfStudents] = newStudent;

	numberOfStudents += 1;

	printf("\n!!! New Student with name %s was admitted !!!.", newStudent.name);
}


int main() {
	struct Student students[100];
	getStudent(students);
	displayAllStudents(students);
	// printf("\nCurrent number of students in school is: %d\n", numberOfStudents);
}

