/*
    Problem statement :
Accept string from user and return number of digits from the string.
  
Input : "abcd xy"
Output : 0
 
Input : India21
Output : 2
 
Input : Marvellous 75Pune98
Output : 4
 */
 
 int CountDigits(char *Str)
 {
	 int iCount = 0;
	 
	 while(*Str != '\0')
	 {
		 if((*Str >= '0') && (*Str <= '9'))
		 {
			 iCount++;
		 }
		 Str++;
	 }
	 return iCount;
 }
 
 #include<stdio.h>
 
 int main()
 {
   char crr[30];
   int iRet = 0;
   
   printf("Enter the string \n");
   scanf("%[^'\n']s",crr);
   
   iRet = CountDigits(crr);
   
   printf("No of digits in string are : %d", iRet);
   
 return 0;
 }
 
 /*
 
 output
 
 D:\ProgramTopicWise\LB\4ProblemsOnString\CountDigits>myexe
Enter the string
rautnikita03@gmail.com
No of digits in string are : 2

*/