#include<stdio.h>
int choice;
main()
{
   while(1)
     {
         printf("Welcome to Airtel Call Centre\n");
         printf("Choose\n1. To continue in english press 1\n2. Hindi mein jaankari ke liye 2 dabayein\n3. To Exit press 0\n");
         scanf("%d",&choice);
        switch(choice)
        {
          case 1:
               english();
               break;
          case 2:
               hindi();
               break;
          case 0:
               exit(0);
               break;
        }
         
    }
    
}

void english()
{

 while(1)
     {
         printf("Now choose following\n");
         printf("1. To know your bill press 1\n2. For porting request press 2\n3. To talk to our customer care executive press 3\n4. To go back to previous menu press 9\n5. To exit press 0\n");
         scanf("%d",&choice);
        switch(choice)
        {
          case 1:
               Bill();
               break;
          case 2:
               Porting();
               break;
          case 3:
               customer();
               break;
          case 9:
               return;
               break;
          case 0:
               exit(0);
               break;
        }
         
    }
   

}
void hindi()
{
     while(1)
     {
         printf("Inme se kuch chune\n");
         printf("1. Bill ke bare mein janne ke liye 1 dbae\n2. porting request ke liye 2 dbae\n3. customer care se baat krne ke liye 3 dbae\n4. Wapas janne ke liye 9 dbae\n5. Bhar jaane ke liye 0 dbae\n");
         scanf("%d",&choice);
        switch(choice)
        {
          case 1:
               BillH();
               break;
          case 2:
               PortingH();
               break;
          case 3:
               customerH();
               break;
          case 9:
               return;
               break;
          case 0:
               exit(0);
               break;
        }
         
    }
    

}
void Bill()
{
    while(1)
     {
         printf("Your bill is Rs800\n");
         printf("1. To go back to previous menu press 9\n2. To exit press 0\n");
         scanf("%d",&choice);
        switch(choice)
        {
          
          case 9:
               return;
               break;
          case 0:
               exit(0);
               break;
        }
         
    }
    
}
void Porting()
{
     while(1)
     {
         printf("Your Porting request is under process.\n");
         printf("1. To go back to previous menu press 9\n2. To exit press 0\n");
         scanf("%d",&choice);
        switch(choice)
        {
          
          case 9:
               return;
               break;
          case 0:
               exit(0);
               break;
        }
         
    }
}
void customer()
{

 while(1)
     {
         printf("All our executives is busy in learning Data structure.\n");
         printf("1. To go back to previous menu press 9\n2. To exit press 0\n");
         scanf("%d",&choice);
        switch(choice)
        {
          
          case 9:
               return;
               break;
          case 0:
               exit(0);
               break;
        }
         
    }   
    
}
void BillH()
{
while(1)
     {
         printf("Aapka bill Rs 800 hai\n");
         printf("1. Wapas janne ke liye 9 dbae\n2. Bhar jaane ke liye 0 dbae\n");
         scanf("%d",&choice);
        switch(choice)
        {
          
          case 9:
               return;
               break;
          case 0:
               exit(0);
               break;
        }
         
    }
    
}
void PortingH()
{
while(1)
     {
         printf("Aapki Porting request challu hai\n");
         printf("1. Wapas janne ke liye 9 dbae\n2. Bhar jaane ke liye 0 dbae\n");
         scanf("%d",&choice);
        switch(choice)
        {
          
          case 9:
               return;
               break;
          case 0:
               exit(0);
               break;
        }
         
    }
    
}
void customerH()
{
while(1)
     {
         printf("Hmare sare executive data structure sikhre hai\n");
         printf("1. Wapas janne ke liye 9 dbae\n2. Bhar jaane ke liye 0 dbae\n");
         scanf("%d",&choice);
        switch(choice)
        {
          
          case 9:
               return;
               break;
          case 0:
               exit(0);
               break;
        }
         
    }
    
}