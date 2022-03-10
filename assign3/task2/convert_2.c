#include<stdio.h>
#include<stdlib.h>
char* convert_2(int dec)
{
	int j;
  int count = 0;
    for(int i = 31; i >= 0; i--)
    {
        j = dec >> i;
        if(count ==4 ){
          count = 0;
          printf(" ");
        }
        if(j & 1){
          printf("1");
          count++;
        }
            
        else{
          printf("0");
          count++;
        }
            
    }
}

int main() {
	int n;
	char * bin;
	printf("Enter the Decimal Number\n");
	scanf("%d",&n);
	
	printf("The Binary Notation of %d is \t 0b%s", n, bin);
  bin = convert_2(n);
}

