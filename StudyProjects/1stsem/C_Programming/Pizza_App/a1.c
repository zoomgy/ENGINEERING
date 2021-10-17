#include <stdio.h>
#include <string.h>
int main(){
    printf("\nHello user welcome to PIZZA KING ,largest Pizza food chain in MATHURA");
    int jammer4=0;
    char passbypass[10]="exit";
    char passbypass2[10]="exit";
    int a=32,b=44,c=56,d=90,e=89,f=99,g=10,h=19,i=19,j=19,k=9,l=55;
    while (jammer4!=6){
    printf("\nPlease Choose user type number:\n1.ADMIN LOGIN\n2.USER LOGIN\n3.EXIT THE PROGRAM\n--> ");
    char r[10],c1[10]="a",c2[10]="b",c3[10]="c",c4[10]="d",c5[10]="e",c6[10]="f",c7[10]="a",c8[10]="b",c9[10]="c",c10[10]="d",c11[10]="e",c12[10]="f",c13[13]="g";
    int user,jammer=0,jammer2=0,jammer3=0,amount1=0,amount2=0;
    char order[10];
    scanf("%d",&user);


        if(user==1){
            printf("\nHello admin please enter your password");
                char pass[10];
                char pass1[10]="adminpass";
                printf("\nEnter the password or type 'exit' to quit \n--> ");
                scanf("%s",pass);
                int value = strcmp(pass,pass1);
                int bypassvalue=strcmp(pass,passbypass);
                if (bypassvalue==0){
                    printf("\nExiting the user password login");
                }
                else {

                while ((value != 0))
            {
                printf("Wrong password, please enter Password again or type 'exit' to quit \n--> ");
                scanf("%s",pass);
                value = strcmp (pass,pass1);
                bypassvalue = strcmp (pass,passbypass);
                if (bypassvalue==0){
                    value = 0;
                }
               
                
            }
            if (bypassvalue==0){
                printf("\nExiting the user password login");
            }
            else if (value == 0) {
                
                    printf("\nWelcome admin\nHow can I help you");

                while (jammer!=4) {


                    printf("\n1.View todays revenue generated.");
                    printf("\n2.View stocks.");
                    printf("\n3.Edit stocks.");
                    printf("\n4.Logout.\n-->");
                        int p;
                        
                        scanf("%d",&p);
                        if(p==1){
                            printf("\nTotal Revenue Generated :\n$696969696");
                        }
                        else if (p==2){
                            printf("\nPizza Stocks for today are :");
                            printf("\n      a.Cheese floor pizza Large Packs - %d Small Packs - %d\n      b.Cheesy tomato pizza - %d Small Packs - %d\n      c.Veggie Crunch pizza - %d Small Packs - %d\n      d.Fairy Fun pizza - %d Small Packs - %d\n      e.Master moon pizza - %d Small Packs - %d\n      f.Auriferous gold pizza - %d Small Packs - %d",a,g,b,h,c,i,d,j,e,k,f,l);
                        }
                        else if (p==3){
                            
                            printf("\nPlease select what you want to edit :\n      a.Cheese floor pizza\n      b.Cheesy tomato pizza\n      c.Veggie Crunch pizza\n      d.Fairy Fun pizza\n      e.Master moon pizza\n      f.Auriferous gold pizza \n-->");
                            scanf("%s",r);
                            int valuec1 = strcmp(r,c1);
                            int valuec2 = strcmp(r,c2);
                            int valuec3 = strcmp(r,c3);
                            int valuec4 = strcmp(r,c4);
                            int valuec5 = strcmp(r,c5);
                            int valuec6 = strcmp(r,c6);
                            
                                if (valuec1==0){
                                    printf("\nEnter new stock value for Cheese floor pizza\nLarge Packs : ");
                                    scanf("%d",&a);
                                    printf("Small Packs : ");
                                    scanf("%d",&g);
                                    printf("\nUpdated stock value for Cheese floor pizza is ->\nLarge Packs : %d\nSmall Packs : %d",a,g);
                                }

                                else if (valuec2==0){
                                    printf("\nEnter new stock value for Cheesy tomato pizza -->\nLarge Packs : ");
                                    scanf("%d",&b);
                                    printf("Small Packs : ");
                                    scanf("%d",&h);
                                    printf("\nUpdated stock value for Cheesy tomato pizza is ->\nLarge Packs : %d\nSmall Packs : %d",b,h);
                                }
                                else if (valuec3==0){
                                    printf("\nEnter new stock value for Veggie Crunch pizza -->\nLarge Packs : ");
                                    scanf("%d",&c);
                                    printf("Small Packs : ");
                                    scanf("%d",&i);
                                    printf("\nUpdated stock value for Veggie Crunch pizza is ->\nLarge Packs : %d\nSmall Packs : %d",c,i);
                                }
                                else if (valuec4==0){
                                    printf("\nEnter new stock value for Fairy Fun pizza -->\nLarge Packs : ");
                                    scanf("%d",&d);
                                    printf("Small Packs : ");
                                    scanf("%d",&j);
                                    printf("\nUpdated stock value for Fairy Fun pizza is ->\nLarge Packs : %d\nSmall Packs : %d",d,j);
                                }
                                else if (valuec5==0){
                                    printf("\nEnter new stock value for Master Moon pizza -->\nLarge Packs : ");
                                    scanf("%d",&e);
                                    printf("Small Packs : ");
                                    scanf("%d",&k);
                                    printf("\nUpdated stock value for Cheese floor pizza is ->\nLarge Packs : %d\nSmall Packs : %d",e,k);
                                }
                                else if (valuec6==0){
                                    printf("\nEnter new stock value for Auriferous Gold pizza -->\nLarge Packs : ");
                                    scanf("%d",&f);
                                    printf("Small Packs : ");
                                    scanf("%d",&l);
                                    printf("\nUpdated stock value for Auriferrous Gold pizza is ->\nLarge Packs : %d\nSmall Packs : %d",f,l);
                                }
                                else {
                                    printf("\nWrong Choice");
                                }

                        }
                        else if(p==4)  {
                            jammer = p;
                        }
                        else {
                            printf("\nWrong Choice");
                        }
                        
                }
                }
                else{
                    printf("Program will never come here");
                }
                }   
        }
            
            

        else if(user==2){
    
            
        printf("\nHello user please enter your password");
        char userpass[100];
        char userpass1[100]="userpass";
        printf("\nEnter the password or type 'exit' to quit\n--> ");
        scanf("%s",userpass);
        int value = strcmp(userpass,userpass1);
        int bypassvalue2=strcmp(userpass,passbypass2);
        if (bypassvalue2==0){
                    printf("\nExiting the user password login");
                }
                else {
        while (value != 0){
            printf("Wrong password, please enter Password again or type 'exit' to quit\n--> ");
            scanf("%s",userpass);
            value = strcmp (userpass,userpass1);
            bypassvalue2 = strcmp (userpass,passbypass2);
                if (bypassvalue2==0){
                    value = 0;
                }
        }
        if (bypassvalue2==0){
                printf("\nExiting the user password login");
            }
            else if (value == 0 ) {
               
                printf("\nWelcome user");
                while (jammer2!=4){
                    printf("\nWhat would you like to order today :");
                    printf("\n      a.Cheese floor pizza");
                       if (a>0&&g>0){
                            printf(" : %d Large and %d Small Packs are AVAILABLE",a,g);

                        }
                        else if(a>0&&g<=0){
                            printf(" : Only %d Large Packs Are Available",a);
                        }
                        else if(a<=0&&g>0){
                            printf(" : Only %d Small Packs are AVAILABLE",g);
                        }
                        else {
                            printf(" : Unavailable");
                        }
                    printf("\n      b.Cheesy tomato pizza ");
                        if (b>0&&h>0){
                            printf(" : %d Large and %d Small Packs are AVAILABLE",b,h);

                        }
                        else if(b>0&&h<=0){
                            printf(" : Only %d Large Packs Are Available",b);
                        }
                        else if(b<=0&&h>0){
                            printf(" : Only %d Small Packs are AVAILABLE",h);
                        }
                        else {
                            printf(" : Unavailable");
                        }
                    printf("\n      c.Veggie Crunch pizza");
                        if (c>0&&i>0){
                            printf(" : %d Large and %d Small Packs are AVAILABLE",c,i);

                        }
                        else if(c>0&&i<=0){
                            printf(" : Only %d Large Packs Are Available",c);
                        }
                        else if(c<=0&&i>0){
                            printf(" : Only %d Small Packs are AVAILABLE",i);
                        }
                        else {
                            printf(" : Unavailable");
                        }
                    printf("\n      d.Fairy Fun pizza");
                        if (d>0&&j>0){
                            printf(" : %d Large and %d Small Packs are AVAILABLE",d,j);

                        }
                        else if(d>0&&j<=0){
                            printf(" : Only %d Large Packs Are Available",d);
                        }
                        else if(d<=0&&j>0){
                            printf(" : Only %d Small Packs are AVAILABLE",j);
                        }
                        else {
                            printf(" : Unavailable");
                        }
                    printf("\n      e.Master moon pizza");
                        if (e>0&&k>0){
                            printf(" : %d Large and %d Small Packs are AVAILABLE",e,k);

                        }
                        else if(e>0&&k<=0){
                            printf(" : Only %d Large Packs Are Available",e);
                        }
                        else if(e<=0&&k>0){
                            printf(" : Only %d Small Packs are AVAILABLE",k);
                        }
                        else {
                            printf(" : Unavailable");
                        }
                    printf("\n      f.Auriferous gold pizza");
                        if (f>0&&l>0){
                            printf(" : %d Large and %d Small Packs are AVAILABLE",f,l);

                        }
                        else if(f>0&&l<=0){
                            printf(" : Only %d Large Packs Are Available",f);
                        }
                        else if(f<=0&&l>0){
                            printf(" : Only %d Small Packs are AVAILABLE",l);
                        }
                        else {
                            printf(" : Unavailable");
                        }
                        printf("\n      g.LOGOUT");
                        printf("\n      -->");
                        scanf("%s",order);
                        int valuec45= strcmp(order,c13);
                        if (valuec45 == 0){
                            jammer2 = 4;
                        }
                        
                        else {
                        int valuec7 = strcmp(order,c7);
int valuec8 = strcmp(order,c8);
int valuec9 = strcmp(order,c9);
int valuec10 = strcmp(order,c10);
int valuec11= strcmp(order,c11);
int valuec12= strcmp(order,c12);
if (valuec7==0){
    
    if (a>0&&g>0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);
    }
    else if(a>0&&g<=0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);
    }
    else if(a<=0&&g>0){
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);
    }
    else{
        printf("Wrong Choice") ;
        }
}
else if (valuec8==0){
    
    if (b>0&&h>0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);
    }
    else if(b>0&&h<=0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);
    }
    else if(b<=0&&h>0){
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);
    }
    else {
        printf("Wrong Choice") ;
           }
}
else if (valuec9==0){
    
    if (c>0&&i>0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);
    }
    else if(c>0&&i<=0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);   
    }
    else if(c<=0&&i>0){
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);
    }
    else {
        printf("Wrong Choice") ;
           }
}
else if (valuec10==0){
    
    if (d>0&&j>0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);
    }
    else if(d>0&&j<=0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);
    }
    else if(d<=0&&j>0){
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);
    }
    else {
        printf("Wrong Choice") ;
           }
}
else if (valuec11==0){
    
    if (e>0&&k>0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);
    }
    else if(e>0&&k<=0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);
    }
    else if(e<=0&&k>0){
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);       
    }
    else {
        printf("Wrong Choice") ;
           }
}
else if (valuec12==0){
    
    if (f>0&&l>0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);
    }
    else if(f>0&&l<=0){
    printf("\nHow much large boxes you want to order --> ");
    scanf("%d",&amount1);
    }
    else if(f<=0&&l>0){
    printf("\nHow much small boxes you want to order --> ");
    scanf("%d",&amount2);
    }
    else {
        printf("Wrong Choice") ;
           }
}

                        printf("\nOrder summary -->");
                        
                            
                        if (valuec7==0&&amount1<=a&&amount2<=g){
                             printf("\nCheese Floor pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                             a = a - amount1;
                             g = g - amount2;
                         }  
                         else if(valuec7==0&&(amount1>a||amount2>g)){
                             while (amount1>a||amount2>g){
                            printf("\nSorry We are left with only %d large Cheese floor pizza packs and %d small packs please order within the limit ",a,g);
                            if (a>0&&g>0){
                            printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);

                            }
                            else if(a>0&&g<=0){
                           printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            amount2 = 0;
                            }
                            else if(a<=0&&g>0){
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);
                            amount1 = 0;
                            }
                            else {
                            printf("Wrong Choice");
                            }
                            }
                            printf("\nCheese Floor pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                            a = a - amount1;
                            g = g - amount2;
                         }
                         else if (valuec8==0&&amount1<=b&&amount2<=h){
                             printf("\nCheesy Tomato pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                             b = b - amount1;
                             h = h - amount2;
                         }   
                         else if(valuec8==0&&(amount1>b||amount2>h)){
                             while (amount1>b||amount2>h){
                            printf("\nSorry We are left with only %d large Cheesy Tomato pizza packs and %d small packs please order within the limit ",b,h);
                            if (b>0&&h>0){
                            printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);

                            }
                            else if(b>0&&h<=0){
                           printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            amount2 = 0;
                            }
                            else if(b<=0&&h>0){
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);
                            amount1 = 0;
                            }
                            else {
                            printf("Wrong Choice");
                            }
                            }
                            printf("\nCheesy Tomato pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                            b = b - amount1;
                            h = h - amount2;
                         }
                         else if (valuec9==0&&amount1<=c&&amount2<=i){
                             printf("\nVeggie Crunch pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                             c = c - amount1;
                             i = i - amount2;
                         }  
                         else if(valuec9==0&&(amount1>c||amount2>i)){
                             while (amount1>c||amount2>i){
                            printf("\nSorry We are left with only %d large Veggie Crunch pizza pizza packs and %d small packs please order within the limit ",c,i);
                            if (c>0&&i>0){
                            printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);

                            }
                            else if(c>0&&i<=0){
                           printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            amount2 = 0;
                            }
                            else if(c<=0&&i>0){
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);
                            amount1 = 0;
                            }
                            else {
                            printf("Wrong Choice");
                            }
                            }
                            printf("\nVeggie Crunch pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                            c = c - amount1;
                            i = i - amount2;
                         }
                         else if (valuec10==0&&amount1<=d&&amount2<=j){
                             printf("\nFairy Fun pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                             d = d - amount1;
                             j = j - amount2;
                         }  
                         else if(valuec10==0&&(amount1>d||amount2>j)){
                             while (amount1>d||amount2>j){
                            printf("\nSorry We are left with only %d large Fairy Fun pizza packs and %d small packs please order within the limit ",d,j);
                            if (d>0&&j>0){
                            printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);

                            }
                            else if(d>0&&j<=0){
                           printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            amount2 = 0;
                            }
                            else if(d<=0&&j>0){
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);
                            amount1 = 0;
                            }
                            else {
                            printf("Wrong Choice");
                            }
                            }
                            printf("\nFairy Fun pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                            d = d - amount1;
                            j = j - amount2;
                         }
                        else if (valuec11==0&&amount1<=e&&amount2<=k){
                             printf("\nMaster Moon pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                             e = e - amount1;
                             k = k - amount2;
                         }  
                         else if(valuec11==0&&(amount1>e||amount2>k)){
                             while (amount1>e||amount2>k){
                            printf("\nSorry We are left with only %d large Master Moon pizza packs and %d small packs please order within the limit ",e,k);
                            if (e>0&&k>0){
                            printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);

                            }
                            else if(e>0&&k<=0){
                           printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            amount2 = 0;
                            }
                            else if(e<=0&&k>0){
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);
                            amount1 = 0;
                            }
                            else {
                            printf("Wrong Choice");
                            }
                            }
                            printf("\nMaster Moon pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                            e = e - amount1;
                            k = k - amount2;
                         }
                        else if (valuec12==0&&amount2<=f&&amount2<=l){
                             printf("\nAuriferrous Gold pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                             f = f - amount1;
                             l = l - amount2;
                         }  
                         else if(valuec12==0&&(amount1>f||amount2>l)){
                             while (amount1>f||amount2>l){
                            printf("\nSorry We are left with only %d large Auriferrous Gold pizza packs and %d small packs please order within the limit ",f,l);
                            if (f>0&&l>0){
                            printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);

                            }
                            else if(f>0&&l<=0){
                           printf("\nHow much large boxes you want to order --> ");
                            scanf("%d",&amount1);
                            amount2 = 0;
                            }
                            else if(f<=0&&l>0){
                            printf("\nHow much small boxes you want to order --> ");
                            scanf("%d",&amount2);
                            amount1 =0;
                            }
                            else {
                            printf("Wrong Choice");
                            }
                            }
                            printf("\nAuriferrous Gold pizza - Large packets : %d Small packets : %d\n",amount1,amount2);
                            f = f - amount1;
                            l = l - amount2;
                         }
                         else {
                             printf("j");
                         }
                         
                         }
                
                 }
                 }
                 }
        }
                    
               
          else if (user ==3)    {
              jammer4 = 6;
          }     
        
        else {
            printf("\nERROR 421 Please select correct option ");
        }
    }
    return 0;
}
    
