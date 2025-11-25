#include <stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);

    if (marks >= 90)
    {
        printf("CSE");
    }

    else if (marks >= 80)
    {
        printf("SWE");
    }
    
    else
    {
        printf("Sorry!, Not Allow");
    }
  
    return 0;
}

