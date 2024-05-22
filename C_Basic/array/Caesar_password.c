//凯撒密码：将明文中的所有字母都在字母表上偏移offset位后被替换成密文，当offset大于零时，表示向后偏移；当offset小于零时，表示向前偏移。
//该版本考虑到包含offset过大和过小的情况！！
#include <stdio.h>

int main()
{
    char string[80];
    int offset, i=0, s, real_step, j;
    while ((s=getchar()) != '\n')
    {
        string[i] = s;
        i++;
    }
    scanf("%d", &offset);
    real_step = offset;
    //统一把real_step转换成0-26之间的数；
    while (real_step<0 || real_step > 26)
    {
        if (real_step < 0)
            real_step += 26;
        else if (real_step > 26)
            real_step -= 26;
    }
    //开始移位
    if (real_step >= 1 && real_step <= 26)
    {
        for (j=0; j<i; j++)
        {
            //non-en chars
            if ((string[j] < 'a' || string[j] > 'z') && (string[j] < 'A' || string[j] > 'Z'))
                putchar(string[j]);
            else 
            {
                if (string[j] >= 'A' && string[j] <= 'Z')
                {
                    //先大写处理
                    if ((string[j] + real_step >= 'A') && (string[j]+real_step <= 'Z'))
                        putchar(string[j]+real_step);
                    //大写，但超出范围26 
                    else if ((string[j]+real_step>'Z' && string[j]+real_step<'a'))
                        putchar(string[j]+real_step-90+'A'-1);
                }
                
                if (string[j] >= 'a' && string[j] <= 'z')
                {
                    //后小写处理
                    if ((string[j] + real_step >='a') && (string[j]+real_step <= 'z'))
                    {
                        putchar(string[j]+real_step);
                    }
                    else if (string[j]+real_step > 'z')//小写，但超出范围
                        putchar(string[j]+real_step-122+'a'-1);
                }
                
            }
            
        }
    }
    
    return 0;
}