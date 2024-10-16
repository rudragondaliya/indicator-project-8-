#include<stdio.h>

int main(){
   
     char str[1000];
     char *ptr = str;
     int length = 0;
     
     printf("enter string:");
     gets(str);
     
     while(*ptr != '\0') 
     {
     	length++;
     	ptr++;
	 }
	 
	 printf("length of the given string %s : %d\n",str,length);
}
