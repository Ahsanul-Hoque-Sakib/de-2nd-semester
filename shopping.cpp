#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int price,quantity,vat,discount,Total,dq,vq,T=0,Td=0,Tv=0,gf=1000,At;
    char x,ch;

do{
    printf("\nEnter item name:");
    scanf("%s",&ch);
    printf("\nEnter price:");
    scanf("%d",&price);
    printf("\nEnter quantity:");
    scanf("%d",&quantity);
vat=(price*15)/100;
    discount=price*0.10;

    Total=((price+vat)-discount)*quantity;
printf("%d",vat);
    dq=discount*quantity;
    vq=vat*quantity;

    T=T+Total;
    Td=Td+dq;
    Tv=Tv+vq;

    printf("Do you want to continue?y-yes &n-no\n");
       x=getche();
}while(x=='y');
getch();
if(T<10000){

    printf("Total purchase: %d\n",T);
printf("Total discount: %d\n",Td);
printf("No gift amount\n");
printf("Need to pay: %d\n",T);
}
else{
          printf("Total purchase: %d\n",T);
printf("Total discount: %d\n",Td);
printf("Gift amount: 1000BDT\n");
At=T-gf;
printf("Need to pay: %d\n",At);

}

return 0;


}
