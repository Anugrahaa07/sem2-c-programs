#include<stdio.h>
#include<string.h>
int main()
{
    char string1[100],string2[100],string3[100];
    int option;
    printf("STRING HANDLING FUNCTIONS");
    do
    {
        printf("Which string handling function would you like to perform:\n1.String Concatenation\n2.String Copy\n3.String Comparison\n4.String Length\n5.Exit\n ");
        scanf("%d",&option);
       switch(option)
        {
            case 1:
                printf("Enter your first string: ");
                scanf("%s",string1);
                printf("Enter your second string: ");
                scanf("%s",string2);
                strcat(string1, string2);
                printf("The concatenated string is %s\n",string1);
                break;
            case 2:
                printf("Enter your first string: ");
                scanf("%s",string1);
                strcpy(string2, string1);
                printf("The copied string is %s\n",string2);
                break;
            case 3:
                printf("Enter your first string: ");
                scanf("%s",string1);
                printf("Enter your second string: ");
                scanf("%s",string2);
                printf("Enter your third string: ");
                scanf("%s",string3);
                printf("%d\n",strcmp(string1,string2));
                printf("%d\n",strcmp(string1,string3));
                break;
            case 4:
                printf("Enter your first string: ");
                scanf("%s",string1);
                printf("%d\n",strlen(string1));
                break;
            case 5:
                printf("Exiting the program\nThank You!\n");
                break;
            default:
                printf("Invalid choice!\nPlease try again\n");
        }

    } while (option != 5);
    return 0;
}
    
   