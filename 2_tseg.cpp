#include<cstdio>
#include<cmath>
int main(){float x,y,x1,y1,z,z1,j,j1,j2;
scanf("%f%f",&x,&y);
if(x<0) x=x*(-1);
if(y<0) y=y*(-1);
j=x+y;
scanf("%f%f%f%f",&x,&y,&x1,&y1);
//printf("%.3f",sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y)));
j1=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
scanf("%f%f%f%f%f%f",&x,&y,&z,&x1,&y1,&z1);
j2=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y)+(z1-z)*(z1-z));
printf("%.3f\n%.3f\n%.3f",j,j1,j2);
//printf("%.3f",sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y)+(z1-z)*(z1-z)));
return 0;}
