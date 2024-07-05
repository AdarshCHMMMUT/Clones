// how to scan a string
#include<stdio.h>
#include<string.h> // this is uset to acess string function but not require for using %s
int  main(){
    char *str = "adarsh";   // this is how we define pointer of string
  printf("%s\n", str);//


 //char str_1 = "anand";  
 // printf("%s", &str_1); ( you can't print string by using amperstsand unlike earlier cases)


  char str_2[] = {'a','l','o','k','\0'}; // this is how declare sting in general case
  printf("%s\n",str_2);


  char str_3[] = "shashi"; // easy way to declare and print string
  printf("%s\n",str_3);

 char s[] = "Get organized! Learn C!!";

printf ("%s\n", s);
printf ("%s\n", &s);  // this is the special case due to it's output ( iska matlab ki is address ke bad ke prinnt jo ki yaha par zero hai  )
printf ("%s\n", &s[2]);// this is the special case due to it's output ( iska matlab ki is address ke bad ke prinnt jo ki yaha par 2 hai  )
printf ("%c\n", s[2]);


  int i = 0;
  char str_4[] ="vandana";
  while(str_4[i] != '\0'){
    
      printf("%c",str_4[i]);// this is how we can print string by using character
    i++;

  }

  char str_5[10];
  scanf("%s",str_5);  // for print and scanning you don't need to use big bracket
  printf("%s",str_5);// but here you can only work with 1 word 

 // char str_6[30];
  //gets(str_6);  // easiest to scan and print multi word string  in the former case if you would print two word later would be dis appered
  //puts(str_6);//

 /*char s[] = "No two viruses work similarly";
int i = 0;
while (s[i] != 0)
{
printf ("%c %c\n", s[i], *(s + i));  // these four will give the simmilar results
printf ("%c %c\n", i[s], *(i + s));
i++;
}*/
return 0;
}