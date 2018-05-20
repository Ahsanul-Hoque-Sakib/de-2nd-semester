#include<stdio.h>
main()
{
    int i,j,n,temp,k;

    printf("Declare Array Size:");
    scanf("%d",&n);

    int a[n];

    printf("Enter Elements Into Array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("The Array Is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

            }

          printf("\nPass %d:",i);
            for(k=0;k<n;k++){
                printf("%d\t",a[k]);
            }


        }

        /*
          printf("\nPass %d:",i);
            for(k=0;k<n;k++){
                printf("%d\t",a[k]);
            }
            */

    }

    printf("\nThe Ascending Sorted Array Is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}
