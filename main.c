#include <stdio.h>
#include <stdlib.h>

// by Nonthwat zaza @ECP1N Rmuit kkc
// collatz Homework code
// 98.99% code

int st,nd,MM=0,Temp,Za;

int collatz_loop (long int num)
{
    int round=1;
    while(num!=1)
    {
        if((fmod(num,2))==0)
        {
            num=num/2;
        }
        else
        {
            num=(num*3)+1;
        }
        round++;
    }
    return round;
}
int main()
{
    printf("Input 1st starter and 2st ender :\n");
    scanf("%d %d", &st,&nd);

    if((st<1000000)&&(nd<1000000)&&(st>=0)&&(nd>=0)&&(st<=nd))
    {
        for(Za=st;Za<=nd;Za++)
            {
                Temp = collatz_loop(Za);

                if (MM<Temp)
                {
                    MM=Temp;
                }
            }
    printf("%d %d %d",st,nd,MM);
    }

    return 0;
}
