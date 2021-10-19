#include <stdio.h>
void process();
void open();
int main()
{
    int i;

start:
    printf("     \n            ******** Welcome To The A-V Bank ******** ");
    printf("\n\n \n");
    printf(" (if you have a bank account press 1) or  (press 2 to create an account)");
    printf("\n");
    scanf("%d", &i);
    if (i == 1)
    {
        printf(" Hello !!!! you enterd the 1 \n");
        process();
    }
    else if (i == 2)
    {
        printf("Hello !!!! you entered the 2 \n");
        open();
    }
    else
    {
        printf("\n\n *** DEFAULT *** \n you have entered the wrong character \n Please Try Again");
        goto start;
    }
    return 0;
}
void open()
{
    int age,pin;
    char name[20];
    long long int mn,an;
        printf("\n\nEnter your name is \n ");
        scanf("%s",name);
        fflush(stdin);
        printf("Enter your age is \n ");
        scanf("%d",&age);
        fflush(stdin);
        printf("Enter your mobile no. is\n ");
        scanf("%lld",&mn);
        fflush(stdin);
        printf("Enter your account no. is\n ");
        scanf("%lld",&an);
        fflush(stdin);
        printf("Enter your PIN \n ");
        scanf("%d",&pin);
        fflush(stdin);
        printf("\n\n Details entered by you are :---\n\n\n\nName           ---->       ( %s )\nAge            ---->       ( %d )\nMobile no.     ---->       ( %lld )\nAccount no.    ---->       ( %lld )\nPIN            ---->       ( %d )\n",name,age,mn,an,pin);

}
void process()
{
    int j;
    new : printf("\n\nEnter the right PIN to direct redirect to your details\n");
    scanf("%d", &j);
    if (j == 1234)
    {
        printf("\n\nWELCOME\n\n\n ");
        printf("your name is           ------->   (ASHISH KUMAR)\n ");
        printf("your age is            ------->   ( 19 )\n ");
        printf("your mobile no. is     ------->   ( 8383965341 )\n ");
        printf("your account no. is    ------->   ( 658463579524857 )\n ");
        printf("your PIN is            ------->   ( 1*** )\n ");
    }
    else
    {
        printf("\n\n**SORRY** \n you entered the wrong PIN  \n");
        goto new;
    }
}