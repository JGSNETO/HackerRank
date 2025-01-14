// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>


// int main(){

//     char test[10] = {'1','2','3', 'b', 'c'};
//     for(int i=0; i<10;i++){
//         if(test[i]>='0' && test[i] <= '9'){
//             printf("%c ",test[i]);
//         }
//         if(test[i]>'a'){
//             printf("%c ", test[i]);
//         }
//     }
//     system("PAUSE");
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int frequency[10];
    char *s = malloc(1048*sizeof(char));
    scanf("%s",s);
    s=realloc(s,strlen(s)+1);
    for(int i=0; i<10;i++) frequency[i] = 0;
    for(int j=0; j<strlen(s); j++){
        if(s[j]>='0' && s[j]<='9'){
            frequency[(int)(s[j]-'0')]++;
        }
    }
    for(int k=0; k<10; k++){
        printf("%d ", frequency[k]);
    }
    return 0;
}
