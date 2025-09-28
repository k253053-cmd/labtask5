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
/*
IF hasPrerequisite == 1 THEN
IF isCourseFull == 0 THEN
PRINT "Enrolled successfully"
ELSE
PRINT "Cannot enroll: course is full"
ENDIF
ELSE
IF isCourseFull == 1 THEN
PRINT "Cannot enroll: prerequisite missing and course is full"
ELSE
PRINT "Cannot enroll: prerequisite missing"
ENDIF
ENDIF
*/