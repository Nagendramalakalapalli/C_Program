#include <stdio.h>
#include <string.h>
#include<stdlib.h>
 
int Ip_address(char *addr)
 {
     int val,dot=0;
     char *p_addr;
     if(addr == NULL)
     {
         return 0;
     }
     p_addr = strtok(addr,".");
      if(p_addr == NULL)
      {
          return 0;
      }

    while(p_addr)
    {
        if(!Ip_address)
        {
            return 0;
        }
        val = atoi(p_addr);
        if(val >= 0 && val <=255)
        {
            p_addr=strtok(NULL,".");
            if(p_addr != NULL)
            {
                dot++;
            }
            else
            {
                return 0;
            }
        }
    }
}



int main()
{
    char ip_addr[] = "192.168.7.10";
    printf("%d", Ip_address(ip_addr));
    Ip_address(ip_addr);
    return 0;
}