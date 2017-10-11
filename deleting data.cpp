#include<stdio.h>
main(){
	
	int a[15],i,n;
	int x,y;
	
printf("How many element:");
scanf("%d",&n);

for(i=1;i<=n;i++){
	scanf("%d",&a[i]);
}

printf("Which element you want to delete:");
scanf("%d",&x);

x=x+1;
/*while(x<=n){
	a[x-1]=a[x];
	x++;
}*/

for(i=x;i<=n;i++){
	a[i-1]=a[i];
}

n=n-1;
printf("the array\n");
for(i=1;i<=n;i++){
	printf("%d\n",a[i]);
}
	
}
