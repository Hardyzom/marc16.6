#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]){

if(argc>2){
    printf("Hiba! Maximum egy paraméter adható meg!\n");
    exit(1);
}

else if(argc == 1){
    printf("Hello World!\n");
}
else if((strcmp("Batman", argv[1]) == 0) || (strcmp("Robin", argv[1]) == 0)){
    printf("Denevérveszély!\n");
}

else{
    printf("Hello %s!\n",argv[1]);
}

return 0;

}