#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char buffer[15];
	memset(buffer,'-',sizeof(buffer));
	buffer[14] = '\0';
	
    printf("Buffer: %s\n", buffer);
getch();
return 0;
}

