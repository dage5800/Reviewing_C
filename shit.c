//Day12 Review C
//20220206 By Q. Sun
//exercise of I/O & sizeof
#include <stdio.h>

int main(void) {
	//char array[10] = { "Good" };
	//char* ptr = "Morning";

	//puts("Hello");
	//puts(array);
	//puts(ptr);

	//printf("\n");

	//printf("Hello\n");
	//printf("%s\n",array);
	//printf("%s\n",ptr);

	//char array_c[100] = { 0 };
	//scanf_s("%s", array_c, 100);//space would be used as delimiter
	//printf("%s\n", array_c);// no auto newline

	//gets(array_c);//space could also be output
	//puts(array_c);

	//fgets(array_c, sizeof(array_c), stdin);/*
	//char* fgets(char* str, int n, FILE * stream); fgets will read enter as newline and add \0 after it */
	//printf("%s", array_c);

	char buff[255] = { 0 };

	FILE* stream = NULL;

	errno_t err;

	//Open for read test.txt
	err = fopen_s(&stream, "test.txt", "r");

	if (err == 0) {
		printf("The file 'test.txt' was opened\n");
	}
	else {
		printf("The file 'test.txt' was not opened\n");
	}
	
	if (stream == NULL) { return EOF; } //avoid error C6387
	fgets(buff, 255, stream);
	

	printf("%s\n", buff);//text in stream file doesn't have newline so add /n

	if (stream) {
		err = fclose(stream);
		if (err == 0) {
			printf("The file 'test.txt' was closed\n");
		}
		else {
			printf("Thefile 'test.txt' was not closed\n");
		}
	}

	return 0;
}




