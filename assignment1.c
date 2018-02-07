//Troy Fitzgerald - c16432792 - Lab Assignment//
#include <stdio.h>
#include <windows.h>
#define DIGIT 4
int main()
{
    int pin[DIGIT]={0,0,0,0};
    int otherpin[DIGIT]={1,2,3,4};
    int changepin[DIGIT];
    int menu;
    int incorrect=0;
    int correct=0;
    char terminate=0;
    int i=0;
    char c;
    
    do
    {
        //Menu List//
        printf("\nMenu:\n1. Verify PIN\n2. Change PIN\n3. Number of Successful and Unsuccessful PINs entered \n4. Exit Program\n*Enter Numbers Individually\n");
        scanf("%d",&menu);
        
        while ((c = getchar()) != '\n' && c != EOF) { } //Stops the program from reading in characters//
        
        //Opening Menu Option//
            switch(menu)
            {
                //Verifying PIN//
                case 1:
                {
                    printf("\nEnter your PIN\n");
                    for(i=0;i<4;i++)
                    {
                        scanf("%d",&pin[i]);
                        while ((c = getchar()) != '\n' && c != EOF) { }
                        
                        if(pin[i]>9||pin[i]<0)
                        {
                            printf("\nInvaild Number Entered\n");
                            break;
                        }//end if//
                    }//end for//
                    
                    //Checking if PIN values entered are equal to set PIN//
                    if(pin[0]==otherpin[0] && pin[1]==otherpin[1] && pin[2]==otherpin[2] && pin[3]==otherpin[3])
                    {
                        printf("\nCorrect PIN\n");
                        correct++;
                        break;
                    }
                    else
                    {
                        printf("\nIncorrect PIN\n");
                        incorrect++;
                        break;
                    }
                }
                //Changing PIN//
                case 2:
                {
                    printf("\nEnter New PIN\n");
                    
                    for(i=0;i<4;i++)
                    {                
                        scanf("%d",&pin[i]);
                        while ((c = getchar()) != '\n' && c != EOF) { }
                        
                        if(pin[i]>9||pin[i]<0)
                        {
                            printf("\nInvaild Number Entered\n");
                            break;
                        }
                    }
                    printf("\nEnter New PIN again.\n");
                    for(i=0;i<4;i++)
                    {
                        scanf("%d",&changepin[i]);
                        while ((c = getchar()) != '\n' && c != EOF) { }
                        
                        if(pin[i]>9||pin[i]<0)
                        {
                            printf("\nInvaild Number Entered\n");
                            break;
                        }
                    }
                    //Checking if both new entered PINs are equal//
                    if(pin[0]==changepin[0] && pin[1]==changepin[1] && pin[2]==changepin[2] && pin[3]==changepin[3])
                    {
                        printf("\nPIN Changed\n");
                        otherpin[0]=changepin[0];
                        otherpin[1]=changepin[1];
                        otherpin[2]=changepin[2];
                        otherpin[3]=changepin[3];
                        break;
                    }
                    else
                    {
                        printf("\nInvalid PIN entered. Try Again.\n");
                        break;
                    }
                }
                //Displaying Successful and Unsuccessful Entries//
                case 3:
                {
                    printf("\nSuccessful Entries %d\nUnsuccessful Entries %d\n",correct,incorrect);
                    break;
                }
                
                //Exiting the Program//
                case 4:
                {
                    printf("\nWould You Like To Exit? (Y/N)\n");
                    scanf("%c",&terminate);
                    if(terminate =='Y'||terminate =='y')
                    {
                        printf("\nExiting Program\n");
                        Sleep(1500);
                        return(0);
                    }
                    break;
                }
                
                default:
                {
                    printf("\nInvalid Entry\n");
                    break;
                }
                
            }
        
    }while(menu==1,2,3,4);
    
}

            
            

        
    
    
    