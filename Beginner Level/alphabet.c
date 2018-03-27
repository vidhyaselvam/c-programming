#include <stdio.h>
 
int main(void) {
char s;
printf("\n enter character");
scanf("%c",&s);
if((s>='a' && s<='z')||(s>='A' && s<='Z'))
printf("\n alphabet");
else
printf("\n not an alphabet");
	return 0;
}
