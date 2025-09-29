        // handle item number input (support multi-digit)
        ungetc(opt,stdin);
        if(scanf("%d",&item)!=1){
            printf("Invalid input. Try again.\n");
            continue;
        }

        // add selected item to cart
        if(item>=1&&item<=20){
            switch(item){
                case 1:price[i]=9.90;strcpy(prodName[i],"Munchy Chocolate");break;
                case 2:price[i]=29.00;strcpy(prodName[i],"Math Textbook");break;
                case 3:price[i]=185.00;strcpy(prodName[i],"Xbox Controller");break;
                case 4:price[i]=369.90;strcpy(prodName[i],"MSI Monitor 144Hz");break;
                case 5:price[i]=5.99;strcpy(prodName[i],"Jasmine Seeds");break;
                case 6:price[i]=138.88;strcpy(prodName[i],"Razer Keyboard");break;
                case 7:price[i]=16.90;strcpy(prodName[i],"Pringles 12x Cans");break;
                case 8:price[i]=241.91;strcpy(prodName[i],"HyperX Headphones");break;
                case 9:price[i]=1809.00;strcpy(prodName[i],"iPhone 13");break;
                case 10:price[i]=29.80;strcpy(prodName[i],"Deluxe Pillow");break;
                case 11:price[i]=8.99;strcpy(prodName[i],"Marshmello");break;
                case 12:price[i]=7.00;strcpy(prodName[i],"Maggi Kari");break;
                case 13:price[i]=6.50;strcpy(prodName[i],"Sour Candy");break;
                case 14:price[i]=59.90;strcpy(prodName[i],"Gaming Mouse");break;
                case 15:price[i]=249.00;strcpy(prodName[i],"Mechanical Keyboard");break;
                case 16:price[i]=120.00;strcpy(prodName[i],"Bluetooth Speaker");break;
                case 17:price[i]=12.50;strcpy(prodName[i],"Cactus");break;
                case 18:price[i]=99.00;strcpy(prodName[i],"Bonsai Tree");break;
                case 19:price[i]=45.00;strcpy(prodName[i],"Orchid");break;
                case 20:price[i]=39.90;strcpy(prodName[i],"Coffee Beans 1kg");break;
            }
            printf("Enter quantity for %s: ",prodName[i]);
            scanf("%d",&qty[i]);
            printf("%d x %s added to cart!\n",qty[i],prodName[i]);
            i++;
        }else{
            printf("Invalid input. Try again.\n");
        }

