// 
// 

#include<stdio.h>

int strlenX(char *str)
{
    static int iCount = 0 ;

    if(*str != '\0')
    {
        iCount++;
        str++;

        strlenX(str);
    }
    return iCount ;
}

int main()
{
    int iRet= 0 ;
    char Arr[20] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("length of Arr is :%d\n",iRet);


    return 0 ;
}