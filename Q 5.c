//WAP to calculate the length of String using printf function.

#include<stdio.h>
#include<string.h>
 int main()
 {
     char str[100];
     int len;
     printf("\nEnter the String : ");
     scanf("%s",str);
     len = strlen(str);
     printf("\nLength of the given string is %d", len);
}
