#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char** argv) {
  FILE* out = fopen("test.org", "w");
  int i;
  for (i = 1; i <= 14; i++) {
	char name[10];
	sprintf(name, "C-%02d.txt", i);
  	FILE* in = fopen(name, "r");
  	char ch;
  	while ((ch = fgetc(in)) != EOF)
  	  fputc(ch,out);
	fclose(in);
  }
  fclose(out);
  return 0;
}
