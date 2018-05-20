#include<stdio.h>
main()
{
    int i,x,y,n,c,L,S,s;
    printf("Declare Array Size:");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    s=a[0];
    for(i=1;i<n;i++){
        x=s;
        y=a[i];
        if(x>y){
            L=x;
            s=y;
        }
        else{
            L=y;
            s=x;
        }
        while(L%s!=0){
            c=L%s;
            L=s;
            s=c;
        }
    }

    printf("GCD is:%d",s);

    return 0;

}
