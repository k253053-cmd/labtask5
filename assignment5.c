#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(){
bool hasPrerequisite =0;
bool isCourseFull =0;

if(hasPrerequisite && isCourseFull){
printf("enrolled succesfully");
}
else if(isCourseFull){
printf("Cannot enroll: prerequisite missing,");
}
else if(hasPrerequisite){
printf("Cannot enroll: courseis full");
}
else{
    printf("Cannot enroll: prerequisite missing and course is full.");
}



    return 0;
}