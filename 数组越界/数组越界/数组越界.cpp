#include <iostream>

int main(int argc, const char * argv[]) {
// insert code here...
int a,*p;
a=100;
p=&a;
printf("a=%d &a=%x &p=%x p=%x *p=%d \n",a,&a,&p,p,*p);
int a[4];
int *p;
a[0]=10;
a[1]=20;
a[2]=30;
a[3]=40;
p=a;
printf("&a[0]=%x &a[1]=%x &a[2]=%x &a[3]=%x p=%x \n",&a[0],&a[1],&a[2],&a[3],p);
printf("a[0]=%d \n",p,p[0]);
return 0;
}