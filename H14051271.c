#include <stdio.h>
#include <stdlib.h>
int RF(int i){
    if(i==0)
       return i;
    if(i==1)
        return i;
    return (RF(i-1) + RF(i-2));//recursive fibonacci
}
int main() {
    int n, sum=0,number=0, i, fb0=0,fb1=1,fib=0,out[30];
    printf("input:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&out[i]);
    }
    //iterative solution
    printf("\n");
    while(number<n)
    {
        if(sum==0)
        {
            fib=fb0;
            if(out[number]==sum)
            {
                number++;
                printf("%d ", RF(sum) );
                printf("%d", fib );
                printf("\n");
            }
            sum++;
        }
        else if(sum==1)
        {
            fib=fb1;
            if(out[number]==sum)
            {
                number++;
                printf("%d ", RF(sum));
                printf("%d", fib );
                printf("\n");
            }
            sum++;
        }
        else
        {
            fib=fb0+fb1;
            fb0=fb1;
            fb1=fib;
            if(out[number]==sum)
            {
                number++;
                printf("%d ", RF(sum));
                printf("%d", fib );
                printf("\n");
            }
            sum++;
        }
    }
    return 0;
}
