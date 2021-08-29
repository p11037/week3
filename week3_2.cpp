#include<stdio.h>
main(){

    char a[100];
    int x,y,z;
    scanf("%s",a);

    x = a[0]-48;
    y = a[1]-48;
    z = a[2]-48;

    while(x!=0)    {

    printf("%d.%d.%d",x,y,z);

    x = x*y*z;

    printf(" = %d\n",x);

    z = x%10;
    x/=10;
    y = x%10;
    x/=10;

    }

    printf("%d.%d.%d",x,y,z);

    x = x*y*z;

    printf(" = %d\n",x);

    z = x%10;
    x/=10;
    y = x%10;
    x/=10;

}
