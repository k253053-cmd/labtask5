#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){

int userequal1=0;
char enteredusername[50]="";
char username[50]="TahaJaved";
char password[50]="tahajaved23";
char enteredpassword[50]="";
int passequal = 0;

printf("enter your username: ");
fgets(enteredusername, sizeof(enteredusername),stdin);
enteredusername[strcspn(enteredusername, "\n")] = 0;
userequal1 = strcmp(username,enteredusername);

if(userequal1==0){
printf("enter password: ");
fgets(enteredpassword, sizeof(enteredpassword),stdin);
enteredpassword[strcspn(enteredpassword, "\n")] = 0;
int passequal = strcmp(password, enteredpassword);

if(passequal==0){
printf("logged in");
}
else{
    printf("incorrect password");
}
}
else{
    printf("username not found");
}





    return 0;
}