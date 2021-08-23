#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LONG 5
int main()
{
    int n = 100,choix,k,j,i,x,*d;
    char ch[100], *p=ch;
    char autre[40];
    puts("pour manipulation avec pointeurs taper 1");
    puts("pour manipulation sans pointeurs taper 2");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
    {
    	
    do
    {
        printf("Saisir une chaine : ");
        fgets(ch, sizeof(ch), stdin);
    } while (strlen(ch) < LONG);
    n = strlen(ch);
    

for (p = ch; *p; p++) /*supprimer les caracteres non alphanumeric*/
{

                       

       if (!(isalnum(*p)!=0) ||!( isalpha(*p)!=0))
       {
           (*p)=' ';
       }
		   
		   
}
		   
   
	
    for (p = ch; *p; p++)/*supprimer les espaces superflus*/
{

        while (((*p) == ' ') && (*(p + 1) == ' '))
            strcpy(p + 1, p + 2);
}
   
for (p = ch; *p; p++)/*changer est par etre */
{
 
 
        while ((*p) == ' '&&(*(p+1)=='e')&&(*(p+2)=='s')&&(*(p+3)=='t'))
        {
        
            *(p+1)='e';
            *(p+2)='t';
            *(p+3)='r';
            *(p+4)='e';
            *(p+5)=' ';
           
          
            
        }
    }
        for (p = ch; *p; p++)/*changer er par ons*/
{

        while ((*p) == 'e'&&(*(p+1)=='r'))
        { 
		 
        
		
            (*p)='o';
            *(p+1)='n';
            *(p+2)='s';
          
            
        }
}
    puts(ch);
    break;

  
}case 2:
	{
		  do
    {
        printf("Saisir une chaine : ");
        fgets(ch, sizeof(ch), stdin);
    } while (strlen(ch) < LONG);
    n = strlen(ch);
    for ( i = 0; i < n; i++)/*remplacer non alpha numerique par espaces*/
    {
        if (!(ch[i] >= 'a' && ch[i] <= 'z') && !(ch[i] >= 'A' && ch[i] <= 'Z') && !(ch[i] >= '0' && ch[i] <= '9') && !(ch[i] == '\0'))
            ch[i] = ' ';
    }

for( i=0;i<n;)     /*suprimer les espaces superflus*/
{
    if((ch[i]==' ')&&(ch[i+1]==' '))
    {
        for(k=i+1;k<n;k++)
        {
            ch[k]=ch[k+1];
        }
        n=n-1;
    }
    else if(ch[0]==' ')
    {
        for(k=0;k<n;k++)
        {
            ch[k]=ch[k+1];
        }
        n=n-1;
    }
    else
        i++;
}
  
     while (strstr(ch, " est ") != 0)

    {
        strcpy(autre, strstr(ch, " est ") + strlen(" est "));/*remplacer est par etre*/
        strcpy(strstr(ch, " est "), " etre ");
        strcat(strstr(ch, " etre ") + 4, autre);
    }
 while (strstr(ch, "er") != 0)

    {
        strcpy(autre, strstr(ch, "er ") + strlen("er "));/*remplacer est par etre*/
        strcpy(strstr(ch, "er"), "ons " );
        strcat(strstr(ch, "ons ") + 3, autre);
    }
     
       puts(ch);
	break; 
  }
  

	
	
	}
	}
	
