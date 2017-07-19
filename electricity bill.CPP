#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
    float c,u,b,tu,tb;
    int x;
    char ch;
    do{
    printf("\n\nEnter name:");
    scanf("%s",&ch);
    printf("\nenter unit:");
    scanf("%f",&u);
    if(u<=75){c=u*3.80;
    b=c+55;
    printf("\nbill = %.1f\n",b);
    tu=tu+u;
    tb=tb+b;
    }
    else if(u<=200){c=(75*3.80)+(u-75)*5.14;
        b=c+55;
        printf("\nbill = %.1f\n",b);
        tu=tu+u;
        tb=tb+b;
    }
    else if(u<=300){c=(75*3.80)+(125*5.14)+(u-200)*5.36;
    b=c+55;
    printf("\nbill = %.1f\n",b);
    tu=tu+u;
    tb=tb+b;
    }
    else if(u<=400){c=(75*3.80)+(125*5.14)+(100*5.36)+(u-300)*5.63;
    b=c+55;
    printf("\nbill = %.1f\n",b);
    tu=tu+u;
    tb=tb+b;
    }
    else{c=(75*3.80)+(125*5.14)+(100*5.36)+(100*5.63)+(u-400)*8.70;
    b=c+55;
    printf("\nbill = %.2f\n",b);
    tu=tu+u;
    tb=tb+b;
    }
    printf("\ndo you want to continue?y/n\n\n");
    x=getche();
    }while(x=='y');
    getch();

    printf("\n\ntotal unit = %.2f\n",tu);
    printf("\ntotal bill = %.2f\n",tb);

    return 0;
}

