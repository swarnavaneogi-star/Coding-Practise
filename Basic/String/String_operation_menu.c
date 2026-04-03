// Menu driven program for string operations
#include<stdio.h>

int main()
{
    int choice, i;
    char str1[100], str2[100];
    
    while(1)
    {
        printf("\n======= STRING OPERATIONS MENU =======\n");
        printf("1. String Concatenation\n");
        printf("2. String Comparison\n");
        printf("3. String Copy\n");
        printf("4. Convert to Uppercase\n");
        printf("5. Convert to Lowercase\n");
        printf("6. Count Vowels and Consonants\n");
        printf("0. Exit\n");
        printf("======================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        
        switch(choice)
        {
            case 1: 
            i=0;
            printf("Enter first string: ");
            scanf(" %[^\n]", str1);
            printf("Enter second string: ");
            scanf(" %[^\n]", str2);
                while(str1[i]!='\0')
                    {
                        i++;
                    }
                int j=0;
                while(str2[j]!='\0')
                    {
                        str1[i]=str2[j];
                        i++;
                        j++;
                    }
                str1[i]='\0';
                printf("Concatenated String: %s\n", str1);
                break;
            case 2: 
            printf("Enter first string: ");
            scanf(" %[^\n]", str1);
            printf("Enter second string: ");
            scanf(" %[^\n]", str2);
                i=0;
                while(str1[i]!='\0' && str2[i]!='\0')
                {
                    if(str1[i]!=str2[i])
                    {
                        break;
                    }
                    i++;
                }
                if(str1[i]=='\0' && str2[i]=='\0')
                {
                    printf("Strings are equal.\n");
                }
                else
                {
                    printf("Strings are not equal.\n");
                }
                break;
            case 3: 
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                i=0;
                while(str1[i]!='\0')
                {
                    str2[i]=str1[i];
                    i++;
                }
                str2[i]='\0';
                printf("Copied String: %s\n", str2);
                break;
            case 4:
            i=0;
            printf("Enter a string: ");
            scanf(" %[^\n]", str1);  
             while(str1[i]!='\0')
                {
                    if(str1[i]>='a' && str1[i]<='z')
                    {
                        str1[i]=str1[i]-32;
                    }
                    i++;
                }
                printf("Uppercase String: %s\n", str1);
                break;
            case 5: 
            i=0;
            printf("Enter a string: ");
            scanf(" %[^\n]", str1);  
                while(str1[i]!='\0')
                {
                    if(str1[i]>='A' && str1[i]<='Z')
                    {
                        str1[i]=str1[i]+32;
                    }
                    i++;
                }
                printf("Lowercase String: %s\n", str1);
                break;
            case 6: 
            printf("Enter a string: ");
            scanf(" %[^\n]", str1);
                int vowels=0, consonants=0;
                while(str1[i]!='\0')
                {
                    if((str1[i]>='A' && str1[i]<='Z') || (str1[i]>='a' && str1[i]<='z'))
                    {
                        if(str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U' ||
                           str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u')
                        {
                            vowels++;
                        }
                        else
                        {
                            consonants++;
                        }
                    }
                    i++;
                }
                printf("Vowels: %d\n", vowels);
                printf("Consonants: %d\n", consonants);
                break;
            case 0:
                printf("Exiting... Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}