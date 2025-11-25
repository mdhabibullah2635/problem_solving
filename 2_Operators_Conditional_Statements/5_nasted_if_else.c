#include <stdio.h>
int main()
{
    int money;
    scanf("%d",&money);

    if (money >= 5000)
    {
        printf("Going_Cox_Bazar\n");

        if (money >= 10000)
        {
            printf("Going_SainMartin\n");
        }
        else
        {
            printf("I_will_go_back");
        }

    }

    else
    {
        printf("Not_Going_anywhere");
    }
  
    return 0;
}

