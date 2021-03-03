#include <stdio.h>
#include <string.h>


void prepareResult(char result[], char fragment[], int start, int end) {
	int index = 0;
	for (int i = start; i <= end; i++) {
		result[index] = fragment[i];
		index++;
	}
}


int getEnd(char string[], int start) {
	int i = 0;
	while (string[i] != '\0') {
		if (string[i] == '>') {
			return i;
		}
		i++;
	}
	return -1;
};


void normalize(char string[]) {
	char result[64];
	int index = 0, i = 0;
	while (string[i] != '\0') {
		if (string[i] == '<') {
			int end = getEnd(string, i);
			if (end != -1) {
				i = end + 1;
			} else {
				result[index] = string[i];
				i++;
				index++;
			}
		} else {
			result[index] = string[i];
			i++;
			index++;
		}
	}
	printf("\nRESULT: %s\n", result);
}


void main() {
	char string[] = "theocsmos <AJE<KNFL >> awjKL";
	normalize(string);
	// printf("Your input string: %s\n", string);
	// printf("Your normalized string: %s\n", normalizedString);

};
