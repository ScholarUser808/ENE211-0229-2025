#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare variable
    //DataType VariableName
    char UserName[50];

    printf("Please provide your user name\n"); //output
    scanf("%s", UserName); //input
    printf("Hello %s", UserName); //output
    return 0;
}
