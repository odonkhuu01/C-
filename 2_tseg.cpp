#include<cstdio>
#include<cmath>
int main(){float x,y,x1,y1,z,z1,j,j1,j2;

scanf("%f%f",&x,&y);
//printf("%.3f",sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y)));
if(x<0 && y<0){  
// Kherew 2 tseg khoyulaa 0-ees baga bol 2lang ni eyreg bolgood ikhiin olood khasaj zaig olokh 
				x=x*(-1);
				y=y*(-1);
				if(y>x) j=y-x;
				  else j=x-y;  }
  
  else{ if(x<0) x=x*(-1); // Ali neg ni surug bol eyreg bolgood nemej zaig olokh
		if(y<0) y=y*(-1);
		j=x+y;}

scanf("%f%f%f%f",&x,&y,&x1,&y1);
//printf("%.3f",sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y)));
j1=sqrt(pow(x1-x,2)+pow(y1-y,2));

scanf("%f%f%f%f%f%f",&x,&y,&z,&x1,&y1,&z1);
//printf("%.3f",sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y)+(z1-z)*(z1-z)));
j2=sqrt(pow(x1-x,2)+pow(y1-y,2)+pow(z1-z,2));
printf("%.3f\n%.3f\n%.3f",j,j1,j2);
return 0;}
