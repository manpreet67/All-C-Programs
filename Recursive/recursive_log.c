#include<stdio.h>
int log(int b, int n ) {
    if (n <= b) {
        return 1;
    } else {
        return log(b, n/b)+1 ;

    }
}
void main()
{
float c;
c=log(32,5);
print(c);

}
