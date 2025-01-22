#include<stdio.h>
#include<conio.h>
int main(){
int num = 255;
    int len = 0;
    float val = 1.234567;
    
    printf("Hello World");//normal printing.
    printf("\nHello world\nHow are you?");//using new line format specifier.
    printf("\nHello \"World\", How are you?\n"); //allows to print double quotation.
    printf ("\nHey I got 84.20%% in my final exams\n");//allows to print % sign 
    printf("\nnum in octal format: %o\n", num);//converting the decimal number into octal.
    printf ("\nnum in hexadecimal format(lowercase) : %x\n", num);//converting the decimal number into hexadecimal(lowercase).
    printf ("\nnum in hexadecimal format(uppercase) : %X\n", num);//converting the decimal number into hexadecimal(Uppercase).
    printf ("\nHello world, how are you?\
    I love C programing language.\n");//printing long sentences.
    printf ("\nThe file is store at c:\\files\\word_files\n");//allows to print backslash.
    len = printf ("\nHello\n");
    printf ("\nLength: %d\n", len);//to get total number of printed characters.
    printf ("\nnum (padded): %05d\n", num);//print value with 0 padded in 5 digits number.
    printf ("\nstr1=\"%20s\", str2=\"%-20s\"\n", "Hello", "World");//%20 adds 15spaces infront of hello and 15spaces are added at the right side of the world.
    printf("\nval = %.2f\n", val);//prints upto 2 decimal points
    printf("\nnum = %i \n", num);//works just like %d.
    printf("\nAddress of num is: %p\n", &num);//prints the address of the variable num.
getch();
return 0;
}

