#include <stdio.h>
#define showline ("-------------------------------------\n");

int main() {
    int s;

    for(s = 1; s <= 100 ; s++){ // ++s, s = s + 1, s+=1
      if(s % 8 != 0){
        continue;
      }
        printf("%d\n", s);
        
    }
    
    return 0;
}