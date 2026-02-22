#include<stdio.h>

int main()
{
    int hossz,szelesseg;
    printf("Add meg a teglalap hosszat: \n\t");
    scanf("%d",&hossz);
    
    printf("Add meg a teglalap szelesseget: \n\t");
    scanf("%d",&szelesseg);
    
    printf("A teglalap terulete: %d\n",hossz*szelesseg);
    
    return 0;
}
