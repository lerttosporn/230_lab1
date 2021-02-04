#include<stdio.h>
int main()
{
    int s,i,j;
    scanf("%d",&s);
    int n[s];
    for(i=0; i<s; i++)
    {
        scanf("%d",&n[i]);
    }
    int x=n[0],a=0;
    for(i=0; i<s; i++)
    {
        if(x<n[i])
        {
            x=n[i];
            a=i;
        }
    }
    printf("%d %d",a+1,x);
    return 0;
}
