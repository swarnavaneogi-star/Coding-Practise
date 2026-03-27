#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    printf("Enter your choice from given below in given numbers:\n");
    printf("1.Decimal to Binary conversion \n");
    printf("2.Decimal to Octal conversion \n");
    printf("3.Decimal to Hexadecimal conversion \n");
    printf("4.Binary to Decimal conversion \n");
    printf("5.Octal to Decimal conversion \n");
    printf("6.Hexadecimal to Decimal conversion \n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        {
            int n1;
            printf("Enter a number:");
            scanf("%d",&n1);
            int binary[32],i=0;
            while(n1>0)
            {
                binary[i]=n1%2;
                n1=n1/2;
                i++;
            }
            printf("Binary equivalent is:");
            for(int j=i-1;j>=0;j--)
            {
                printf("%d",binary[j]);
            }
            printf("\nThank you for using this program\n");                     
        }
        break ;
        case 2:
        {
            int n2;
            printf("Enter a number ");
            scanf("%d",&n2);
            int octal[32],i=0;
            while(n2>0)
            {
               octal[i]=n2%8;
                n2=n2/8;
                i++;
            }
            printf("Octal equivalent is:");
            for(int j=i-1;j>=0;j--)
            {
                printf("%d",octal[j]);
            }
            printf("\nThank you for using this program\n");                     
        }
        break ;
        case 3:
        {
            int n3;
            printf("Enter a number ");
            scanf("%d",&n3);
            char hexadecimal[32],i=0;
            while(n3>0)
            {
                int rem=n3%16;
                if(rem<10)
                {
                    hexadecimal[i]=rem+48;
                }
                else
                {
                    hexadecimal[i]=rem+55;
                }
                n3=n3/16;
                i++;
            }
            printf("Hexadecimal equivalent is:");
            for(int j=i-1;j>=0;j--)
            {
                printf("%c",hexadecimal[j]);
            }
            printf("\nThank you for using this program\n");
        }
        break ;
        case 4:
        {
            int n4;
            printf("Enter a number ");
            scanf("%d",&n4);
            int rem,i=0,decimal=0;
             while(n4 != 0)
             {
                rem = n4 % 10;                
                decimal += rem * pow(2, i);  
                 n4 = n4 / 10;                  
                  i++;                   
            }
                printf("Decimal equivalent is: %d", decimal);
        }
        break;
        case 5:
        {
            int n5;
            printf("Enter a number ");
            scanf("%d",&n5);
            int rem,i=0,decimal=0;
             while(n5 != 0)
             {
                rem = n5 % 10;                
                decimal += rem * pow(8, i);  
                 n5 = n5 / 10;                  
                  i++;                   
            }
                printf("Decimal equivalent is: %d", decimal);
        }
        break;
        case 6:
        {
            char n6[32];
            printf("Enter a number ");
            scanf("%s",n6);
            int decimal=0;
            for(int i=0;n6[i]!='\0';i++)
            {
                if(n6[i]>='0' && n6[i]<='9')
                {

                    decimal=decimal*16+(n6[i]-48);
                }
                else if(n6[i]>='A' && n6[i]<='F')
                {
                    decimal=decimal*16+(n6[i]-55);
                }
                else if(n6[i]>='a' && n6[i]<='f')
                {
                    decimal=decimal*16+(n6[i]-87);
                }
            }
            printf("Decimal equivalent is: %d", decimal);
        }
        break;
        default:
        {
            printf("Invalid choice !!");            
        }

    }
    return 0;
}