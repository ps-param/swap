#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
int n1,n2;
if(argc==1) printf("enter arguments");

else if(argc==3) {
n1=atoi(argv[1]); n2=atoi(argv[2]);
printf("before swap a=%d   b=%d\n",n1,n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("after swap a=%d   b=%d\n",n1,n2);
}
else printf("enter only two numbers\n");
return 0;
}