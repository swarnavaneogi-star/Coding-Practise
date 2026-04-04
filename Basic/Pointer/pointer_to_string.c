// C program to demonstrate pointer to string 
#include<stdio.h>
int main ()
{
    char str[100];//taking input string from user
    int length=0;
    printf("Enter a string : ");
    scanf("%[^\n]",str); // reading string with spaces
    char *ptr=str; // storing the address of first character of string in pointer ptr
    while(*ptr != '\0')
   {
    printf("%c", *ptr);   // prints current character
    ptr++;                 // moves to next character
   }
   ptr =str; // reset pointer to the start of the string
    printf("\n");
   while(*ptr != '\0')
{
    length++;
    ptr++;
}
printf("Length of the string is : %d\n", length);
printf("\n");
ptr = str;  // reset first!
int i = 1;
while(*ptr != '\0')
{
    printf("Character %d = %c\n", i, *ptr);
    i++;
    ptr++;
}
printf("\n");
ptr = str; 

while(*ptr != '\0')
{
    if(*ptr>='a' && *ptr<='z')
       {        
            *ptr=*ptr-32;
   }
   ptr ++;                 
}
printf("Uppercase String: %s\n", str);

return 0;
}


