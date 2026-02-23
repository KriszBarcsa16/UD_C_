#include<stdio.h>

int main()
{
    int szam;
    printf("\n\tAdj meg egy szamot ");
    scanf("%d",&szam);
    
    if(szam%2==0)
    {
        printf("\nA szam paros!\n");
    }
    else
    {
        printf("\nA szam paratlan!\n");
    }

        return 0;
}

