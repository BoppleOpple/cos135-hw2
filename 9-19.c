#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createSquare(char *string, int shapeSize, size_t stringSize) {
	size_t currentIndex = 0;

	for (int i = 0; i < shapeSize; i++) printf("%c", string[currentIndex++ % stringSize]);
	printf("\n");

	for (int i = 0; i < shapeSize - 2; i++) {
		printf("%c%*s%c", string[(currentIndex) % stringSize], shapeSize - 2, "", string[(currentIndex+1) % stringSize]);
		currentIndex += 2;
		printf("\n");
	}

	if (shapeSize > 1) {
		for (int i = 0; i < shapeSize; i++) printf("%c", string[currentIndex++ % stringSize]);
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	if (argc < 3) {
		printf("Expected 2 args: 9-19 <STRING> <SHAPE_SIZE>\n");
		return 1;
	}

	createSquare(argv[1], atoi(argv[2]), strlen(argv[1]));
	
	return 0;
}
