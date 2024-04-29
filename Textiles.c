#include<stdio.h>
#include<math.h>

void msg(void);

int main() {
    char shop_name[20] = "Shri_Laxmi_Textial";
    char adrres[50] = "Manjunatha_Nagar,_Navalagund._._";
    int pin= 582208;
    
    
    int ch,date,month,year,item, qty[100],rate[100],amount[100],total_amount = 0;
    char ch1,ch2;
    printf("Enter The data (00/00/0000): ");
    scanf("%d%c%d%c%d",&date,&ch1,&month,&ch2,&year);

    for(int i=1;i<=5;i++) { // 5 bill only for experiment

        printf("%dst Bill",i);
        printf("\n\nHow Meny Item(s) : ");
        scanf("%d",&item);

        for(int x=1; x<=item; x++) {

            printf("%d\tQuantity : ",x);
            scanf("%d",&qty[x]);

            printf("  \tRate : ");
            scanf("%d",&rate[x]);

            amount[x] = qty[x]*rate[x];
            total_amount += amount[x];
        }
        
        for(int j=i;j==i; j++) {
            printf("\t  > %s <  \n",shop_name);
            printf("%s%d\n",adrres,pin);
            printf("\tGST : \n");
            printf("\tMobile No : 9844987645\n");
            printf("\t\tJAY SHRI RAM\n");
            printf("Bill No : %d\n",i);
            printf("DATE : %d%c%d%c%d\n",date,ch1,month,ch2,year);
            printf("____________________________________________\n");
            printf("SI  : Item Name :    Qty   :  Rate  : Amount :\n");

            for(int k=1;k<=item; k++) {
                printf("%d : slip : %d : %d : %d :\n",k,qty[k],rate[k],amount[k]);
            }

            printf("--------------------------------------------\n");
            printf("Total item(s) : %d\t",item);
            printf("       %d\n",total_amount);
            printf("--------------------------------------------\n");
            printf("--------------------------------------------\n");
            printf("TOTAL ---> \t\t %d\n",total_amount);

            msg();

            return 0;

        }
    }
}

void msg(void) {
    printf("\n\n\t\tNo Exchange\n");
    printf("\tTHANK YOU VISIT AGAIN\n");
    printf("\tFollow us on Insta : \n\t@nagaraj_creations_\n");
}