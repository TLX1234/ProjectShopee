        // cart menu
        if(opt=='C'||opt=='c'){ 
            int cartChoice;
            printf("\n--- Your Cart Menu ---\n");
            printf("1. View Cart\n");
            printf("2. Remove Item from Cart\n");
            printf("3. Checkout\n");
            printf("Choose: ");
            scanf("%d",&cartChoice);

            // view cart
            if(cartChoice==1){
                grandTotal=0;
                printf("\n--- Your Cart ---\n");
                for(j=0;j<i;j++){
                    float subtotal=price[j]*qty[j];
                    printf("%d x %s | RM %.2f each = RM %.2f\n",qty[j],prodName[j],price[j],subtotal);
                    grandTotal+=subtotal;
                }
                if(i==0){
                    printf("Your cart is empty!\n");
                }else{
                    printf("Grand Total: RM %.2f\n",grandTotal);
                }
            }

            // remove item
            else if(cartChoice==2){
                if(i==0){
                    printf("Your cart is empty, nothing to remove!\n");
                }else{
                    int removeIndex;
                    printf("Enter item number (1-%d) to remove: ",i);
                    scanf("%d",&removeIndex);
                    if(removeIndex<1||removeIndex>i){
                        printf("Invalid item number!\n");
                    }else{
                    	int k;
                        removeIndex--;
                        printf("Removed %s from cart.\n",prodName[removeIndex]);
                        for(k=removeIndex;k<i-1;k++){
                            strcpy(prodName[k],prodName[k+1]);
                            price[k]=price[k+1];
                            qty[k]=qty[k+1];
                        }
                        i--;
                    }
                }
            }

            // checkout
            else if(cartChoice==3){
                if(i==0){
                    printf("Your cart is empty, cannot checkout!\n");
                }else{
                    grandTotal=0;
                    for(j=0;j<i;j++){
                        float subtotal=price[j]*qty[j];
                        grandTotal+=subtotal;
                    }

                    char address[200];
                    printf("\nEnter your delivery address: ");
                    getchar();
                    fgets(address,sizeof(address),stdin);
                    address[strcspn(address,"\n")]='\0';

                    int shippingChoice;
                    float shipping=0.0;
                    printf("\nChoose shipping method:\n");
                    printf("1. Self-pickup (RM 5.00)\n");
                    printf("2. Standard delivery (RM 10.00)\n");
                    printf("3. Express delivery (RM 20.00)\n");
                    printf("Enter choice: ");
                    scanf("%d",&shippingChoice);
                    if(shippingChoice==1)shipping=5.0;
                    else if(shippingChoice==2)shipping=10.0;
                    else if(shippingChoice==3)shipping=20.0;
                    else{
                        printf("Invalid choice, default standard delivery applied.\n");
                        shipping=10.0;
                    }

                    float tax=grandTotal*0.06;
                    float finalTotal=grandTotal+tax+shipping;

                    printf("\n--- Checkout ---\n");
                    printf("Delivery Address: %s\n",address);
                    printf("Items: %d\n",i);
                    printf("Subtotal: RM %.2f\n",grandTotal);
                    printf("Tax (6%%): RM %.2f\n",tax);
                    printf("Shipping: RM %.2f\n",shipping);
                    printf("Total Amount: RM %.2f\n",finalTotal);
                    printf("Thank you for shopping!\n");
                    i=0;
                }
            }

            else{
                printf("Invalid choice!\n");
            }
            continue;
        }

