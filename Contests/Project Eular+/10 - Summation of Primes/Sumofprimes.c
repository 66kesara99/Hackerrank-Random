
#include <stdio.h>

int main()
{
    int t,n,i,check,j;
    long total,counter,temp;
    int l[1000000] = {2,3,0};

    scanf("%d",&t);

    for (j = 0; j<t; j++){
        scanf("%d",&n);

        i = 0;
        total = 0;

        while (l[i] <= n){
            total = total+l[i];
            i = i+1;

            if (l[i] == 0){
                counter = l[i-1];
                check = 0;
                while (check == 0){
                    counter++;
                    if (counter%2 !=0 && counter%3 !=0){
                        temp = 4;
                        while (temp*temp <= counter){
                            if (counter%temp == 0){
                                break;
                            }
                            temp = temp+1;
                        }
                        if (temp*temp>counter){
                            l[i] = counter;
                            check = 1;
                        }
                    }    
                }
            }
        }
        printf("%d\n",total);
    }
    return 0;
}