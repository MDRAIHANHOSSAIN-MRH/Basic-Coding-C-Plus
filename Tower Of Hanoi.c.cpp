
#include<stdio.h>
void TowerofHanoi(int n, char BEG, char AUX, char END)
{
    if(n>=1)
    {
        TowerofHanoi(n-1,BEG,END,AUX);
        printf("\n %c to %c",BEG,END);
        TowerofHanoi(n-1,AUX,BEG,END);

    }
}

int main()
{
    int n;
    printf("Enter Number of Disk: ");
    scanf("%d",&n);

    TowerofHanoi(n,'A','B','C');

    return 0;
}