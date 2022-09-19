#include <stdio.h>

main()
{
	FILE* fp;

	fp = fopen("test.txt", "w+");

	fputs("This is testing for fputs...\n", fp);
	fclose(fp);

	fgets()

}