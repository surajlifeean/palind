#include <stdio.h>
#include <stdlib.h>
strev(char *st)
{
	int i=0,temp;
	int l=strlen(st);
	 while(i!=l/2)
	  {
	  	temp=st[i];
	  	st[i]=st[l-1-i];
	  	st[l-1-i]=temp;
	  	i++;
	  }
}
int stcmp(char *s1, char *s2)
{
    int f,i=0;
    if(strlen(s1)!=strlen(s2))
        return 1;
    else
        while(i<strlen(s1))
    {
        if(s1[i]!=s2[i])
           {
        return 0;
        break;
           }
        else
        f=1;

    i++;
    }
    if(f==1)
        return 1;

}
void main()
{
	int str[100],str2[100];
    printf("input!\n");
    scanf("%s",str);
    strcpy(str2,str);
    strrev(str);
    if(stcmp(str,str2))
     printf("true");
     else
     printf("false");
}


