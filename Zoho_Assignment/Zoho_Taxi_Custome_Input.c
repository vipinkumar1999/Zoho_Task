#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
 int distance(char *a,char *b);
 void taxiprint(int);
     int booking_id=1;
     float taxi1,taxi2,taxi3,taxi4,taxi5;
     int taxi1_book,taxi2_book,taxi3_book,taxi4_book,taxi5_book;
  int taxi_earning[5];
    struct taxi//Structure for storing taxi details
    {
        int customer_id;
        char pickup_point[3];
        char drop_point[3];
        float pickup_time;
    }t[100];

    struct booking//Structure for storing taxi booking details
    {
    // static int taxi_earning[4];
        int booking_id;
        int customer_id;
        char from[3];
        char to[3];
        float pickuptime;
        float droptime;
        int amount;
    }b[5][100];

float booking(struct booking *b,struct taxi t,int no)//Storing booking details
{
b->customer_id=t.customer_id;
b->booking_id=booking_id++;
strcpy(b->from,t.pickup_point);
strcpy(b->to,t.drop_point);
b->pickuptime=t.pickup_time;
int h, w;
float temp, m;
temp = ((distance(t.pickup_point,t.drop_point)+0.0)*0.6)/4;
h = temp / 0.6;
m = temp - (h * 0.6) ;
b->droptime = h+m+t.pickup_time;
w = b->droptime / 1;
h = (b->droptime - w) / 0.6;
m = (b->droptime - w) - (h * 0.6);
b->droptime = w+h+m;
if(b->droptime>=24)
{
 b->droptime-=24;
}
b->amount=50+((distance(t.pickup_point,t.drop_point)*15)-5)*10;
taxi_earning[no]+=b->amount;
return b->droptime;
}

int distance(char *a,char *b)
{
 char start=a[0];
 char stop=b[0];
 return (abs(start-stop));
}

void taxiprint(int taxino)//Calculate distance between start and end points
{
// printf("\nBooking ID: %d\n",b[taxino][i].booking_id);
 printf("\nAlloted Taxi: Taxi%d \n\n",taxino);
}
void display()//Display history of each taxi bookings
{
 int i;
// printf("%d %d %d %d",taxi1_book,taxi2_book,taxi3_book,taxi4_book);
 if(taxi1_book>0)
 {
	printf("Travel History of Taxi-1");
    printf("\nTotal Earning= %d\n",taxi_earning[0]);
     printf("\n Booking_Id |  Customer_Id  |  From | to | pickup_time  | Drop_time  | Amount\n");
  for(i=0;i<taxi1_book;i++)
  {
   printf("     %d      |        %d      |   %s   |  %s |      %.2f    |    %.2f    |  %d\n",b[0][i].booking_id,b[0][i].customer_id,b[0][i].from,b[0][i].to,b[0][i].pickuptime,b[0][i].droptime,b[0][i].amount);
  }
 }
 if(taxi2_book>0)
 {
  int i;
  printf("Travel History of Taxi-2");
  printf("\nTotal Earning= %d\n",taxi_earning[1]);
     printf("\n Booking_Id |  Customer_Id  |  From | to | pickup_time  | Drop_time  | Amount\n");
  for(i=0;i<taxi2_book;i++)
  {
   printf("     %d      |        %d      |   %s   |  %s |      %.2f    |    %.2f    |  %d\n",b[1][i].booking_id,b[1][i].customer_id,b[1][i].from,b[1][i].to,b[1][i].pickuptime,b[1][i].droptime,b[1][i].amount);
  }
 }if(taxi3_book>0)
 {
  int i;
  printf("Travel History of Taxi-3");
  printf("\nTotal Earning= %d\n",taxi_earning[2]);
     printf("\n Booking_Id |  Customer_Id  |  From | to | pickup_time  | Drop_time  | Amount\n");
  for(i=0;i<taxi3_book;i++)
  {
   printf("     %d      |        %d      |   %s   |  %s |      %.2f    |    %.2f    |  %d\n",b[2][i].booking_id,b[2][i].customer_id,b[2][i].from,b[2][i].to,b[2][i].pickuptime,b[2][i].droptime,b[2][i].amount);
  }
 }if(taxi4_book>0)
 {
  int i;
  printf("Travel History of Taxi-4");
  printf("\nTotal Earning= %d\n",taxi_earning[3]);
     printf("\n Booking_Id |  Customer_Id  |  From | to | pickup_time  | Drop_time  | Amount\n");
  for(i=0;i<taxi4_book;i++)
  {
   printf("     %d      |        %d      |   %s   |  %s |      %.2f    |    %.2f    |  %d\n",b[3][i].booking_id,b[3][i].customer_id,b[3][i].from,b[3][i].to,b[3][i].pickuptime,b[3][i].droptime,b[3][i].amount);
  }
 }if(taxi5_book>0)
 {
  int i;
  printf("Travel History of Taxi-5");
  printf("\nTotal Earning= %d\n",taxi_earning[4]);
     printf("\n Booking_Id |  Customer_Id  |  From | to | pickup_time  | Drop_time  | Amount\n");
  for(i=0;i<taxi5_book;i++)
  {
   printf("     %d      |        %d      |   %s   |  %s |      %.2f    |    %.2f    |  %d\n",b[4][i].booking_id,b[4][i].customer_id,b[4][i].from,b[4][i].to,b[4][i].pickuptime,b[4][i].droptime,b[4][i].amount);
  }
 }
}

int main()// Function to handle bookings
{

    while(1)
    {
        int Choice,count,i;//Getting information for booking the Taxi
        
        printf("\n...................Taxi_Booking...................\n");
        printf("\n 1.Booking  2.History 3.exit \n");
        printf("Enter Choice:");
  scanf("%d",&Choice);
        if(Choice==1)
        {
            printf("\nnumber of Booking :");
            scanf("%d",&count);
            for(i=0;i<count;i++)
            {
                printf("\nInput %d:\n",i+1);
                printf("\nCustomer ID :");
                scanf("%d",&t[i].customer_id);
                printf("\nStarting Point :");
                scanf("%s",t[i].pickup_point);
                printf("\nDestination Point :");
                scanf("%s",t[i].drop_point);
                printf("\nTime :");
                scanf("%f",&t[i].pickup_time);
                if(taxi1==0 || taxi1 <= t[i].pickup_time)
                {
                taxi1 = booking(&b[0][taxi1_book++],t[i],0);
                taxiprint(1);
                }
                else if(taxi2==0 || taxi2 <= t[i].pickup_time)
                {
                taxi2 = booking(&b[1][taxi2_book++],t[i],1);
                taxiprint(2);
                }
                else if(taxi3==0 || taxi3 <= t[i].pickup_time)
                {
                 taxi3 = booking(&b[2][taxi3_book++],t[i],2);
                taxiprint(3);
                }
                else if(taxi4==0 || taxi4 <= t[i].pickup_time)
                {
                 taxi4 = booking(&b[3][taxi4_book++],t[i],3);
                taxiprint(4);
                }
                else if(taxi5==0 || taxi5 <= t[i].pickup_time)
                {
                 taxi5 = booking(&b[4][taxi5_book++],t[i],4);
                taxiprint(5);
                }
                else
                {
                 printf("ALL Taxi Are Busy.. Please Try after Some time");
                }
//                decrement();
//				store();
            }
        }
        else if(Choice==2)
        {
display();
        }
        else
        {
            return 0;
        }
    }
    
}
