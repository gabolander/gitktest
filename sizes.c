#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#if 0
#define LITTLE_ENDIAN 0
#define BIG_ENDIAN    1
#endif


int endian(void) {
    int i = 1;
    char *p = (char *)&i;

    return (p[0] == 1) ?  LITTLE_ENDIAN : BIG_ENDIAN;
}

int main(void)
{
    long l_val=1L;
    system("clear");

    printf( " ================================================= \n" );
    printf( " |     Sizeof dei vari tipi primitivi del C      | \n" );
    printf( " ================================================= \n" );
    putchar('\n');
    printf( "Endianness is %s \n", (endian()==LITTLE_ENDIAN)?"Little Endian":"Big Endian");
    putchar('\n');
    printf( "Sizeof di short int ......... =  %ld \n", sizeof(short) );
    printf( "Sizeof di unsigned short int  =  %ld \n", sizeof(unsigned short) );
    printf( "Sizeof di int ............... =  %ld \n", sizeof(int) );
    printf( "Sizeof di unsigned int ...... =  %ld \n", sizeof(unsigned int) );
    printf( "Sizeof di char .............. =  %ld \n", sizeof(char) );
    printf( "Sizeof di unsigned char ..... =  %ld \n", sizeof(unsigned char) );
    printf( "Sizeof di long .............. =  %ld \n", sizeof(long) );
    printf( "Sizeof di unsigned long ..... =  %ld \n", sizeof(unsigned long) );
    printf( "Sizeof di long long ......... =  %ld \n", sizeof(long long) );
    printf( "Sizeof di unsigned long long. =  %ld \n", sizeof(unsigned long long));
    printf( "Sizeof di unsigned size_t =  %ld \n", sizeof(size_t));
    printf( "Sizeof di unsigned off_t =  %ld \n", sizeof(off_t));
    putchar('\n');
    printf( "Sizeof di float ............. =  %ld \n", sizeof(float) );
    printf( "Sizeof di double ............ =  %ld \n", sizeof(double) );
    printf( "Sizeof di puntatore a char .. =  %ld \n", sizeof(char *) );
    printf( "Sizeof di puntatore ad int .. =  %ld \n", sizeof(int *) );
    printf( "Sizeof di puntatore a long .. =  %ld \n", sizeof(long *) );
    printf( "Sizeof di puntatore a float   =  %ld \n", sizeof(float *) );
    printf( "Sizeof di puntatore a double  =  %ld \n", sizeof(double *) );
    printf( "Sizeof di puntatore a size_t  =  %ld \n", sizeof(size_t *) );
    printf( "2<<0  =  %d \n",2<<0 );
    printf( "2<<1  =  %d \n",2<<1 );
    printf( "2<<2  =  %d \n",2<<2 );
    printf( "2<<3  =  %d \n",2<<3 );

    printf( "l_val ora vale : %ld\n", l_val );
    l_val<<=3;
    printf( "l_val (dopo <<3) vale : %ld\n", l_val );
    putchar('\n');

# if __WORDSIZE == 64
    printf ( "Risulta una Wordside a 64 bit.(__WORDSIZE=%d).\n", __WORDSIZE );
# else
    printf ( "Risulta una Wordside a 32 bit.(__WORDSIZE=%d).\n", __WORDSIZE  );
# endif

#if defined(__i386) 
    printf("defined(__i386) \n");
#endif
#if defined(__AMD64__) 
    printf("defined(__AMD64__) \n");
#endif
#if defined(__x86_64__) 
    printf("defined(__x86_64__) \n");
#endif
#if defined(__X86_64__) 
    printf("defined(__X86_64__) \n");
#endif
#if defined(__amd64__)
    printf("defined(__amd64__)\n");
#endif

    return 0;
}
// ex: ts=4 sts=4 sw=4 nohls expandtab:
