#include <stdio.h> //printf(),scanf()
#define showline printf("----------------------------------\n");

int main(){
    
    int bus_number; //int(%d) , long int(%ld)

    showline
    printf("    Bus Number information  \n");
    showline
    printf("Enter bus number: ");
    scanf("%d", &bus_number);
    showline
    switch(bus_number){
        case 57 : printf("go to Pinklo, Bangkhunnon\n");
                 break;
        case 3 : printf("go to Sanam Luang, Ladphrao\n");
                break;
        case 71 : printf("go to Hua Lamphong, Yaowarat\n");
                 break;
        case 56 : printf("go to Bang Lamphu, Sapan Krungthon\n");
                 break;
        case 539 : printf("go to Samsen, Anusawari Chai\n");
                  break;
        default : printf("Don't Have Data\n");
    }
    showline
    return 0;
}