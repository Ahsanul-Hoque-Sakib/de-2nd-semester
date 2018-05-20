#include<stdio.h>
main()
{
    int i,j,n;

    printf("Declare Array Size:");
    scanf("%d",&n);

    int a[n];

    printf("Enter the Elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("The Array Is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    printf("\nInput the element to be Searched:");
    scanf("%d",&j);

    i=0;

    do{
            if(a[i]==j){printf("\n%d is found at index %d\n",a[i],i);
            n=i-1;
            }
            i++;
    }while(i<n);

    if(i==n){printf("\nData Not Found\n");}

    printf("\nThe condition was false at i<n = %d<%d\n",i,n);

    return 0;
}
