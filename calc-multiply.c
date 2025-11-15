#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int n,m,i;
    int sum=0;
    int small_number=0,large_number=0;
    int symbol=0;
    printf("enter the numbers:");
    scanf("%d %d",&n,&m);

    if(m<0 & n<0)
    {
        symbol=1;
        n = -n;
        m = -m;
    }
    else
    {
        if(m<0)
        {
            symbol = -1;
            m = -m;
        }

        if(n<0)
        {
            symbol =-1;
            n = -n;
        }    
    }

    
    // int sum=m + m + m+ m+ m;
    if(n<m)
    {
        small_number=n;
        large_number=m;
        
    }
    else
    {
        large_number=n;
        small_number=m;
    }

    printf("large number :%d\n",large_number);
    printf("small nummber :%d\n",small_number);

    for( i=0;i<small_number;i++){  /*n=22250 m=5  then inside loop  first it will be 2250 thenloop runs again  2250 +2250,then the loop runs */
        sum= sum +large_number;
    }
    
    if(symbol< 1)
    {
        sum =-sum;
    } 
    
    printf("%d",sum);
    return 0;
}