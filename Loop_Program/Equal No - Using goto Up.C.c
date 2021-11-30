#include<stdio.h>
#include<conio.h>

int main()
{
        int Num1 = 0, Num2 =0;
        DWN:


        printf("\n Enter 2 integer Number = ");
        scanf("%d%d", &Num1, &Num2);

        if(Num1 == Num2)
        {
            printf("\n Both Numbers are Equal.");
            goto DWN;


        }
         if  (Num1 > Num2)
        {
            printf("\n Num1 is Grether than Num2", Num1);


        }
          else (Num1 < Num2 );
        {
            printf("\n Num2 is Grether than Num1", Num2);

        }


                printf("\n Thanks");

                getch();
                return 0;

}
