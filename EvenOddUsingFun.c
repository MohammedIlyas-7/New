#include<stdio.h>
int eo(int x);

main()
{

    int a=3,r;
    r=eo(a);

    if(r==0)
        printf("The given number is Even");
    if(r==1)
        printf("The given number is Odd");

}
int eo(int x)
{
    if(x%2==0)
        return 0;
    else
        return 1;
}
