#include <stdio.h>

typedef enum
{
    CALC,
    PIC,
    QQ,
    WX,
    ERR,
    MAX
} E_CHOOSE;




void calcProcess(void)
{
    printf("calcProcess\n");    
}

void picProcess(void)
{
    printf("picProcess\n");    
}
void qqProcess(void)
{
    printf("qqProcess\n");    
}
void wxProcess(void)
{
    printf("wxProcess\n");    
}
void errProcess(void)
{
    printf("errProcess\n");    
}

typedef void (*funcpoint)(void);

funcpoint funcarr[MAX]=
{
    calcProcess,picProcess,qqProcess,wxProcess,errProcess
};


int main(int argc, char const *argv[])
{
    int ch = 0;
    
    while (1)
    {
        printf("welcome to phone\n");
        scanf("%d",&ch);
#ifdef TEST
        switch (ch)
        {
            case CALC: calcProcess(); break;
            case PIC: picProcess(); break;
            case QQ: qqProcess(); break;
            case WX: wxProcess(); break;
            default: errProcess(); break;
        }
#else
        funcarr[ch]();
#endif
    }
    
    return 0;
}
