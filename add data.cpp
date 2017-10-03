#include<stdio.h>
main(){
	
	int a[100],x,y,z,i;
	
	printf("Enter the no. of elements:");
	scanf("%d",&x);
	
	printf("Enter the elements:\n");
     
	 for(i=0;i<x;i++){
	 	scanf("%d",&a[i]);
	 }	
	 
	 printf("The array is:\n");
	 
	 for(i=0;i<x;i++){
	 	printf("%d\t",a[i]);
	 }
	 
	 printf("Enter the element to insert:");
	 scanf("%d",&y);
	 
	 printf("Enter the location of the array:");
	 scanf("%d",&z);
	 
	 i=x-1;
	 
	 while(z<=i){
	 	
	 	a[i+1]=a[i];
	 	
	 	i--;
	 }
	 
	 a[z]=y;
	 x++;
	 
	 for(i=0;i<x;i++){
	 	
	 	printf("%d\t",a[i]);
	 }
	
}
