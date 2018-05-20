#include<stdio.h>
main()
{
    int i,j,n,temp,k;

    printf("Declare Array Size:");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("The Array Is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    for(i=1;i<n;i++){

        j=0;

        while(j<n-i){

            if(a[j]>a[j+1]){

                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }

            printf("\nPass %d:",i);
            for(k=0;k<n;k++){
                printf("%d\t",a[k]);
            }

            j++;
        }
    }

    printf("\nArray In Ascending Order:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
