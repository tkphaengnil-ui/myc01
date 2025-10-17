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
    if(bus_number == 57){
        printf("go to Pinklo, Bangkhunnon\n");
    }else if (bus_number == 3){
        printf("go to Sanam Luang, Ladphrao\n");
    }else if (bus_number == 71){
        printf("go to Hua Lamphong, Yaowarat\n");
    }else if (bus_number == 56){
        printf("go to Bang Lamphu, Sapan Krungthon\n");
    }else if (bus_number == 539){
        printf("go to Samsen, Anusawari Chai\n");
    }else{
        printf("Don't Have Data\n");
    }
    showline
    return 0;
}