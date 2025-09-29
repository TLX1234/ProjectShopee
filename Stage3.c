// show food category items
void showFood(){
    printf("\n--- Food Category ---\n");
    printf("11. Marshmello - RM 8.99\n");
    printf("12. Maggi Kari - RM 7.00\n");
    printf("13. Sour Candy - RM 6.50\n");
    printf("20. Coffee Beans 1kg - RM 39.90\n");
}

// show electronics category items
void showElectronics(){
    printf("\n--- Electronics Category ---\n");
    printf("3. Xbox Controller - RM 185.00\n");
    printf("4. MSI Monitor 144Hz - RM 369.90\n");
    printf("6. Razer Keyboard - RM 138.88\n");
    printf("8. HyperX Headphones - RM 241.91\n");
    printf("9. iPhone 13 - RM 1,809.00\n");
    printf("14. Gaming Mouse - RM 59.90\n");
    printf("15. Mechanical Keyboard - RM 249.00\n");
    printf("16. Bluetooth Speaker - RM 120.00\n");
}

// show plants category items
void showPlants(){
    printf("\n--- Plants Category ---\n");
    printf("5. Jasmine Seeds - RM 5.99\n");
    printf("17. Cactus - RM 12.50\n");
    printf("18. Bonsai Tree - RM 99.00\n");
    printf("19. Orchid - RM 45.00\n");
}

        // search category
        if(opt=='O'||opt=='o'){
            printf("Search mode enabled. Enter keyword (food/electronics/plants): ");
            scanf("%s",search);
            if(strcmp(search,"food")==0||strcmp(search,"FOOD")==0){
                showFood();
            }else if(strcmp(search,"electronics")==0||strcmp(search,"ELECTRONICS")==0){
                showElectronics();
            }else if(strcmp(search,"plants")==0||strcmp(search,"PLANTS")==0){
                showPlants();
            }else{
                printf("Category not found.\n");
            }
            continue;
        }

