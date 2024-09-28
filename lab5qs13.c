#include <stdio.h>
int main()
{
	char originalchar,echar,dechar;
    char key = 'x';

    printf("enter a character to encrypt: ");
    scanf("%c",&originalchar);

    echar = originalchar ^ key;
    printf("encrypted character: %c\n", echar);

    dechar = echar ^ key;
    printf("decrypted character: %c\n", dechar);
    
    return 0;
}
