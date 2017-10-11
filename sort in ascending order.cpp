#include<stdio.h>
main(){
	
	int a[15];
	int i,j,n,swap=0;
	
	printf("How many elements:\n");
	scanf("%d",&n);
	
	printf("Enter the elements:\n");
	for(i=1;i<=n;i++){
		scanf("%d\t",&a[i]);
	}
	
		printf("The array is:\n");
	for(i=1;i<=n;i++){
		printf("%d\t",a[i]);
	}
	
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				swap=a[i];
				a[i]=a[j];
				a[j]=swap;
			}
			
		}
	}
	
	printf("The sorted array in Ascending:\n");
	for(i=1;i<=n;i++){
		printf("%d\t",a[i]);
	
	}
}
