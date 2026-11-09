#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i=1;
    char month[13][20] = {
    "",
    "January",
    "February",  
    "March",
    "April", 
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
    };
    while(1) { 
        scanf("%d", &i);
        if (i < -1 || i > 12|| i == 0) {
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            continue;
        }
        if (i== -1){
            break;
        }
        if (i >= 1 && i <= 12) {
        printf("%s\n", month[i]);
        }
    }
    return 0;
}