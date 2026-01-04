#include <stdio.h>
#include <string.h>

int main() {
    int choice, submenu, OperatorChoice, pincode = 3624;
    int biller;
    float amt;
    float amount = 10000.23;
    char phnNum[20];
    int pin;
    char ref[100];
    char accountNo[20];
    char monthYear[20];

    printf("Bkash\n");
    printf("1. Send Money\n");
    printf("2. Mobile Recharge\n");
    printf("3. Payment\n");
    printf("4. Cash Out\n");
    printf("5. Pay Bill\n");
    printf("6. Microfinance\n");
    printf("\n");

    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter Reciever Account Number: ");
            scanf("%s", phnNum);
            
            printf("Enter Ammount: ");
            scanf("%f", &amt);
            if(amt==amount) {
                printf("Enter Refference: ");
                scanf("%s", ref);
            
                printf("Enter Your PIN Number To Confirm: ");
                scanf("%d", &pin);

                if(pin == pincode) {
                    printf("Send Money Successful :)\n");
                } else {
                    printf("Invalid PIN. Enter Your Valid PIN.\n");
                }
            }else {
                printf("Insufficient Balance!\n");
            }
            break;
        
        case 2:
            printf("Choice Your Operator\n");
            printf("1. Grameenphone\n");
            printf("2. Robi\n");
            printf("3. Banglalink\n");
            printf("4. Teletalk\n");
            scanf("%d", &OperatorChoice);
            
            if(OperatorChoice == 1) printf("Enter A Grameenphone Number To Recharge: ");
            else if(OperatorChoice == 2) printf("Enter A Robi Number To Recharge: ");
            else if(OperatorChoice == 3) printf("Enter A Banglalink Number To Recharge: ");
            else if(OperatorChoice == 4) printf("Enter A Teletalk Number To Recharge: ");
            else {
                printf("Invalid Operator\n");
                return 0;
            }

            scanf("%s", phnNum);
            int isValid = 0; 
            
            if(OperatorChoice == 1) { 
                if(strncmp(phnNum, "017", 3) == 0 || strncmp(phnNum, "013", 3) == 0) {
                    isValid = 1;
                }
            }
            else if(OperatorChoice == 2) { 
                if(strncmp(phnNum, "018", 3) == 0 || strncmp(phnNum, "016", 3) == 0) { 
                    isValid = 1;
                }
            }
            else if(OperatorChoice == 3) { 
                if(strncmp(phnNum, "019", 3) == 0 || strncmp(phnNum, "014", 3) == 0) {
                    isValid = 1;
                }
            }
            else if(OperatorChoice == 4) { 
                if(strncmp(phnNum, "015", 3) == 0) {
                    isValid = 1;
                }
            }

            if(isValid == 0) {
                printf("Error: Number does not match with the Operator prefix!\n");
                break; 
            }
            
            printf("Enter Ammount: ");
            scanf("%f", &amt);
            if(amt <= amount) {
                printf("Enter Your PIN: ");
                scanf("%d", &pin);
                if(pin == pincode) {
                    printf("Recharge Successful\n");
                } else {
                    printf("Invalid PIN. Enter Your Valid PIN.\n");
                }
            } else {
                printf("Insufficient Balance!\n");
            }
            break;
            
        case 3:
            printf("Enter Merchant Account Number: ");
            scanf("%s", phnNum);
            
            printf("Enter Ammount: ");
            scanf("%f", &amt);
            if(amt <= amount) {
                printf("Enter Reference: ");
                scanf("%s", ref);
                
                printf("Enter Your PIN: ");
                scanf("%d", &pin);
                if(pin == pincode) {
                    printf("Payment Successful\n");
                } else {
                    printf("Invalid PIN. Enter Your Valid PIN.\n");
                }
            } else {
                printf("Insufficient Balance!\n");
            }
            break;
        
        case 4:
            printf("Enter Agent Account Number: ");
            scanf("%s", phnNum);
            
            printf("Enter Ammount: ");
            scanf("%f", &amt);
            if(amt <= amount) {
                printf("Enter Your PIN: ");
                scanf("%d", &pin);
                if(pin == pincode) {
                    printf("Cash Out Successful\n");
                } else {
                    printf("Invalid PIN. Enter Your Valid PIN.\n");
                }
            } else {
                printf("Insufficient Balance!\n");
            }
            break;
            
        case 5:
            printf("1. Electricity (Prepaid)\n");
            printf("2. Electricity (Postpaid)\n");
            printf("3. Gas\n");
            printf("4. Water\n");
            printf("5. Internet And Phone\n");
            printf("6. TV\n");
            printf("7. City Services\n");
            
            scanf("%d", &submenu);
            
            switch(submenu) {
                case 1:
                    printf("Select Biller\n");
                    printf("1. NESCO\n");
                    printf("2. DESCO\n");
                    printf("3. DODC\n");
                    
                    scanf("%d", &biller);
                    if(biller == 1 || biller == 2 || biller == 3) {
                        printf("Enter Account No: ");
                        scanf("%s", accountNo);
                        
                        printf("Enter Ammount: ");
                        scanf("%f", &amt);
                        if(amt <= amount) {
                            printf("Enter Your PIN: ");
                            scanf("%d", &pin);
                            if(pin == pincode) {
                                printf("Bill Pay Successful\n");
                            } else {
                                printf("Invalid PIN. Enter Your Valid PIN.\n");
                            }
                        } else {
                            printf("Insufficient Balance!\n");
                        }
                    } else {
                        printf("Invalid Option!\n");
                    }
                    break;
                    
                case 2:
                    printf("Select Biller\n");
                    printf("1. NESCO\n");
                    printf("2. DESCO\n");
                    printf("3. DODC\n");
                    
                    scanf("%d", &biller);
                    if(biller == 1 || biller == 2 || biller == 3) {
                        printf("Enter Account No: ");
                        scanf("%s", accountNo);
                        printf("Enter Ammount: ");
                        scanf("%f", &amt);
                        if(amt <= amount) {
                            printf("Enter Your PIN: ");
                            scanf("%d", &pin);
                            if(pin == pincode) printf("Bill Pay Successful\n");
                            else printf("Invalid PIN. Enter Your Valid PIN.\n");
                        } else printf("Insufficient Balance!\n");
                    } else printf("Invalid Option!\n");
                    break;
                    
                case 3:
                    printf("Select Biller\n");
                    printf("1. Jalalabad\n");
                    printf("2. Sundarban\n");
                    printf("3. Jamuna\n");
                    
                    scanf("%d", &biller);
                    if(biller == 1 || biller == 2 || biller == 3) {
                        printf("Enter Account No: ");
                        scanf("%s", accountNo);
                        printf("Enter Ammount: ");
                        scanf("%f", &amt);
                        if(amt <= amount) {
                            printf("Enter Your PIN: ");
                            scanf("%d", &pin);
                            if(pin == pincode) printf("Bill Pay Successful\n");
                            else printf("Invalid PIN. Enter Your Valid PIN.\n");
                        } else printf("Insufficient Balance!\n");
                    } else printf("Invalid Option!\n");
                    break;

                case 4:
                    printf("Select Biller\n");
                    printf("1. DHAKA WASA\n");
                    printf("2. CTG WASA\n");
                    printf("3. RANGPUR WASA\n");
                    
                    scanf("%d", &biller);
                    if(biller == 1 || biller == 2 || biller == 3) {
                        printf("Enter Account No: ");
                        scanf("%s", accountNo);
                        printf("Enter Ammount: ");
                        scanf("%f", &amt);
                        if(amt <= amount) {
                            printf("Enter Your PIN: ");
                            scanf("%d", &pin);
                            if(pin == pincode) printf("Bill Pay Successful\n");
                            else printf("Invalid PIN. Enter Your Valid PIN.\n");
                        } else printf("Insufficient Balance!\n");
                    } else printf("Invalid Option!\n");
                    break;

                case 5:
                    printf("Select ISP\n");
                    printf("1. Link3\n");
                    printf("2. Amber IT\n");
                    printf("3. Dot Net\n");
                    
                    scanf("%d", &biller);
                    if(biller == 1 || biller == 2 || biller == 3) {
                        printf("Enter User ID: ");
                        scanf("%s", accountNo);
                        printf("Enter Ammount: ");
                        scanf("%f", &amt);
                        if(amt <= amount) {
                            printf("Enter Your PIN: ");
                            scanf("%d", &pin);
                            if(pin == pincode) printf("Bill Pay Successful\n");
                            else printf("Invalid PIN. Enter Your Valid PIN.\n");
                        } else printf("Insufficient Balance!\n");
                    } else printf("Invalid Option!\n");
                    break;
                
                case 7:
                    printf("Select Organization\n");
                    printf("1. DNCC\n");
                    printf("2. DSCC\n");
                    printf("3. GCC\n");
                    
                    scanf("%d", &biller);
                    if(biller == 1 || biller == 2 || biller == 3) {
                        printf("Enter Account No: ");
                        scanf("%s", accountNo);
                        printf("Enter Month and Year: ");
                        scanf("%s", monthYear);
                        printf("Enter Ammount: ");
                        scanf("%f", &amt);
                        if(amt <= amount) {
                            printf("Enter Your PIN: ");
                            scanf("%d", &pin);
                            if(pin == pincode) printf("Bill Pay Successful\n");
                            else printf("Invalid PIN. Enter Your Valid PIN.\n");
                        } else printf("Insufficient Balance!\n");
                    } else printf("Invalid Option!\n");
                    break;

                default:
                    printf("Invalid Option!\n");
            }
            break;
            
        case 6:
            printf("Select Organization\n");
            printf("1. BURO Bangladesh\n");
            printf("2. UDDIPAN\n");
            printf("3. Shakti Foundation\n");
            
            scanf("%d", &biller);
            if(biller == 1 || biller == 2 || biller == 3) {
                printf("Enter Member/Account ID: ");
                scanf("%s", accountNo);
                printf("Enter Ammount: ");
                scanf("%f", &amt);
                if(amt <= amount) {
                    printf("Enter Your PIN: ");
                    scanf("%d", &pin);
                    if(pin == pincode) {
                        printf("Payment Successful\n");
                    } else {
                        printf("Invalid PIN. Enter Your Valid PIN.\n");
                    }
                } else {
                    printf("Insufficient Balance!\n");
                }
            } else {
                printf("Invalid Option!\n");
            }
            break;
        
        default:
            printf("Invalid Option!\n");
    }
    
    return 0;
}
