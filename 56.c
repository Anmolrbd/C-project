#include <stdio.h>
#include<conio.h>
int main()
{
    unsigned char count;
    for(count=32; count< 255; count+=1)
    {
        printf("  %3d - %c",count,count);
        if(count % 6==0)
            printf("\n");
    }
getch();
    return 0;
   
}

