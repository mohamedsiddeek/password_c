#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
unsigned index =0; unsigned int flag =0;
unsigned char user[7];
unsigned char pass[7]={'1','2','3','4','5','6','7'};
printf("enter pass \n");
for( index =0 ; index<7 ;index++){

    scanf("%c \n",&user[index]);



}
printf("%s \n",user);
 for( index =0 ;  index<7 ;index++){
    if(pass[index]!=user[index]){
        flag =1;
      break;
    }
 }
if( flag==1){
    printf(" not welcome\n");
}else{
    printf("welcome \n");
}

    return 0;
}
