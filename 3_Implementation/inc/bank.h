#include<stdio.h>
#include<stdlib.h>
/**
 * @brief struct accountdetail
 * 
 */
struct accountdetail
{
    int acntno,pin,bal;
    char name[10],addr[10],cont[10];
};

/**
 * @brief dispay function
 * 
 * @param a accountdetail
 * @param n no. of customers
 */
void display(struct accountdetail *a,int n)
{
        int i;
        for(i=0;i<n;i++)
        {
            printf("\n%d %s %s %s %d %d",a[i].acntno,a[i].name,a[i].addr,a[i].cont,a[i].pin,a[i].bal);
        }
}
/**
 * @brief function to search for customer
 * 
 * @param a accountdetail
 * @param n no. of customers
 */
    void search(struct accountdetail *a,int n)
    {
        int i,accno,cont,pin,f=0;
        char addr;
        printf("enter the number to search");
        scanf("%d",&accno);
        for(i=0;i<n;i++)
        {
            if (a[i].acntno==accno)
            {
                printf("\n%d %s %s %s %d %d",a[i].acntno,a[i].name,a[i].addr,a[i].cont,a[i].pin,a[i].bal);
                f=1;
                break;
            }
        }
        if(f==0)
            printf("record not found");
    }

    /**
     * @brief function to modify account deatils
     * 
     @param a accountdetail
 * @param n no. of customers
     */
        void modify(struct accountdetail *a,int n)
        {
            int i,accno,choice1,f=0;
            char addr;
            printf("enter accnt to modify");
                scanf("%d",&accno);
                for(i=0;i<n;i++)
                {
                    if(a[i].acntno==accno)
                    {
                        f=1;
                        printf("1.address\n2.contact\n3.pin");
                        scanf("%d",&choice1);
                        if(choice1==1)
                        {
                            printf("enter new address");
                            scanf("%s",a[i].addr);
                        }
                        else if(choice1==2)
                        {
                            printf("enter new contact number");
                            scanf("%s",a[i].cont);
                        }
                        else if(choice1==3)
                        {
                            printf("enter new pin");
                            scanf("%d",&a[i].pin);
                        }
                        else
                        {
                            printf("invalid choice");
                        }
                        break;
                    }
                }
                if(f==0)
                    printf("record not found");
        }
        /**
         * @brief function to delete account
         * 
          @param a accountdetail
 * @param n no. of customers
         */
        void del(struct accountdetail *a,int *n)
        {
            int i,accno,f=0;
            printf("enter account number to delete");
                scanf("%d",&accno);
                for(i=0;i<*n;i++)
                {
                    if(a[i].acntno==accno)
                    {
                        for(;i<(*n-1);i++)
                        {
                            a[i]=a[i+1];
                        }
                        f=1;
                        *n-=1;
                        break;
                    }
                }
                if(f==0)
                    printf("record not found");
        }
        /**
         * @brief function to withdraw money
         * 
          @param a accountdetail
 * @param n no. of customers 
         */
       void withdraw(struct accountdetail *a,int n)
       {
                int i,accno,bal,f=0,amount;
                printf("enter account number to withdraw");
                scanf("%d",&accno);
                for(i=0;i<n;i++)
                {
                    if(a[i].acntno==accno)
                    {
                        f=1;
                        if(a[i].bal>500)
                        {
                            printf("enter the amount to withdraw");
                            scanf("%d",&amount);
                            if(a[i].bal-amount>=500)
                            {
                                a[i].bal-=amount;
                                printf("\n *** Withdraw Success *****\n");
                            }
                            else
                                printf("insufficient balance");
                        }
                        else
                                printf("insufficient balance");
                        break;
                    }

                }
                if(f==0)
                    printf("record not found");
       }

       /**
        * @brief function to deposit money in account
        * 
         @param a accountdetail
 * @param n no. of customers
        */
          void deposit(struct accountdetail *a,int n)
                {
          int accno,i,amount,f=0,deposit;
          printf("enter account number to deposit");
                scanf("%d",&accno);
                for(i=0;i<n;i++)
                {
                    if(a[i].acntno==accno)
                    {
                        f=1;
                    printf("enter the amount to deposit");
                    scanf("%d",&amount);
                    a[i].bal+=amount;
                    printf("**deposit success***");
                    }
                if(f==0)
                    printf("record not found");
       }
                }
                void exit_1(struct accountdetail *a,int n)
                {
                    printf("invalid choice");
                }

