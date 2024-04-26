#include<stdio.h>

int main() // main() 有宣告回傳值格式, 但程式主體卻沒有 return..
{
/*    int len;
    int a;
    scanf("%d", &len);
    int list[len];
    for (a=0; a<len; a++)
        scanf("%d", &list[a]);
*/

    // 讀入學生人數與個別成績
    int len;
	printf("Input number of students: ");
    scanf("%d", &len);
    int list[len];
	printf("Input each student's score: ");
    for (int i=0; i<len; i++)
        scanf("%d", &list[i]);

    // 排序
    for (int i=1; i<len; i++)
    {
        for (int j=0; j<len-i; j++)
        {
            if (list[j]>list[j+1])
            {
                int temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }

    // 印出排序結果
    for (int i=0; i<len; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");

    // 找出最低及格成績
    int idx = -1;
    for (int i=0; i<len; i++)
    {
        if (list[i] >= 60)
        {
            idx = i;
            break;
        }
    }

    if (idx == -1) // 沒人及格
    {
        printf("%d\n", list[len-1]);
        printf("worst case\n");
    }
    else if (idx == 0) // 全部及格
    {
        printf("%d\n", list[idx]);
        printf("best case\n");
    }
    else // 有人及格, 也有人不及格
    {
        printf("%d\n", list[idx-1]); // 最高不及格
        printf("%d\n", list[idx]); // 最低及格

    }



 /*   //---------
    int lucky;
    int unlucky;
    int best;
    int worst;
    for(int a=0; a<len; a++)
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

    for (int a=0; a<len; a++)
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

*/
}
