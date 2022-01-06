#include <stdio.h>
#include <cstdlib>

int main()
{
    float gbsize;
    float time;
    printf("Wie gross ist dein Download (in gb)\n");
    scanf("%f", &gbsize);
    time = gbsize * 1000.0 / 3.5 / 60.0 / 60.0;
    int o1 = (int) time;
    float f1 = (float) o1;
    float f2 = (time - f1) ;
    f2 = f2 * 60.0;
    printf("Dein Download braucht%3.0fh und%3.0fmin\n", f1, f2);
    system("pause");
    return 0;
}

