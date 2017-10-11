#include<stdio.h>
main(){

int a[20];
int i,n,x,y,z;

printf("Enter how many elements:\n");
scanf("%d",&n);

printf("Enter the elements:\n");

for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

printf("Enter the data to add:");
scanf("%d",&y);

printf("Enter the location :");
scanf("%d",&z);

i=n-1;
while(z<=i){
    a[i+1]=a[i];
    i--;
}
/*for(x=n-1;x>=z;x--){
    a[x+1]=a[x];
}*/
a[z]=y;
n++;
for(i=0;i<n;i++){
    printf("%d\n",a[i]);
}

}
