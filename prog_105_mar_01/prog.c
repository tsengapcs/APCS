#include<stdio.h>

int main()
{
    int len;
    int a;
    scanf("%d", &len);
    int list[len];
    for (a=0; a<len; a++)
        scanf("%d", &list[a]);

    int temp;
    for (int i=1; i<len; i++)
    {
        for (int j=0; j<len-i; j++)
        {
            if (list[j]>list[j+1])
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }

    int lucky;
    int unlucky;
    int best;
    int worst;
    for(a=0; a<len; a++)
    {
        if (a==0 && list[a]>=60)
        {
            lucky=list[a];
            best=1;
            break;
        }

        if (a==len-1 && list[a]<60)
        {
            unlucky=list[a];
            worst=1;
            break;
        }

        if (a>0 && list[a]>=60)
        {
            lucky=list[a];
            unlucky=list[a-1];
            break;
        }
    }

    for (a=0; a<len; a++)
        printf("%d ", list[a]);
    printf("\n");

    if (unlucky!=0)
        printf("%d\n", unlucky);

    if (best==1)
        printf("best case\n");

    if (lucky!=0)
        printf("%d\n", lucky);

    if (worst==1)
        printf("worst case\n");

}