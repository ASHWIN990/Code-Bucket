#include <stdio.h>
#include <stdlib.h>

int main() {
	#ifdef _WIN32
	    system("cls");
	    printf("Windows\n");
	#elif __linux__
	   system("clear");
	    printf("Linux\n");
	#elif __unix__
	   system("clear");
	    printf("Other unix OS\n");
	#else
	    printf("Unidentified OS\n");
	#endif
	return 0;
}

