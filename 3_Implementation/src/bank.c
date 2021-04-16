/**
 * @file bank.c
 * @author Pavan B Mulimani
 * @brief Bank account management system
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */



#include"bank.h"                
/**
 * @brief main function
 * 
 * @return int 
 */
int main()
{
    struct accountdetail *a;
    int i,n,choice,accno,f=0;
    int choice1;
    printf("enter the number of people:");
    scanf("%d",&n);
    a=(struct accountdetail*)malloc(sizeof(struct accountdetail)*n);
    for (i=0;i<n;i++)
    {
        printf("enter the Account Number,Name,Address,Contact Number,ATM PIN");
        scanf("%d%s%s%s%d",&a[i].acntno,a[i].name,a[i].addr,a[i].cont,&a[i].pin);
        a[i].bal=800;
    }
    do
    {
        printf("\n1.diplay\n2.search\n3.modify\n4.delete\n5.withdraw\n6.deposit\n7.exit");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                display(a,n);
                break;
            case 2:
                search(a,n);
                 break;
            case 3:
                modify(a,n);
                break;
            case 4:
                del(a,&n);
                break;
            case 5:
                withdraw(a,n);
                break;
            case 6:
                deposit(a,n);
                break;
            case 7:
                exit_1(a,n);
                break;
        }
    }while(choice!=7);
}
