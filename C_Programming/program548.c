// 
// 

#include<stdio.h>

int CountCapital(char *str)
{
    static int iCount = 0 ;

    if(*str != '\0')
    {
        if((*str >= 'A') &&(*str<='Z'))
        {
            iCount++;
        }
        
        str++;

        CountCapital(str);
    }
    return iCount ;
}

int main()
{
    int iRet= 0 ;
    char Arr[20] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Number of capital letter are:%d\n",iRet);

    return 0 ;
}